
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_5__ {void* mc_tls; int mc_fpc_eir; int * mc_fpregs; int mc_fpused; int mulhi; int mullo; int sr; int * mc_regs; int mc_pc; int mc_onstack; } ;
typedef TYPE_1__ mcontext_t ;
struct TYPE_6__ {scalar_t__ mc_tls; int mc_fpc_eir; int * mc_fpregs; int mc_fpused; int mulhi; int mullo; int sr; int * mc_regs; int mc_pc; int mc_onstack; } ;
typedef TYPE_2__ mcontext32_t ;


 int FUNC_0 (struct thread*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_0, mcontext32_t *VAR_1)
{
 mcontext_t VAR_2;
 unsigned VAR_3;

 VAR_2 = VAR_1->mc_onstack;
 VAR_2 = VAR_1->mc_pc;
 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
  VAR_2[VAR_3] = VAR_1->mc_regs[VAR_3];
 VAR_2 = VAR_1->sr;
 VAR_2 = VAR_1->mullo;
 VAR_2 = VAR_1->mulhi;
 VAR_2 = VAR_1->mc_fpused;
 for (VAR_3 = 0; VAR_3 < 33; VAR_3++)
  VAR_2[VAR_3] = VAR_1->mc_fpregs[VAR_3];
 VAR_2 = VAR_1->mc_fpc_eir;
 VAR_2 = (void *)(intptr_t)VAR_1->mc_tls;

 return (FUNC_0(VAR_0, &VAR_2));
}
