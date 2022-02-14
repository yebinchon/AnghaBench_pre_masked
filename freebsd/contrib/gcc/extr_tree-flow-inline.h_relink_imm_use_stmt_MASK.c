
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_7__ {scalar_t__ stmt; } ;
typedef TYPE_1__ ssa_use_operand_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_2 (ssa_use_operand_t *VAR_0, ssa_use_operand_t *VAR_1, tree VAR_2)
{
  if (VAR_2)
    FUNC_1 (VAR_0, VAR_1);
  else
    FUNC_0 (VAR_0, ((void*)0));
  VAR_0->stmt = VAR_2;
}
