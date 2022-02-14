
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
struct fsnotify_mark_entry {int mask; } ;
struct fsnotify_group {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 struct fsnotify_mark_entry* FUNC_0 (struct fsnotify_group*,struct inode*) ;
 int FUNC_1 (struct fsnotify_mark_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct fsnotify_group *VAR_1, struct inode *VAR_2, __u32 VAR_3)
{
 struct fsnotify_mark_entry *VAR_4;
 bool VAR_5;

 FUNC_2(&VAR_2->i_lock);
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 FUNC_3(&VAR_2->i_lock);
 if (!VAR_4)
  return 0;

 VAR_3 = (VAR_3 & ~VAR_0);
 VAR_5 = (VAR_4->mask & VAR_3);


 FUNC_1(VAR_4);

 return VAR_5;
}
