
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char* tree ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef int splay_tree ;
struct TYPE_5__ {int names_used; } ;
struct TYPE_4__ {scalar_t__ value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (char*,char*,...) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

void
FUNC_4 (tree VAR_2, tree VAR_3)
{
  splay_tree VAR_4;
  splay_tree_node VAR_5;


  VAR_4
    = VAR_1[VAR_0 - 1].names_used;
  if (!VAR_4)
    return;

  VAR_5 = FUNC_3 (VAR_4, (splay_tree_key) VAR_2);
  if (VAR_5)
    {





      FUNC_2 ("declaration of %q#D", VAR_3);
      FUNC_2 ("changes meaning of %qD from %q+#D",
      FUNC_0 (FUNC_1 (VAR_3)), (tree) VAR_5->value);
    }
}
