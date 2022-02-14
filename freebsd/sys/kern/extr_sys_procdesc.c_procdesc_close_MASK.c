
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct procdesc {int pd_flags; struct proc* pd_proc; } ;
struct proc {scalar_t__ p_state; int p_flag; TYPE_1__* p_reaper; int p_oppid; int p_sigparent; int * p_procdesc; } ;
struct file {scalar_t__ f_type; struct procdesc* f_data; int * f_ops; } ;
struct TYPE_3__ {int p_pid; } ;


 int FUNC_0 (struct proc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct procdesc*) ;
 int FUNC_3 (struct procdesc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct proc*,int ) ;
 int FUNC_7 (struct proc*,TYPE_1__*) ;
 int FUNC_8 (struct proc*) ;
 int FUNC_9 (int ,struct proc*,int *,int ) ;
 int FUNC_10 (struct proc*,TYPE_1__*,int) ;
 int FUNC_11 (struct procdesc*) ;
 int VAR_9 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(struct file *VAR_10, struct thread *VAR_11)
{
 struct procdesc *VAR_12;
 struct proc *VAR_13;

 FUNC_1(VAR_10->f_type == VAR_0, ("procdesc_close: !procdesc"));

 VAR_12 = VAR_10->f_data;
 VAR_10->f_ops = &VAR_7;
 VAR_10->f_data = ((void*)0);

 FUNC_12(&VAR_9);
 FUNC_2(VAR_12);
 VAR_12->pd_flags |= VAR_1;
 FUNC_3(VAR_12);
 VAR_13 = VAR_12->pd_proc;
 if (VAR_13 == ((void*)0)) {




  FUNC_13(&VAR_9);
 } else {
  FUNC_4(VAR_13);
  FUNC_0(VAR_13);
  if (VAR_13->p_state == VAR_3) {






   FUNC_9(VAR_8, VAR_13, ((void*)0), 0);
  } else {







   VAR_12->pd_proc = ((void*)0);
   VAR_13->p_procdesc = ((void*)0);
   FUNC_11(VAR_12);






   VAR_13->p_sigparent = VAR_5;
   if ((VAR_13->p_flag & VAR_4) == 0) {
    FUNC_10(VAR_13, VAR_13->p_reaper, 1);
   } else {
    FUNC_8(VAR_13);
    VAR_13->p_oppid = VAR_13->p_reaper->p_pid;
    FUNC_7(VAR_13, VAR_13->p_reaper);
   }
   if ((VAR_12->pd_flags & VAR_2) == 0)
    FUNC_6(VAR_13, VAR_6);
   FUNC_5(VAR_13);
   FUNC_13(&VAR_9);
  }
 }




 FUNC_11(VAR_12);
 return (0);
}
