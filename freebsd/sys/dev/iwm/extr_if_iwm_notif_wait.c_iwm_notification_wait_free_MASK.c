
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_notif_wait_data {int list; } ;


 int FUNC_0 (struct iwm_notif_wait_data*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iwm_notif_wait_data*,int ) ;

void
FUNC_4(struct iwm_notif_wait_data *VAR_1)
{
 FUNC_1(FUNC_2(&VAR_1->list), ("notif list isn't empty"));
 FUNC_0(VAR_1);
 FUNC_3(VAR_1, VAR_0);
}
