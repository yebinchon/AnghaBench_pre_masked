
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {int decl; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct cgraph_node *VAR_2 = (const struct cgraph_node *) VAR_0;
  const struct cgraph_node *VAR_3 = (const struct cgraph_node *) VAR_1;
  return FUNC_0 (VAR_2->decl) == FUNC_0 (VAR_3->decl);
}
