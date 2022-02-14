
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int * ts_blocked; } ;
struct thread {scalar_t__ td_priority; } ;


 struct thread* FUNC_0 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static struct thread *
FUNC_1(struct turnstile *VAR_2)
{
 struct thread *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(&VAR_2->ts_blocked[VAR_1]);
 VAR_4 = FUNC_0(&VAR_2->ts_blocked[VAR_0]);
 if (VAR_4 == ((void*)0) || (VAR_3 != ((void*)0) && VAR_3->td_priority < VAR_4->td_priority))
  return (VAR_3);
 return (VAR_4);
}
