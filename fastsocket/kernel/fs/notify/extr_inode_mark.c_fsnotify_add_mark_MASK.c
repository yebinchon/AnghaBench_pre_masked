
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; int i_fsnotify_mark_entries; } ;
struct fsnotify_mark_entry {int lock; int g_list; int i_list; struct inode* inode; struct fsnotify_group* group; } ;
struct fsnotify_group {int mark_lock; int num_marks; int mark_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 struct fsnotify_mark_entry* FUNC_2 (struct fsnotify_group*,struct inode*) ;
 int FUNC_3 (struct fsnotify_mark_entry*) ;
 int FUNC_4 (struct fsnotify_mark_entry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *,int *) ;
 struct inode* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct fsnotify_mark_entry *VAR_2,
        struct fsnotify_group *VAR_3, struct inode *VAR_4)
{
 struct fsnotify_mark_entry *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_7(VAR_4);
 if (FUNC_12(!VAR_4))
  return -VAR_1;







 FUNC_10(&VAR_2->lock);
 FUNC_10(&VAR_3->mark_lock);
 FUNC_10(&VAR_4->i_lock);

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_5) {
  VAR_2->group = VAR_3;
  VAR_2->inode = VAR_4;

  FUNC_6(&VAR_2->i_list, &VAR_4->i_fsnotify_mark_entries);
  FUNC_9(&VAR_2->g_list, &VAR_3->mark_entries);

  FUNC_3(VAR_2);

  FUNC_1(&VAR_3->num_marks);

  FUNC_5(VAR_4);
 }

 FUNC_11(&VAR_4->i_lock);
 FUNC_11(&VAR_3->mark_lock);
 FUNC_11(&VAR_2->lock);

 if (VAR_5) {
  VAR_6 = -VAR_0;
  FUNC_8(VAR_4);
  FUNC_4(VAR_5);
 } else {
  FUNC_0(VAR_4);
 }

 return VAR_6;
}
