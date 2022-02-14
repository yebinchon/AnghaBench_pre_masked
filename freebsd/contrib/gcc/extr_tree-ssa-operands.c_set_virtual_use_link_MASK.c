
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* use_operand_p ;
typedef scalar_t__ tree ;
struct TYPE_4__ {scalar_t__ stmt; int * use; int prev; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void
FUNC_1 (use_operand_p VAR_0, tree VAR_1)
{

  if (VAR_0->stmt != VAR_1)
    VAR_0->stmt = VAR_1;


  if (!VAR_0->prev)
    FUNC_0 (VAR_0, *(VAR_0->use));
}
