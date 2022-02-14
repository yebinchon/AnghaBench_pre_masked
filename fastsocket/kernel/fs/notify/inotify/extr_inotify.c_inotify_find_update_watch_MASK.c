
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inotify_watch {int mask; int wd; } ;
struct inotify_handle {int mutex; } ;
struct inode {int inotify_mutex; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inotify_watch* FUNC_0 (struct inode*,struct inotify_handle*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

s32 FUNC_4(struct inotify_handle *VAR_5, struct inode *VAR_6,
         u32 VAR_7)
{
 struct inotify_watch *VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 if (VAR_7 & VAR_3)
  VAR_9 = 1;


 VAR_7 &= VAR_2 | VAR_4;
 if (FUNC_3(!VAR_7))
  return -VAR_0;

 FUNC_1(&VAR_6->inotify_mutex);
 FUNC_1(&VAR_5->mutex);





 VAR_8 = FUNC_0(VAR_6, VAR_5);
 if (FUNC_3(!VAR_8)) {
  VAR_10 = -VAR_1;
  goto out;
 }

 if (VAR_9)
  VAR_8->mask |= VAR_7;
 else
  VAR_8->mask = VAR_7;
 VAR_10 = VAR_8->wd;
out:
 FUNC_2(&VAR_5->mutex);
 FUNC_2(&VAR_6->inotify_mutex);
 return VAR_10;
}
