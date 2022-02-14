
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {scalar_t__ phi_nodes; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_2 (basic_block VAR_0, tree VAR_1)
{
  tree VAR_2;

  VAR_0->phi_nodes = VAR_1;
  for (VAR_2 = VAR_1; VAR_2; VAR_2 = FUNC_0 (VAR_2))
    FUNC_1 (VAR_2, VAR_0);
}
