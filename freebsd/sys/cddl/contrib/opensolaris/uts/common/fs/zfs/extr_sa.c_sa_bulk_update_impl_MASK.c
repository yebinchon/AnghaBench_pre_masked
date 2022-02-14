
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int (* sa_update_cb ) (TYPE_3__*,int *) ;scalar_t__ sa_need_attr_registration; } ;
typedef TYPE_2__ sa_os_t ;
struct TYPE_13__ {int sa_lock; TYPE_1__* sa_os; } ;
typedef TYPE_3__ sa_handle_t ;
typedef int sa_bulk_attr_t ;
typedef int dmu_tx_t ;
typedef int dmu_object_type_t ;
struct TYPE_11__ {TYPE_2__* os_sa; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,int *,int,int ,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;

__attribute__((used)) static int
FUNC_8(sa_handle_t *VAR_2, sa_bulk_attr_t *VAR_3, int VAR_4,
    dmu_tx_t *VAR_5)
{
 int VAR_6;
 sa_os_t *VAR_7 = VAR_2->sa_os->os_sa;
 dmu_object_type_t VAR_8;

 VAR_8 = FUNC_3(FUNC_4(VAR_2, VAR_0));

 FUNC_0(VAR_2);
 FUNC_0(FUNC_2(&VAR_2->sa_lock));


 if (VAR_7->sa_need_attr_registration)
  FUNC_6(VAR_2, VAR_5);

 VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_1, VAR_5);
 if (VAR_6 == 0 && !FUNC_1(VAR_8) && VAR_7->sa_update_cb)
  VAR_7->sa_update_cb(VAR_2, VAR_5);

 return (VAR_6);
}
