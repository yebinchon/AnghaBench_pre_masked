
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct proc {int p_flag2; int p_flag; TYPE_1__* p_pptr; int p_pid; } ;
struct TYPE_2__ {int p_pid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_2, struct proc *VAR_3, int *VAR_4)
{

 if ((VAR_3->p_flag2 & VAR_0) != 0) {
  FUNC_0((VAR_3->p_flag & VAR_1) == 0,
      ("%d traced but tracing disabled", VAR_3->p_pid));
  *VAR_4 = -1;
 } else if ((VAR_3->p_flag & VAR_1) != 0) {
  *VAR_4 = VAR_3->p_pptr->p_pid;
 } else {
  *VAR_4 = 0;
 }
 return (0);
}
