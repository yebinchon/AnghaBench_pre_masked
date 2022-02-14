
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int tf_spsr; int tf_elr; int tf_lr; int tf_sp; int * tf_x; } ;
struct thread {struct trapframe* td_frame; } ;
struct TYPE_4__ {int gp_spsr; int gp_elr; int gp_lr; int gp_sp; int * gp_x; } ;
struct TYPE_5__ {TYPE_1__ mc_gpregs; } ;
typedef TYPE_2__ mcontext_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct thread *VAR_2, mcontext_t *VAR_3, int VAR_4)
{
 struct trapframe *VAR_5 = VAR_2->td_frame;

 if (VAR_4 & VAR_0) {
  VAR_3->mc_gpregs.gp_x[0] = 0;
  VAR_3->mc_gpregs.gp_spsr = VAR_5->tf_spsr & ~VAR_1;
 } else {
  VAR_3->mc_gpregs.gp_x[0] = VAR_5->tf_x[0];
  VAR_3->mc_gpregs.gp_spsr = VAR_5->tf_spsr;
 }

 FUNC_0(&VAR_3->mc_gpregs.gp_x[1], &VAR_5->tf_x[1],
     sizeof(VAR_3->mc_gpregs.gp_x[1]) * (FUNC_1(VAR_3->mc_gpregs.gp_x) - 1));

 VAR_3->mc_gpregs.gp_sp = VAR_5->tf_sp;
 VAR_3->mc_gpregs.gp_lr = VAR_5->tf_lr;
 VAR_3->mc_gpregs.gp_elr = VAR_5->tf_elr;

 return (0);
}
