
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int sa_lock; } ;
typedef TYPE_1__ sa_os_t ;
struct TYPE_15__ {scalar_t__ sa_magic; void** sa_lengths; void* sa_layout_info; } ;
typedef TYPE_2__ sa_hdr_phys_t ;
struct TYPE_16__ {scalar_t__ sa_spill; TYPE_6__* sa_os; } ;
typedef TYPE_3__ sa_handle_t ;
typedef scalar_t__ sa_buf_type_t ;
struct TYPE_17__ {int db_buf; } ;
typedef TYPE_4__ dmu_buf_impl_t ;
struct TYPE_18__ {TYPE_1__* os_sa; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,scalar_t__) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_6__*,TYPE_2__*,int ,int ,int *,TYPE_3__*) ;
 int VAR_3 ;

void
FUNC_11(sa_handle_t *VAR_4, sa_buf_type_t VAR_5)
{
 sa_hdr_phys_t *VAR_6 = FUNC_5(VAR_4, VAR_5);
 dmu_buf_impl_t *VAR_7;
 sa_os_t *VAR_8 = VAR_4->sa_os->os_sa;
 int VAR_9 = 1;
 int VAR_10;

 FUNC_0(FUNC_3(&VAR_8->sa_lock));
 if (VAR_6->sa_magic == VAR_1)
  return;

 VAR_7 = FUNC_4(VAR_4, VAR_5);

 if (VAR_5 == VAR_2) {
  FUNC_9(VAR_7->db_buf, ((void*)0));
  FUNC_8(VAR_7->db_buf);
 }

 VAR_6->sa_magic = FUNC_2(VAR_6->sa_magic);
 VAR_6->sa_layout_info = FUNC_1(VAR_6->sa_layout_info);






 if (FUNC_6(VAR_6) > 8)
  VAR_9 += (FUNC_6(VAR_6) - 8) >> 1;
 for (VAR_10 = 0; VAR_10 != VAR_9; VAR_10++)
  VAR_6->sa_lengths[VAR_10] =
      FUNC_1(VAR_6->sa_lengths[VAR_10]);

 FUNC_10(VAR_4->sa_os, VAR_6, VAR_0,
     VAR_3, ((void*)0), VAR_4);

 if (VAR_5 == VAR_2)
  FUNC_7(((dmu_buf_impl_t *)VAR_4->sa_spill)->db_buf);
}
