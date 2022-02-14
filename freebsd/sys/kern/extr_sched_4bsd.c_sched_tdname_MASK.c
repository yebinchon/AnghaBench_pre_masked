
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {char* td_name; int td_tid; } ;
struct td_sched {char* ts_name; } ;


 int FUNC_0 (char*,int,char*,char*,int) ;
 struct td_sched* FUNC_1 (struct thread*) ;

char *
FUNC_2(struct thread *VAR_0)
{
 return (VAR_0->td_name);

}
