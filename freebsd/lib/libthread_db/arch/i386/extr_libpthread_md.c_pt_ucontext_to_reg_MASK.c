
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mc_gs; int mc_fs; } ;
struct TYPE_5__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct reg {int r_gs; int r_fs; } ;


 int FUNC_0 (int *,int *,int) ;

void
FUNC_1(const ucontext_t *VAR_0, struct reg *VAR_1)
{
 FUNC_0(&VAR_1->r_fs, &VAR_0->uc_mcontext.mc_fs, 18*4);
 VAR_1->r_gs = VAR_0->uc_mcontext.mc_gs;
}
