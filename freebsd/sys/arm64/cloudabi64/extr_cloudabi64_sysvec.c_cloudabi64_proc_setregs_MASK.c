
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {scalar_t__* tf_x; } ;
struct thread {struct trapframe* td_frame; } ;
struct image_params {int dummy; } ;
typedef int register_t ;
typedef int cloudabi64_tcb_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (struct thread*,struct image_params*,unsigned long) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(struct thread *VAR_0, struct image_params *VAR_1,
    unsigned long VAR_2)
{
 struct trapframe *VAR_3;

 FUNC_2(VAR_0, VAR_1, VAR_2);






 VAR_3 = VAR_0->td_frame;
 VAR_3->tf_x[0] =
     VAR_2 + FUNC_3(sizeof(cloudabi64_tcb_t), sizeof(register_t));
 (void)FUNC_1(VAR_0, FUNC_0(VAR_2));
}
