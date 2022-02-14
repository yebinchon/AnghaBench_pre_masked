
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inotify_watch {int wd; } ;
struct inotify_handle {TYPE_1__* in_ops; } ;
struct TYPE_2__ {int (* handle_event ) (struct inotify_watch*,int ,int ,int ,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct inotify_watch*,struct inotify_handle*) ;
 int FUNC_1 (struct inotify_watch*,int ,int ,int ,int *,int *) ;

void FUNC_2(struct inotify_handle *VAR_1,
     struct inotify_watch *VAR_2)
{
 FUNC_0(VAR_2, VAR_1);
 VAR_1->in_ops->handle_event(VAR_2, VAR_2->wd, VAR_0, 0, ((void*)0), ((void*)0));
}
