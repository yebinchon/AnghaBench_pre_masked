
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; } ;
struct fsnotify_mark_entry {int lock; struct fsnotify_group* group; int g_list; struct inode* inode; int i_list; int refcnt; } ;
struct fsnotify_group {int num_marks; TYPE_1__* ops; int mark_lock; } ;
struct TYPE_2__ {int (* freeing_mark ) (struct fsnotify_mark_entry*,struct fsnotify_group*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fsnotify_group*) ;
 int FUNC_4 (struct fsnotify_mark_entry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct fsnotify_mark_entry*,struct fsnotify_group*) ;
 scalar_t__ FUNC_12 (int ) ;

void FUNC_13(struct fsnotify_mark_entry *VAR_0)
{
 struct fsnotify_group *VAR_1;
 struct inode *VAR_2;

 FUNC_9(&VAR_0->lock);

 VAR_1 = VAR_0->group;
 VAR_2 = VAR_0->inode;

 FUNC_0(VAR_1 && !VAR_2);
 FUNC_0(!VAR_1 && VAR_2);


 if (!VAR_1) {
  FUNC_10(&VAR_0->lock);
  return;
 }


 FUNC_0(FUNC_2(&VAR_0->refcnt) < 2);

 FUNC_9(&VAR_1->mark_lock);
 FUNC_9(&VAR_2->i_lock);

 FUNC_6(&VAR_0->i_list);
 VAR_0->inode = ((void*)0);

 FUNC_8(&VAR_0->g_list);
 VAR_0->group = ((void*)0);

 FUNC_4(VAR_0);






 FUNC_5(VAR_2);

 FUNC_10(&VAR_2->i_lock);
 FUNC_10(&VAR_1->mark_lock);
 FUNC_10(&VAR_0->lock);






 if (VAR_1->ops->freeing_mark)
  VAR_1->ops->freeing_mark(VAR_0, VAR_1);
 FUNC_7(VAR_2);






 if (FUNC_12(FUNC_1(&VAR_1->num_marks)))
  FUNC_3(VAR_1);
}
