
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct trapframe {int tf_lr; int tf_elr; int tf_sp; } ;
struct thread {struct trapframe* td_frame; } ;
struct image_params {int entry_addr; } ;


 int FUNC_0 (int ,void (*) (struct thread*,struct image_params*,int ),int ) ;
 int FUNC_1 (struct trapframe*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_2, struct image_params *VAR_3, u_long VAR_4)
{
 struct trapframe *VAR_5 = VAR_2->td_frame;


 FUNC_0(VAR_0, FUNC_2, VAR_1);

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

        VAR_5->tf_sp = VAR_4;



        VAR_5->tf_lr = 0xffffffffffffffff;

        VAR_5->tf_elr = VAR_3->entry_addr;
}
