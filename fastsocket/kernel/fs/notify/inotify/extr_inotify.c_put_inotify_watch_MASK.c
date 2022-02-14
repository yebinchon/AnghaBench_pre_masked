
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inotify_watch {int inode; struct inotify_handle* ih; int count; } ;
struct inotify_handle {TYPE_1__* in_ops; } ;
struct TYPE_2__ {int (* destroy_watch ) (struct inotify_watch*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inotify_handle*) ;
 int FUNC_3 (struct inotify_watch*) ;

void FUNC_4(struct inotify_watch *VAR_0)
{
 if (FUNC_0(&VAR_0->count)) {
  struct inotify_handle *VAR_1 = VAR_0->ih;

  FUNC_1(VAR_0->inode);
  VAR_1->in_ops->destroy_watch(VAR_0);
  FUNC_2(VAR_1);
 }
}
