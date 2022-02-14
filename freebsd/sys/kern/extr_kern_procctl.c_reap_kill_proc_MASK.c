
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct procctl_reaper_kill {int rk_fpid; int rk_killed; int rk_sig; } ;
struct proc {int p_pid; } ;
typedef int ksiginfo_t ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct thread*,struct proc*,int ) ;
 int FUNC_3 (struct proc*,int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct thread *VAR_1, struct proc *VAR_2, ksiginfo_t *VAR_3,
    struct procctl_reaper_kill *VAR_4, int *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_2);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4->rk_sig);
 if (VAR_6 == 0) {
  FUNC_3(VAR_2, VAR_4->rk_sig, VAR_3);
  VAR_4->rk_killed++;
  *VAR_5 = VAR_6;
 } else if (*VAR_5 == VAR_0) {
  VAR_4->rk_fpid = VAR_2->p_pid;
  *VAR_5 = VAR_6;
 }
 FUNC_1(VAR_2);
}
