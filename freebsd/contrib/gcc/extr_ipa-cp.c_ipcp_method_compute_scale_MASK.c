
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {int count; struct cgraph_edge* callers; } ;
struct cgraph_edge {scalar_t__ count; struct cgraph_edge* next_caller; } ;
typedef int gcov_type ;


 int VAR_0 ;
 int FUNC_0 (struct cgraph_node*,int) ;

__attribute__((used)) static void
FUNC_1 (struct cgraph_node *VAR_1)
{
  gcov_type VAR_2;
  struct cgraph_edge *VAR_3;

  VAR_2 = 0;

  for (VAR_3 = VAR_1->callers; VAR_3 != ((void*)0); VAR_3 = VAR_3->next_caller)
    VAR_2 += VAR_3->count;
  if (VAR_1->count == 0)
    FUNC_0 (VAR_1, 0);
  else
    FUNC_0 (VAR_1, VAR_2 * VAR_0 / VAR_1->count);
}
