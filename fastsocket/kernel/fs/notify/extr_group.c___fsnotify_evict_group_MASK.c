
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_group {scalar_t__ on_group_list; int group_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fsnotify_group *VAR_1)
{
 FUNC_0(!FUNC_2(&VAR_0));

 if (VAR_1->on_group_list)
  FUNC_1(&VAR_1->group_list);
 VAR_1->on_group_list = 0;
}
