
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inotify_watch {int wd; TYPE_1__* inode; int i_list; int h_list; struct inotify_handle* ih; int mask; } ;
struct inotify_handle {int mutex; int watches; } ;
typedef int s32 ;
struct TYPE_3__ {int inotify_watches; } ;


 int FUNC_0 (struct inotify_handle*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct inotify_handle*,struct inotify_watch*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

s32 FUNC_7(struct inotify_watch *VAR_0, struct inotify_watch *VAR_1)
{
 struct inotify_handle *VAR_2 = VAR_0->ih;
 int VAR_3 = 0;

 VAR_1->mask = VAR_0->mask;
 VAR_1->ih = VAR_2;

 FUNC_4(&VAR_2->mutex);


 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (FUNC_6(VAR_3))
  goto out;
 VAR_3 = VAR_1->wd;

 FUNC_0(VAR_2);

 VAR_1->inode = FUNC_1(VAR_0->inode);

 FUNC_3(&VAR_1->h_list, &VAR_2->watches);
 FUNC_3(&VAR_1->i_list, &VAR_0->inode->inotify_watches);
out:
 FUNC_5(&VAR_2->mutex);
 return VAR_3;
}
