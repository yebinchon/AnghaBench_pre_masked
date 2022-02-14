
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_opt_pass {struct tree_opt_pass* next; scalar_t__ sub; } ;
struct cgraph_node {int * decl; scalar_t__ analyzed; struct cgraph_node* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct cgraph_node* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (struct tree_opt_pass*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

void
FUNC_7 (struct tree_opt_pass *VAR_4)
{
  do
    {
      if (FUNC_1 (VAR_4) && VAR_4->sub)
 {
   struct cgraph_node *VAR_5;
   for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next)
     if (VAR_5->analyzed)
       {
  FUNC_6 (FUNC_0 (VAR_5->decl));
  VAR_3 = VAR_5->decl;
  FUNC_2 (VAR_4->sub);
  FUNC_3 (VAR_0);
  FUNC_3 (VAR_1);
  VAR_3 = ((void*)0);
  FUNC_5 ();
  FUNC_4 ();
       }
 }
      VAR_4 = VAR_4->next;
    }
  while (VAR_4);
}
