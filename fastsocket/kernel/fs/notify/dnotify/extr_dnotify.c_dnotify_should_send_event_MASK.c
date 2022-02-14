
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; int i_mode; } ;
struct fsnotify_mark_entry {int mask; } ;
struct fsnotify_group {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct fsnotify_mark_entry* FUNC_1 (struct fsnotify_group*,struct inode*) ;
 int FUNC_2 (struct fsnotify_mark_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct fsnotify_group *VAR_1,
          struct inode *VAR_2, __u32 VAR_3)
{
 struct fsnotify_mark_entry *VAR_4;
 bool VAR_5;






 if (!FUNC_0(VAR_2->i_mode))
  return 0;

 FUNC_3(&VAR_2->i_lock);
 VAR_4 = FUNC_1(VAR_1, VAR_2);
 FUNC_4(&VAR_2->i_lock);


 if (!VAR_4)
  return 0;

 VAR_3 = (VAR_3 & ~VAR_0);
 VAR_5 = (VAR_3 & VAR_4->mask);

 FUNC_2(VAR_4);

 return VAR_5;
}
