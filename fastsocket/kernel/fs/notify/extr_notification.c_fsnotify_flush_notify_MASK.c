
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_group {int notification_mutex; TYPE_1__* ops; } ;
struct fsnotify_event_private_data {int dummy; } ;
struct fsnotify_event {int lock; } ;
struct TYPE_2__ {int (* free_event_priv ) (struct fsnotify_event_private_data*) ;} ;


 int FUNC_0 (struct fsnotify_group*) ;
 int FUNC_1 (struct fsnotify_event*) ;
 struct fsnotify_event* FUNC_2 (struct fsnotify_group*) ;
 struct fsnotify_event_private_data* FUNC_3 (struct fsnotify_group*,struct fsnotify_event*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fsnotify_event_private_data*) ;

void FUNC_9(struct fsnotify_group *VAR_0)
{
 struct fsnotify_event *VAR_1;
 struct fsnotify_event_private_data *VAR_2;

 FUNC_4(&VAR_0->notification_mutex);
 while (!FUNC_0(VAR_0)) {
  VAR_1 = FUNC_2(VAR_0);

  if (VAR_0->ops->free_event_priv) {
   FUNC_6(&VAR_1->lock);
   VAR_2 = FUNC_3(VAR_0, VAR_1);
   FUNC_7(&VAR_1->lock);
   if (VAR_2)
    VAR_0->ops->free_event_priv(VAR_2);
  }
  FUNC_1(VAR_1);
 }
 FUNC_5(&VAR_0->notification_mutex);
}
