
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {int lowered; int decl; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (struct cgraph_node *VAR_0)
{
  if (VAR_0->lowered)
    return;
  FUNC_0 (VAR_0->decl);
  VAR_0->lowered = 1;
}
