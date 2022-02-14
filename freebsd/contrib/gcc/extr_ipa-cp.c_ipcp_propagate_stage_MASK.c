
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union parameter_info {int dummy; } parameter_info ;
struct TYPE_2__ {int member_0; } ;
struct ipcp_formal {TYPE_1__ member_1; int member_0; } ;
struct ipa_jump_func {int dummy; } ;
struct cgraph_node {struct cgraph_edge* callees; } ;
struct cgraph_edge {struct cgraph_edge* next_callee; } ;
typedef int ipa_methodlist_p ;
typedef enum jump_func_type { ____Placeholder_jump_func_type } jump_func_type ;


 int FUNC_0 (struct ipa_jump_func*) ;
 int FUNC_1 (int *,struct cgraph_node*) ;
 struct cgraph_node* FUNC_2 (struct cgraph_edge*) ;
 struct ipa_jump_func* FUNC_3 (struct cgraph_edge*,int) ;
 int FUNC_4 (struct cgraph_edge*) ;
 union parameter_info* FUNC_5 (struct ipa_jump_func*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 struct cgraph_node* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct ipcp_formal*,struct ipcp_formal*) ;
 int FUNC_10 (struct ipcp_formal*,struct cgraph_node*,int,union parameter_info*) ;
 int FUNC_11 (struct ipcp_formal*,struct ipcp_formal*,struct ipcp_formal*) ;
 struct ipcp_formal* FUNC_12 (struct cgraph_node*,int) ;
 int FUNC_13 (struct cgraph_node*,int,struct ipcp_formal*) ;

__attribute__((used)) static void
FUNC_14 (void)
{
  int VAR_0;
  struct ipcp_formal VAR_1 = { 0, 0 }, VAR_2 = { 0,0 };
  struct ipcp_formal *VAR_3;
  struct cgraph_node *VAR_4, *VAR_5;
  struct cgraph_edge *VAR_6;
  struct ipa_jump_func *VAR_7;
  enum jump_func_type VAR_8;
  union parameter_info *VAR_9;
  ipa_methodlist_p VAR_10;
  int VAR_11;


  VAR_10 = FUNC_6 ();
  while (FUNC_7 (VAR_10))
    {
      VAR_4 = FUNC_8 (&VAR_10);
      for (VAR_6 = VAR_4->callees; VAR_6; VAR_6 = VAR_6->next_callee)
 {
   VAR_5 = FUNC_2 (VAR_6);
   VAR_11 = FUNC_4 (VAR_6);
   for (VAR_0 = 0; VAR_0 < VAR_11; VAR_0++)
     {
       VAR_7 = FUNC_3 (VAR_6, VAR_0);
       VAR_8 = FUNC_0 (VAR_7);
       VAR_9 = FUNC_5 (VAR_7);
       FUNC_10 (&VAR_1, VAR_4, VAR_8, VAR_9);
       VAR_3 = FUNC_12 (VAR_5, VAR_0);
       FUNC_11 (&VAR_2, &VAR_1, VAR_3);
       if (FUNC_9 (&VAR_2, VAR_3))
  {
    FUNC_13 (VAR_5, VAR_0, &VAR_2);
    FUNC_1 (&VAR_10, VAR_5);
  }
     }
 }
    }
}
