
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_long ;
struct trapframe {int tf_spsr; void* tf_elr; void** tf_x; } ;
struct thread {struct trapframe* td_frame; } ;
struct image_params {void* entry_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct trapframe*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_1, struct image_params *VAR_2,
   u_long VAR_3)
{
 struct trapframe *VAR_4 = VAR_1->td_frame;

 FUNC_0(VAR_4, 0, sizeof(struct trapframe));






 VAR_4->tf_x[0] = VAR_3;

 VAR_4->tf_x[13] = VAR_3;

 VAR_4->tf_x[14] = VAR_2->entry_addr;
 VAR_4->tf_elr = VAR_2->entry_addr;
 VAR_4->tf_spsr = VAR_0;
}
