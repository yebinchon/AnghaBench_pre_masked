
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct trapframe {int tf_svc_lr; int tf_spsr; int tf_pc; int tf_usr_lr; int tf_usr_sp; } ;
struct thread {struct trapframe* td_frame; } ;
struct image_params {int entry_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct trapframe*,int ,int) ;

void
FUNC_1(struct thread *VAR_1, struct image_params *VAR_2, u_long VAR_3)
{
 struct trapframe *VAR_4 = VAR_1->td_frame;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->tf_usr_sp = VAR_3;
 VAR_4->tf_usr_lr = VAR_2->entry_addr;
 VAR_4->tf_svc_lr = 0x77777777;
 VAR_4->tf_pc = VAR_2->entry_addr;
 VAR_4->tf_spsr = VAR_0;
}
