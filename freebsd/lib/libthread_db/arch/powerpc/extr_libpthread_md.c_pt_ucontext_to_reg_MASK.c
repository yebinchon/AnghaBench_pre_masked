
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mc_frame; } ;
struct TYPE_4__ {TYPE_2__ uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
struct reg {int dummy; } ;
typedef TYPE_2__ mcontext_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct reg*,int ,int ) ;

void
FUNC_2(const ucontext_t *VAR_0, struct reg *VAR_1)
{
 const mcontext_t *VAR_2 = &VAR_0->uc_mcontext;

 FUNC_1(VAR_1, VAR_2->mc_frame, FUNC_0(sizeof(VAR_2->mc_frame), sizeof(*VAR_1)));
}
