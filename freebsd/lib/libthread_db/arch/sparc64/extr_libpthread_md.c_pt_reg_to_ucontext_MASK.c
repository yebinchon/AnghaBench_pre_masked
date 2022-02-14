
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
struct reg {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,struct reg const*,int ) ;

void
FUNC_2(const struct reg *VAR_0, ucontext_t *VAR_1)
{

 FUNC_1(&VAR_1->uc_mcontext, VAR_0, FUNC_0(sizeof(VAR_1->uc_mcontext), sizeof(*VAR_0)));
}
