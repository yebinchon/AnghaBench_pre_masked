
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_5__ {scalar_t__ mc_tls; int mc_fpc_eir; int * mc_fpregs; int mc_fpused; int mulhi; int mullo; int sr; int * mc_regs; int mc_pc; int mc_onstack; } ;
typedef TYPE_1__ mcontext_t ;
struct TYPE_6__ {scalar_t__ mc_tls; int mc_fpc_eir; int * mc_fpregs; int mc_fpused; int mulhi; int mullo; int sr; int * mc_regs; int mc_pc; int mc_onstack; } ;
typedef TYPE_2__ mcontext32_t ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (struct thread*,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_0, mcontext32_t *VAR_1, int VAR_2)
{
 mcontext_t VAR_3;
 unsigned VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_3, VAR_2);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_1->mc_onstack = VAR_3;
 VAR_1->mc_pc = VAR_3;
 for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
  VAR_1->mc_regs[VAR_4] = VAR_3[VAR_4];
 VAR_1->sr = VAR_3;
 VAR_1->mullo = VAR_3;
 VAR_1->mulhi = VAR_3;
 VAR_1->mc_fpused = VAR_3;
 for (VAR_4 = 0; VAR_4 < 33; VAR_4++)
  VAR_1->mc_fpregs[VAR_4] = VAR_3[VAR_4];
 VAR_1->mc_fpc_eir = VAR_3;
 VAR_1->mc_tls = (int32_t)(intptr_t)VAR_3;

 return (0);
}
