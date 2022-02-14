
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int done; int phi_stmt; scalar_t__ num_phi; scalar_t__ phi_i; int iter_type; int * mustkills; int * mustdefs; int * mayuses; int * maydefs; int * vuses; int * uses; int * defs; } ;
typedef TYPE_1__ ssa_op_iter ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0 (ssa_op_iter *VAR_2)
{
  VAR_2->defs = ((void*)0);
  VAR_2->uses = ((void*)0);
  VAR_2->vuses = ((void*)0);
  VAR_2->maydefs = ((void*)0);
  VAR_2->mayuses = ((void*)0);
  VAR_2->mustdefs = ((void*)0);
  VAR_2->mustkills = ((void*)0);
  VAR_2->iter_type = VAR_1;
  VAR_2->phi_i = 0;
  VAR_2->num_phi = 0;
  VAR_2->phi_stmt = VAR_0;
  VAR_2->done = 1;
}
