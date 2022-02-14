
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_notification_wait {int dummy; } ;
struct iwm_notif_wait_data {int list; } ;


 int FUNC_0 (struct iwm_notif_wait_data*) ;
 int FUNC_1 (struct iwm_notif_wait_data*) ;
 int FUNC_2 (int *,struct iwm_notification_wait*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(struct iwm_notif_wait_data *VAR_2,
    struct iwm_notification_wait *VAR_3)
{
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->list, VAR_3, VAR_1,
     VAR_0);
 FUNC_1(VAR_2);
}
