
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_4__ {int dest; } ;


 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static tree
FUNC_4 (tree VAR_0, edge VAR_1)
{
  basic_block VAR_2 = VAR_1->dest;
  tree VAR_3;

  for (VAR_3 = FUNC_3 (VAR_2); VAR_3; VAR_3 = FUNC_1 (VAR_3))
    if (FUNC_0 (VAR_3, VAR_1) == VAR_0)
      return FUNC_2 (VAR_3);

  return VAR_0;
}
