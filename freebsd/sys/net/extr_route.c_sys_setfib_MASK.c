
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct setfib_args {scalar_t__ fibnum; } ;
struct TYPE_2__ {scalar_t__ p_fibnum; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct thread *VAR_2, struct setfib_args *VAR_3)
{
 if (VAR_3->fibnum < 0 || VAR_3->fibnum >= VAR_1)
  return VAR_0;
 VAR_2->td_proc->p_fibnum = VAR_3->fibnum;
 return (0);
}
