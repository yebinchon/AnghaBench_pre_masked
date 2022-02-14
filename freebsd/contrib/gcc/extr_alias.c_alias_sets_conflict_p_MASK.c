
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int splay_tree_key ;
typedef TYPE_1__* alias_set_entry ;
struct TYPE_3__ {int children; scalar_t__ has_zero_child; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int
FUNC_2 (HOST_WIDE_INT VAR_0, HOST_WIDE_INT VAR_1)
{
  alias_set_entry VAR_2;



  if (VAR_0 == 0 || VAR_1 == 0

      || VAR_0 == VAR_1)
    return 1;


  VAR_2 = FUNC_0 (VAR_0);
  if (VAR_2 != 0
      && (VAR_2->has_zero_child
   || FUNC_1 (VAR_2->children,
    (splay_tree_key) VAR_1)))
    return 1;


  VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2 != 0
      && (VAR_2->has_zero_child
   || FUNC_1 (VAR_2->children,
    (splay_tree_key) VAR_0)))
    return 1;



  return 0;
}
