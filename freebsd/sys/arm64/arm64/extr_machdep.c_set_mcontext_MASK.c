
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct trapframe {int tf_spsr; int tf_elr; int tf_lr; int tf_sp; int tf_x; } ;
struct thread {struct trapframe* td_frame; } ;
struct TYPE_4__ {int gp_spsr; int gp_elr; int gp_lr; int gp_sp; int gp_x; } ;
struct TYPE_5__ {TYPE_1__ mc_gpregs; } ;
typedef TYPE_2__ mcontext_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(struct thread *VAR_5, mcontext_t *VAR_6)
{
 struct trapframe *VAR_7 = VAR_5->td_frame;
 uint32_t VAR_8;

 VAR_8 = VAR_6->mc_gpregs.gp_spsr;
 if ((VAR_8 & VAR_4) != VAR_3 ||
     (VAR_8 & VAR_1) != 0 ||
     (VAR_8 & VAR_2) != (VAR_5->td_frame->tf_spsr & VAR_2))
  return (VAR_0);

 FUNC_0(VAR_7->tf_x, VAR_6->mc_gpregs.gp_x, sizeof(VAR_7->tf_x));

 VAR_7->tf_sp = VAR_6->mc_gpregs.gp_sp;
 VAR_7->tf_lr = VAR_6->mc_gpregs.gp_lr;
 VAR_7->tf_elr = VAR_6->mc_gpregs.gp_elr;
 VAR_7->tf_spsr = VAR_6->mc_gpregs.gp_spsr;

 return (0);
}
