
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int sa_lock; } ;
typedef TYPE_1__ sa_os_t ;
typedef int sa_idx_tab_t ;
struct TYPE_12__ {scalar_t__ sa_magic; } ;
typedef TYPE_2__ sa_hdr_phys_t ;
struct TYPE_13__ {int * sa_spill_tab; int * sa_bonus_tab; TYPE_4__* sa_os; } ;
typedef TYPE_3__ sa_handle_t ;
typedef scalar_t__ sa_buf_type_t ;
typedef int dmu_object_type_t ;
typedef int dmu_buf_impl_t ;
struct TYPE_14__ {TYPE_1__* os_sa; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_3__*,scalar_t__) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 int * FUNC_9 (TYPE_4__*,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_10(sa_handle_t *VAR_2, sa_buf_type_t VAR_3)
{
 sa_hdr_phys_t *VAR_4;
 dmu_buf_impl_t *VAR_5 = FUNC_3(VAR_2, VAR_3);
 dmu_object_type_t VAR_6 = FUNC_2(VAR_5);
 sa_os_t *VAR_7 = VAR_2->sa_os->os_sa;
 sa_idx_tab_t *VAR_8;

 VAR_4 = FUNC_4(VAR_2, VAR_3);

 FUNC_6(&VAR_7->sa_lock);




 if (FUNC_1(VAR_6) && VAR_4->sa_magic != VAR_1 &&
     VAR_4->sa_magic != 0) {
  FUNC_5(FUNC_0(VAR_4->sa_magic) == VAR_1);
  FUNC_8(VAR_2, VAR_3);
 }

 VAR_8 = FUNC_9(VAR_2->sa_os, VAR_6, VAR_4);

 if (VAR_3 == VAR_0)
  VAR_2->sa_bonus_tab = VAR_8;
 else
  VAR_2->sa_spill_tab = VAR_8;

 FUNC_7(&VAR_7->sa_lock);
 return (0);
}
