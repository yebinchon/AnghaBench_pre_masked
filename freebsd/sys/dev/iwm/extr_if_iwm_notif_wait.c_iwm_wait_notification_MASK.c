
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_notification_wait {int aborted; int triggered; } ;
struct iwm_notif_wait_data {int list; int lk_mtx; } ;


 int FUNC_0 (struct iwm_notif_wait_data*) ;
 int FUNC_1 (struct iwm_notif_wait_data*) ;
 int FUNC_2 (int *,struct iwm_notification_wait*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct iwm_notification_wait*,int *,int ,char*,int) ;

int
FUNC_4(struct iwm_notif_wait_data *VAR_2,
    struct iwm_notification_wait *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_2);
 if (!VAR_3->triggered && !VAR_3->aborted) {
  VAR_5 = FUNC_3(VAR_3, &VAR_2->lk_mtx, 0, "iwm_notif",
      VAR_4);
 }
 FUNC_2(&VAR_2->list, VAR_3, VAR_1,
     VAR_0);
 FUNC_1(VAR_2);

 return VAR_5;
}
