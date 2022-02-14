
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_watch {int count; int i_list; int h_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct inotify_watch*) ;

void FUNC_3(struct inotify_watch *VAR_0)
{
 FUNC_0(&VAR_0->h_list);
 FUNC_0(&VAR_0->i_list);
 FUNC_1(&VAR_0->count, 0);
 FUNC_2(VAR_0);
}
