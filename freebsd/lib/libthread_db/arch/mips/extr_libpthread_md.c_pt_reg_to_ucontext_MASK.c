
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mulhi; int mullo; int mc_pc; int mc_regs; } ;
struct TYPE_5__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct reg {int * r_regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int *,int) ;

void
FUNC_1(const struct reg *VAR_4, ucontext_t *VAR_5)
{

 FUNC_0(VAR_5->uc_mcontext.mc_regs, &VAR_4->r_regs[VAR_3],
     sizeof(VAR_5->uc_mcontext.mc_regs));
 VAR_5->uc_mcontext.mc_pc = VAR_4->r_regs[VAR_2];
 VAR_5->uc_mcontext.mullo = VAR_4->r_regs[VAR_1];
 VAR_5->uc_mcontext.mulhi = VAR_4->r_regs[VAR_0];
}
