
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sa_lock; scalar_t__ sa_spill; int * sa_bonus; scalar_t__ sa_spill_tab; int sa_os; scalar_t__ sa_bonus_tab; int sa_dbu; } ;
typedef TYPE_1__ sa_handle_t ;
typedef int dmu_buf_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int ,scalar_t__) ;

void
FUNC_6(sa_handle_t *VAR_1)
{
 dmu_buf_t *VAR_2 = VAR_1->sa_bonus;

 FUNC_3(&VAR_1->sa_lock);
 (void) FUNC_1(VAR_2, &VAR_1->sa_dbu);

 if (VAR_1->sa_bonus_tab)
  FUNC_5(VAR_1->sa_os, VAR_1->sa_bonus_tab);

 if (VAR_1->sa_spill_tab)
  FUNC_5(VAR_1->sa_os, VAR_1->sa_spill_tab);

 FUNC_0(VAR_1->sa_bonus, ((void*)0));

 if (VAR_1->sa_spill)
  FUNC_0((dmu_buf_t *)VAR_1->sa_spill, ((void*)0));
 FUNC_4(&VAR_1->sa_lock);

 FUNC_2(VAR_0, VAR_1);
}
