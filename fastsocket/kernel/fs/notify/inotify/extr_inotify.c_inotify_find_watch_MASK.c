
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_watch {int wd; } ;
struct inotify_handle {int mutex; } ;
struct inode {int inotify_mutex; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct inotify_watch*) ;
 struct inotify_watch* FUNC_1 (struct inode*,struct inotify_handle*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct inotify_watch*) ;

s32 FUNC_5(struct inotify_handle *VAR_1, struct inode *VAR_2,
         struct inotify_watch **VAR_3)
{
 struct inotify_watch *VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_2(&VAR_2->inotify_mutex);
 FUNC_2(&VAR_1->mutex);

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (FUNC_4(VAR_4)) {
  FUNC_0(VAR_4);
  *VAR_3 = VAR_4;
  VAR_5 = VAR_4->wd;
 }

 FUNC_3(&VAR_1->mutex);
 FUNC_3(&VAR_2->inotify_mutex);

 return VAR_5;
}
