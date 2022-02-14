
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fpregs; int gregs; } ;
struct TYPE_7__ {TYPE_2__ uc_mcontext; } ;
struct thread_map {TYPE_3__ thr_ucontext; } ;
struct thread_info {TYPE_1__* private; } ;
struct TYPE_8__ {int (* to_fetch_registers ) (int) ;} ;
struct TYPE_5__ {int mapp; } ;


 int FUNC_0 (int ,int*) ;
 TYPE_4__ VAR_0 ;
 struct thread_info* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct thread_map*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (int VAR_2)
{
  int VAR_3;
  struct thread_info *VAR_4;
  struct thread_map VAR_5;

  FUNC_0 (VAR_0.to_fetch_registers (VAR_2), &VAR_3);
  if (VAR_3)
    return;

  if (!(VAR_4 = FUNC_1 (VAR_1)))
    return;
  if (!FUNC_2 (VAR_4->private->mapp, &VAR_5))
    return;

  FUNC_5 (&VAR_5.thr_ucontext.uc_mcontext.gregs);
  FUNC_4 (&VAR_5.thr_ucontext.uc_mcontext.fpregs);
}
