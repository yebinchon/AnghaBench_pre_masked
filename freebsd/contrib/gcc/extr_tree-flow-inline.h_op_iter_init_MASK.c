
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int done; int phi_stmt; scalar_t__ num_phi; scalar_t__ phi_i; int * mustkills; int * mustdefs; int * mayuses; int * maydefs; int * vuses; int * uses; int * defs; } ;
typedef TYPE_1__ ssa_op_iter ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void
FUNC_7 (ssa_op_iter *VAR_8, tree VAR_9, int VAR_10)
{




  VAR_8->defs = (VAR_10 & VAR_1) ? FUNC_0 (VAR_9) : ((void*)0);
  VAR_8->uses = (VAR_10 & VAR_2) ? FUNC_3 (VAR_9) : ((void*)0);
  VAR_8->vuses = (VAR_10 & VAR_7) ? FUNC_4 (VAR_9) : ((void*)0);
  VAR_8->maydefs = (VAR_10 & VAR_3) ? FUNC_1 (VAR_9) : ((void*)0);
  VAR_8->mayuses = (VAR_10 & VAR_4) ? FUNC_1 (VAR_9) : ((void*)0);
  VAR_8->mustdefs = (VAR_10 & VAR_5) ? FUNC_2 (VAR_9) : ((void*)0);
  VAR_8->mustkills = (VAR_10 & VAR_6) ? FUNC_2 (VAR_9) : ((void*)0);
  VAR_8->done = 0;

  VAR_8->phi_i = 0;
  VAR_8->num_phi = 0;
  VAR_8->phi_stmt = VAR_0;
}
