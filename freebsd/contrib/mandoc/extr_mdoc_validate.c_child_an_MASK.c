
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ tok; struct roff_node* child; struct roff_node* next; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct roff_node *VAR_1)
{

 for (VAR_1 = VAR_1->child; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
  if ((VAR_1->tok == VAR_0 && VAR_1->child != ((void*)0)) || FUNC_0(VAR_1))
   return 1;
 return 0;
}
