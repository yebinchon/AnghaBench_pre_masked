
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_tid; } ;
struct TYPE_2__ {int uc_mcontext; } ;
struct thr_create_initthr_args {TYPE_1__ ctx; int * tid; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_1, void *VAR_2)
{
 struct thr_create_initthr_args *VAR_3;


 VAR_3 = VAR_2;
 if (VAR_3->tid != ((void*)0) && FUNC_1(VAR_3->tid, VAR_1->td_tid))
  return (VAR_0);

 return (FUNC_0(VAR_1, &VAR_3->ctx.uc_mcontext));
}
