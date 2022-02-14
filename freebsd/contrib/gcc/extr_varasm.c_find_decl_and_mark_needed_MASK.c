
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cgraph_varpool_node {int decl; } ;
struct cgraph_node {int decl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct cgraph_node*) ;
 struct cgraph_node* FUNC_2 (int ) ;
 int FUNC_3 (struct cgraph_varpool_node*) ;
 struct cgraph_varpool_node* FUNC_4 (int ) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_3, tree VAR_4)
{
  struct cgraph_node *VAR_5 = ((void*)0);
  struct cgraph_varpool_node *VAR_6 = ((void*)0);

  if (FUNC_0 (VAR_3) == VAR_0)
    {
      VAR_5 = FUNC_2 (VAR_4);
      if (VAR_5 == ((void*)0))
 VAR_6 = FUNC_4 (VAR_4);
    }
  else
    {
      VAR_6 = FUNC_4 (VAR_4);
      if (VAR_6 == ((void*)0))
 VAR_5 = FUNC_2 (VAR_4);
    }

  if (VAR_5)
    {





      if (! VAR_2)
 FUNC_1 (VAR_5);
      return VAR_5->decl;
    }
  else if (VAR_6)
    {
      FUNC_3 (VAR_6);
      return VAR_6->decl;
    }
  else
    return VAR_1;
}
