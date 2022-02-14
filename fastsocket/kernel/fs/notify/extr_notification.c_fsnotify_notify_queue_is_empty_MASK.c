
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_group {int notification_list; int notification_mutex; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct fsnotify_group *VAR_0)
{
 FUNC_0(!FUNC_2(&VAR_0->notification_mutex));
 return FUNC_1(&VAR_0->notification_list) ? 1 : 0;
}
