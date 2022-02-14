
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_spsr; int tf_elr; scalar_t__* tf_x; } ;
struct thread {struct trapframe* td_frame; } ;
struct image_params {int entry_addr; } ;
typedef int register_t ;
typedef int cloudabi32_tcb_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct trapframe*,int ,int) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static void
FUNC_5(struct thread *VAR_1, struct image_params *VAR_2,
    unsigned long VAR_3)
{
 struct trapframe *VAR_4;

 VAR_4 = VAR_1->td_frame;
 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->tf_x[0] =
     VAR_3 + FUNC_4(sizeof(cloudabi32_tcb_t), sizeof(register_t));
 VAR_4->tf_x[13] = FUNC_0(VAR_3);
 VAR_4->tf_elr = VAR_2->entry_addr;
 VAR_4->tf_spsr |= VAR_0;
 (void)FUNC_2(VAR_1, FUNC_1(VAR_3));
}
