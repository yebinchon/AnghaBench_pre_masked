
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {int dummy; } ;
typedef int ipa_methodlist_p ;


 int FUNC_0 () ;
 int FUNC_1 (int ,struct cgraph_node*) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3 (ipa_methodlist_p * VAR_0, struct cgraph_node *VAR_1)
{
  ipa_methodlist_p VAR_2;

  VAR_2 = FUNC_0 ();
  FUNC_1 (VAR_2, VAR_1);
  FUNC_2 (VAR_2, *VAR_0);
  *VAR_0 = VAR_2;
}
