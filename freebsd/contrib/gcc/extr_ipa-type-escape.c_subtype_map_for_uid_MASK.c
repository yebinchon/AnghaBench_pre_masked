
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int splay_tree_value ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef int * bitmap ;
struct TYPE_3__ {int value; } ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static bitmap
FUNC_3 (int VAR_2, bool VAR_3)
{
  splay_tree_node VAR_4 = FUNC_2 (VAR_1,
         (splay_tree_key) VAR_2);

  if (VAR_4)
    return (bitmap) VAR_4->value;
  else if (VAR_3)
    {
      bitmap VAR_5 = FUNC_0 (&VAR_0);
      FUNC_1 (VAR_1,
    VAR_2,
    (splay_tree_value)VAR_5);
      return VAR_5;
    }
  else return ((void*)0);
}
