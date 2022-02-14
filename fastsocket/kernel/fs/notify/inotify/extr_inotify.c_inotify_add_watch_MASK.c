
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inotify_watch {int mask; int wd; int i_list; int h_list; int inode; struct inotify_handle* ih; } ;
struct inotify_handle {int mutex; int watches; } ;
struct inode {int inotify_mutex; int inotify_watches; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inotify_handle*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inotify_handle*,struct inotify_watch*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int) ;
 scalar_t__ FUNC_8 (int) ;

s32 FUNC_9(struct inotify_handle *VAR_3, struct inotify_watch *VAR_4,
        struct inode *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;


 VAR_6 &= VAR_1 | VAR_2;
 if (FUNC_8(!VAR_6))
  return -VAR_0;
 VAR_4->mask = VAR_6;

 FUNC_5(&VAR_5->inotify_mutex);
 FUNC_5(&VAR_3->mutex);


 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_8(VAR_7))
  goto out;
 VAR_7 = VAR_4->wd;


 FUNC_0(VAR_3);
 VAR_4->ih = VAR_3;





 VAR_4->inode = FUNC_1(VAR_5);


 VAR_8 = !FUNC_3(VAR_5);
 FUNC_4(&VAR_4->h_list, &VAR_3->watches);
 FUNC_4(&VAR_4->i_list, &VAR_5->inotify_watches);





 if (VAR_8)
  FUNC_7(VAR_5, 1);

out:
 FUNC_6(&VAR_3->mutex);
 FUNC_6(&VAR_5->inotify_mutex);
 return VAR_7;
}
