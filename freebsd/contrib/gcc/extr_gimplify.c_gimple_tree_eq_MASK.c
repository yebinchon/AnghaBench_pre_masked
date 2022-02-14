
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {int val; } ;
typedef TYPE_1__ elt_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (void const*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5 (const void *VAR_0, const void *VAR_1)
{
  tree VAR_2 = ((const elt_t *) VAR_0)->val;
  tree VAR_3 = ((const elt_t *) VAR_1)->val;
  enum tree_code VAR_4 = FUNC_0 (VAR_2);

  if (FUNC_0 (VAR_3) != VAR_4
      || FUNC_1 (VAR_2) != FUNC_1 (VAR_3))
    return 0;

  if (!FUNC_4 (VAR_2, VAR_3, 0))
    return 0;



  FUNC_2 (FUNC_3 (VAR_0) == FUNC_3 (VAR_1));

  return 1;
}
