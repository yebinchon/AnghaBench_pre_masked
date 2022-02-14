
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cgraph_node {scalar_t__ decl; struct cgraph_node* next_nested; struct cgraph_node* nested; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct cgraph_node* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_0, tree VAR_1)
{
  struct cgraph_node *VAR_2 = FUNC_3 (VAR_0);
  tree VAR_3;

  for (VAR_2 = VAR_2->nested; VAR_2 ; VAR_2 = VAR_2->next_nested)
    {
      for (VAR_3 = FUNC_0 (VAR_2->decl); VAR_3; VAR_3 = FUNC_1 (VAR_3))
 if (FUNC_4 (FUNC_2 (VAR_3), VAR_1))
   return 1;

      if (FUNC_5 (VAR_2->decl, VAR_1))
 return 1;
    }

  return 0;
}
