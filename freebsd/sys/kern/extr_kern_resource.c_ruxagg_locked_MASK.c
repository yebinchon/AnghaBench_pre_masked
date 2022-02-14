
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_iticks; scalar_t__ td_sticks; scalar_t__ td_uticks; scalar_t__ td_incruntime; int td_proc; } ;
struct rusage_ext {int rux_iticks; int rux_sticks; int rux_uticks; int rux_runtime; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct thread*,int ) ;

__attribute__((used)) static void
FUNC_2(struct rusage_ext *VAR_1, struct thread *VAR_2)
{

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_2->td_proc, VAR_0);
 VAR_1->rux_runtime += VAR_2->td_incruntime;
 VAR_1->rux_uticks += VAR_2->td_uticks;
 VAR_1->rux_sticks += VAR_2->td_sticks;
 VAR_1->rux_iticks += VAR_2->td_iticks;
}
