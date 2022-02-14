
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int * ts_blocked; int ts_lock; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct thread* FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;

struct thread *
FUNC_3(struct turnstile *VAR_3, int VAR_4)
{






 return (FUNC_1(&VAR_3->ts_blocked[VAR_4]));
}
