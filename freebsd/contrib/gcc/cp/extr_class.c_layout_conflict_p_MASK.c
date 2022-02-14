
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree ;
struct TYPE_3__ {scalar_t__ key; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2 (tree VAR_1,
     tree VAR_2,
     splay_tree VAR_3,
     int VAR_4)
{
  splay_tree_node VAR_5;



  VAR_5 = FUNC_0 (VAR_3);


  if (!VAR_5)
    return 0;

  return FUNC_1 (VAR_1, VAR_0, VAR_2,
     VAR_3, (tree) (VAR_5->key),
     VAR_4);
}
