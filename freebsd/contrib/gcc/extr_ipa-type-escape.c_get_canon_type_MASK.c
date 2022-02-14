
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
struct TYPE_3__ {int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_2, bool VAR_3, bool VAR_4)
{
  splay_tree_node VAR_5;

  if (!VAR_2 || !FUNC_6 (VAR_2))
    return ((void*)0);

  VAR_2 = FUNC_3 (VAR_2);
  if (VAR_4)
    while (FUNC_0 (VAR_2) || FUNC_1 (VAR_2) == VAR_0)
      VAR_2 = FUNC_3 (FUNC_2 (VAR_2));

  else if (VAR_3)
    while (FUNC_0 (VAR_2))
 VAR_2 = FUNC_3 (FUNC_2 (VAR_2));

  VAR_5 = FUNC_5(VAR_1, (splay_tree_key) VAR_2);

  if (VAR_5 == ((void*)0))
    return FUNC_4 (VAR_2);
  else return (tree) VAR_5->value;
}
