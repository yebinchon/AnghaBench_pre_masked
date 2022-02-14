
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_ucred; struct proc* td_proc; } ;
struct sbuf {int dummy; } ;
struct proc {int p_pid; int p_comm; } ;
struct abort2_args {int nargs; int * why; int * args; } ;
struct TYPE_2__ {int cr_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,void**,int) ;
 int FUNC_1 (struct thread*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct sbuf*,char*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*,int *,int) ;
 int FUNC_6 (struct sbuf*) ;
 int FUNC_7 (struct sbuf*) ;
 int FUNC_8 (struct sbuf*) ;
 struct sbuf* FUNC_9 (int *,int *,int,int ) ;
 int FUNC_10 (struct sbuf*,char*,...) ;
 int FUNC_11 (struct sbuf*) ;

int
FUNC_12(struct thread *VAR_4, struct abort2_args *VAR_5)
{
 struct proc *VAR_6 = VAR_4->td_proc;
 struct sbuf *VAR_7;
 void *VAR_8[16];
 int VAR_9, VAR_10, VAR_11;






 VAR_7 = FUNC_9(((void*)0), ((void*)0), 512, VAR_1);
 FUNC_4(VAR_7);
 FUNC_10(VAR_7, "%s(pid %d uid %d) aborted: ",
     VAR_6->p_comm, VAR_6->p_pid, VAR_4->td_ucred->cr_uid);




 VAR_11 = VAR_3;

 if (VAR_5->nargs < 0 || VAR_5->nargs > 16)
  goto out;
 if (VAR_5->nargs > 0) {
  if (VAR_5->args == ((void*)0))
   goto out;
  VAR_9 = FUNC_0(VAR_5->args, VAR_8, VAR_5->nargs * sizeof(void *));
  if (VAR_9 != 0)
   goto out;
 }




 if (VAR_5->why != ((void*)0)) {
  VAR_9 = FUNC_5(VAR_7, VAR_5->why, 128);
  if (VAR_9 < 0)
   goto out;
 } else {
  FUNC_10(VAR_7, "(null)");
 }
 if (VAR_5->nargs > 0) {
  FUNC_10(VAR_7, "(");
  for (VAR_10 = 0;VAR_10 < VAR_5->nargs; VAR_10++)
   FUNC_10(VAR_7, "%s%p", VAR_10 == 0 ? "" : ", ", VAR_8[VAR_10]);
  FUNC_10(VAR_7, ")");
 }





 VAR_11 = VAR_2;
out:
 if (VAR_11 == VAR_3) {
  FUNC_11(VAR_7);
  FUNC_10(VAR_7, " (Reason text inaccessible)");
 }
 FUNC_3(VAR_7, "\n");
 FUNC_8(VAR_7);
 FUNC_2(VAR_0, "%s", FUNC_6(VAR_7));
 FUNC_7(VAR_7);
 FUNC_1(VAR_4, 0, VAR_11);
 return (0);
}
