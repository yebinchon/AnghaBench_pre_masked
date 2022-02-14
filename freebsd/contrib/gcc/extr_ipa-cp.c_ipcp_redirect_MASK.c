
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipa_jump_func {int dummy; } ;
struct cgraph_node {int dummy; } ;
struct cgraph_edge {struct cgraph_node* callee; struct cgraph_node* caller; } ;
typedef enum jump_func_type { ____Placeholder_jump_func_type } jump_func_type ;
typedef enum cvalue_type { ____Placeholder_cvalue_type } cvalue_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipa_jump_func*) ;
 struct ipa_jump_func* FUNC_1 (struct cgraph_edge*,int) ;
 int FUNC_2 (struct cgraph_node*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cgraph_node*,int) ;
 struct cgraph_node* FUNC_5 (struct cgraph_node*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool
FUNC_7 (struct cgraph_edge *VAR_2)
{
  struct cgraph_node *VAR_3, *VAR_4, *VAR_5;
  int VAR_6, VAR_7;
  struct ipa_jump_func *VAR_8;
  enum jump_func_type VAR_9;
  enum cvalue_type VAR_10;

  VAR_3 = VAR_2->caller;
  VAR_4 = VAR_2->callee;
  VAR_5 = FUNC_5 (VAR_4);
  VAR_7 = FUNC_2 (VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    {
      VAR_10 =
 FUNC_3 (FUNC_4 (VAR_5, VAR_6));
      if (FUNC_6 (VAR_10))
 {
   VAR_8 = FUNC_1 (VAR_2, VAR_6);
   VAR_9 = FUNC_0 (VAR_8);
   if (VAR_9 != VAR_0
       && VAR_9 != VAR_1)
     return 1;
 }
    }

  return 0;
}
