
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_ops {int dummy; } ;
struct fsnotify_group {int on_group_list; unsigned int group_num; int num_marks; int group_list; struct fsnotify_ops const* ops; int mark_entries; int mark_lock; int max_events; scalar_t__ q_len; int notification_waitq; int notification_list; int notification_mutex; scalar_t__ mask; int refcnt; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 struct fsnotify_group* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 struct fsnotify_group* FUNC_4 (unsigned int,scalar_t__,struct fsnotify_ops const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct fsnotify_group*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 struct fsnotify_group* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

struct fsnotify_group *FUNC_14(unsigned int VAR_5, __u32 VAR_6,
          const struct fsnotify_ops *VAR_7)
{
 struct fsnotify_group *VAR_8, *VAR_9;


 VAR_8 = FUNC_8(sizeof(struct fsnotify_group), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_8->refcnt, 1);

 VAR_8->on_group_list = 0;
 VAR_8->group_num = VAR_5;
 VAR_8->mask = VAR_6;

 FUNC_10(&VAR_8->notification_mutex);
 FUNC_1(&VAR_8->notification_list);
 FUNC_7(&VAR_8->notification_waitq);
 VAR_8->q_len = 0;
 VAR_8->max_events = VAR_2;

 FUNC_13(&VAR_8->mark_lock);
 FUNC_3(&VAR_8->num_marks, 0);
 FUNC_1(&VAR_8->mark_entries);

 VAR_8->ops = VAR_7;

 FUNC_11(&VAR_4);
 VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (VAR_9) {

  FUNC_12(&VAR_4);

  FUNC_5(VAR_8);
  return VAR_9;
 }


 FUNC_9(&VAR_8->group_list, &VAR_3);
 VAR_8->on_group_list = 1;

 FUNC_2(&VAR_8->num_marks);

 FUNC_12(&VAR_4);

 if (VAR_6)
  FUNC_6();

 return VAR_8;
}
