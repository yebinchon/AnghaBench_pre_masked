
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int dummy; } ;
struct inotify_watch {struct inode* inode; } ;
struct inotify_handle {int mutex; int idr; } ;
struct inode {int inotify_mutex; struct super_block* i_sb; } ;


 int VAR_0 ;
 struct inotify_watch* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct inotify_handle*,struct inotify_watch*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inotify_handle*,struct inotify_watch*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct inotify_watch*,int) ;

int FUNC_8(struct inotify_handle *VAR_1, u32 VAR_2)
{
 struct inotify_watch *VAR_3;
 struct super_block *VAR_4;
 struct inode *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_1->mutex);
 VAR_3 = FUNC_0(&VAR_1->idr, VAR_2);
 if (FUNC_6(!VAR_3)) {
  FUNC_4(&VAR_1->mutex);
  return -VAR_0;
 }
 VAR_4 = VAR_3->inode->i_sb;
 VAR_6 = FUNC_5(VAR_1, VAR_3);
 if (!VAR_6)
  return 0;

 VAR_5 = VAR_3->inode;

 FUNC_3(&VAR_5->inotify_mutex);
 FUNC_3(&VAR_1->mutex);


 if (FUNC_2(FUNC_0(&VAR_1->idr, VAR_2) == VAR_3))
  FUNC_1(VAR_1, VAR_3);

 FUNC_4(&VAR_1->mutex);
 FUNC_4(&VAR_5->inotify_mutex);
 FUNC_7(VAR_3, VAR_6);

 return 0;
}
