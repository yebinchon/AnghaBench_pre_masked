
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_watch {int wd; } ;
struct inotify_handle {int dummy; } ;


 int FUNC_0 (struct inotify_handle*,int ) ;

int FUNC_1(struct inotify_handle *VAR_0,
       struct inotify_watch *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->wd);
}
