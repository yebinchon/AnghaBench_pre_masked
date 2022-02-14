
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct trapframe {int tf_elr; int tf_lr; int tf_sp; int * tf_x; } ;
struct thread {struct trapframe* td_frame; } ;
struct image_params {int entry_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct trapframe*,int ,int) ;

void
FUNC_2(struct thread *VAR_0, struct image_params *VAR_1, u_long VAR_2)
{
 struct trapframe *VAR_3 = VAR_0->td_frame;

 FUNC_1(VAR_3, 0, sizeof(struct trapframe));

 VAR_3->tf_x[0] = VAR_2;
 VAR_3->tf_sp = FUNC_0(VAR_2);
 VAR_3->tf_lr = VAR_1->entry_addr;
 VAR_3->tf_elr = VAR_1->entry_addr;
}
