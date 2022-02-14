
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {scalar_t__ td_priority; } ;
struct tdq {scalar_t__ tdq_lowpri; } ;
struct TYPE_2__ {struct thread* pc_curthread; } ;


 int VAR_0 ;
 int FUNC_0 (struct tdq*) ;
 int FUNC_1 (struct tdq*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 struct thread* FUNC_3 (struct tdq*) ;

__attribute__((used)) static void
FUNC_4(struct tdq *VAR_1, struct thread *VAR_2)
{
 struct thread *VAR_3;

 FUNC_1(VAR_1, VAR_0);
 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_2(FUNC_0(VAR_1))->pc_curthread;
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 == ((void*)0) || VAR_3->td_priority > VAR_2->td_priority)
  VAR_1->tdq_lowpri = VAR_2->td_priority;
 else
  VAR_1->tdq_lowpri = VAR_3->td_priority;
}
