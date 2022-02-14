
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int tf_spsr; int tf_elr; int * tf_x; } ;
struct thread {struct trapframe* td_frame; } ;
typedef int mcontext32_vfp_t ;
struct TYPE_3__ {int mc_vfp_size; scalar_t__ mc_vfp_ptr; int * mc_gregset; } ;
typedef TYPE_1__ mcontext32_t ;
typedef int mc_vfp ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,int *,int) ;
 int FUNC_1 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_1, mcontext32_t *VAR_2)
{
 struct trapframe *VAR_3;
 mcontext32_vfp_t VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->td_frame;

 for (VAR_5 = 0; VAR_5 < 15; VAR_5++)
  VAR_3->tf_x[VAR_5] = VAR_2->mc_gregset[VAR_5];
 VAR_3->tf_elr = VAR_2->mc_gregset[15];
 VAR_3->tf_spsr = VAR_2->mc_gregset[16];
 return (0);
}
