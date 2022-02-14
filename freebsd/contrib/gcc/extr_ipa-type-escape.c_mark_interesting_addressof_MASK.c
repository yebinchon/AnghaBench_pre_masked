
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int splay_tree_value ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef scalar_t__ bitmap ;
struct TYPE_3__ {scalar_t__ value; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8 (tree VAR_3, tree VAR_4)
{
  int VAR_5;
  int VAR_6;
  bitmap VAR_7;
  splay_tree_node VAR_8;

  VAR_4 = FUNC_4 (VAR_4, 0, 0);
  VAR_3 = FUNC_4 (VAR_3, 0, 0);

  if (!VAR_4 || !VAR_3)
    return;

  VAR_5 = FUNC_1 (VAR_4);
  VAR_6 = FUNC_1 (VAR_3);

  FUNC_3 (FUNC_5 (VAR_4) == 0);


  VAR_8 = FUNC_7 (VAR_1,
         (splay_tree_key) VAR_5);

  if (VAR_8)
    VAR_7 = (bitmap) VAR_8->value;
  else
    {
      VAR_7 = FUNC_0 (&VAR_0);
      FUNC_6 (VAR_1,
    VAR_5,
    (splay_tree_value)VAR_7);
    }
  FUNC_2 (VAR_7, FUNC_1 (VAR_3));


  VAR_8 =
    FUNC_7 (VAR_2, (splay_tree_key) VAR_6);

  if (VAR_8)
    VAR_7 = (bitmap) VAR_8->value;
  else
    {
      VAR_7 = FUNC_0 (&VAR_0);
      FUNC_6 (VAR_2,
    VAR_6,
    (splay_tree_value)VAR_7);
    }
  FUNC_2 (VAR_7, FUNC_1 (VAR_3));
}
