
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef int splay_tree ;
struct TYPE_6__ {int decl_map; } ;
typedef TYPE_2__ copy_body_data ;
struct TYPE_5__ {scalar_t__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__*,int*,TYPE_2__*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*,int*,int *) ;
 int FUNC_5 (scalar_t__*,int ,int*) ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_8 (tree *VAR_6, int *VAR_7, void *VAR_8)
{
  copy_body_data *VAR_9 = (copy_body_data *) VAR_8;
  splay_tree VAR_10 = VAR_9->decl_map;
  splay_tree_node VAR_11;


  if ((FUNC_0 (*VAR_6) == VAR_5 && !FUNC_1 (*VAR_6))
      || FUNC_0 (*VAR_6) == VAR_1)
    {

      VAR_11 = FUNC_6 (VAR_10, (splay_tree_key) *VAR_6);


      if (VAR_11)
 *VAR_6 = (tree) VAR_11->value;
    }

  else if (FUNC_0 (*VAR_6) == VAR_4)
    FUNC_3 (VAR_6);
  else if (FUNC_0 (*VAR_6) == VAR_0)
    FUNC_2 (VAR_6, VAR_7, VAR_9);
  else if (FUNC_0 (*VAR_6) == VAR_3)
    FUNC_5 (VAR_6, VAR_10, VAR_7);
  else
    {
      FUNC_4 (VAR_6, VAR_7, ((void*)0));


      FUNC_7 (*VAR_6);
    }


  return VAR_2;
}
