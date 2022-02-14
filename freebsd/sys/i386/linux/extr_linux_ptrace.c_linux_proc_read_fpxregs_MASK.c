
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; } ;
struct linux_pt_fpxreg {int dummy; } ;
struct TYPE_4__ {int p_flag; } ;
struct TYPE_3__ {int sv_xmm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct linux_pt_fpxreg*,int) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (struct thread*) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_4, struct linux_pt_fpxreg *VAR_5)
{

 FUNC_0(VAR_4->td_proc, VAR_1);
 if (VAR_3 == 0 || (VAR_4->td_proc->p_flag & VAR_2) == 0)
  return (VAR_0);
 FUNC_1(&FUNC_2(VAR_4)->sv_xmm, VAR_5, sizeof(*VAR_5));
 return (0);
}
