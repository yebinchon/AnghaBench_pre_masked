
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {scalar_t__ p_numthreads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct thread* FUNC_0 (int) ;

int
FUNC_1(struct proc *VAR_4, int VAR_5, struct thread **VAR_6)
{


 if (VAR_4->p_numthreads >= VAR_3) {
  ++VAR_2;
  return (VAR_1);
 }

 *VAR_6 = FUNC_0(VAR_5);
 if (*VAR_6 == ((void*)0))
  return (VAR_0);

 return (0);
}
