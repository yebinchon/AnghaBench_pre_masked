
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_edge* callers; } ;
struct cgraph_edge {char const* inline_failed; struct cgraph_edge* next_caller; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*,char const*) ;

__attribute__((used)) static void
FUNC_1 (struct cgraph_node *VAR_1, const char *VAR_2)
{
  struct cgraph_edge *VAR_3;

  if (VAR_0)
    FUNC_0 (VAR_0, "Inlining failed: %s\n", VAR_2);
  for (VAR_3 = VAR_1->callers; VAR_3; VAR_3 = VAR_3->next_caller)
    if (VAR_3->inline_failed)
      VAR_3->inline_failed = VAR_2;
}
