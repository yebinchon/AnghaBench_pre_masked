
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; } ;
struct TYPE_3__ {int * md_ldt; } ;
struct TYPE_4__ {TYPE_1__ p_md; } ;


 int FUNC_0 (struct thread*) ;

void
FUNC_1(struct thread *VAR_0)
{




 if (VAR_0->td_proc->p_md.md_ldt != ((void*)0))
  FUNC_0(VAR_0);
}
