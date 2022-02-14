
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex {int wait_lock; int wait_list; int * owner; } ;


 int FUNC_0 (struct rt_mutex*,char const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rt_mutex *VAR_0, const char *VAR_1)
{
 VAR_0->owner = ((void*)0);
 FUNC_2(&VAR_0->wait_lock);
 FUNC_1(&VAR_0->wait_list, &VAR_0->wait_lock);

 FUNC_0(VAR_0, VAR_1);
}
