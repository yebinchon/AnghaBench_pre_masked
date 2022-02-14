
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cgraph_node {scalar_t__ decl; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct cgraph_node*,int) ;

void
FUNC_3 (struct cgraph_node *VAR_0)
{
  tree VAR_1;
  tree VAR_2;
  tree VAR_3;
  int VAR_4;

  VAR_1 = VAR_0->decl;
  VAR_2 = FUNC_0 (VAR_1);
  VAR_4 = 0;
  for (VAR_3 = VAR_2; VAR_3; VAR_3 = FUNC_1 (VAR_3))
    VAR_4++;
  FUNC_2 (VAR_0, VAR_4);
}
