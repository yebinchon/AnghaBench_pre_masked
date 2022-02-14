
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {struct loop* tree_root; } ;
struct loop {struct loop* next; struct loop* outer; struct loop* inner; } ;


 int FUNC_0 (struct loop*) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2 (struct loops *VAR_0)
{
  struct loop *VAR_1;

  if (!VAR_0->tree_root->inner)
    return;




  VAR_1 = VAR_0->tree_root->inner;
  while (1)
    {
      FUNC_0 (VAR_1);

      if (VAR_1->inner)
 {
   VAR_1 = VAR_1->inner;
   continue;
 }
      while (!VAR_1->next)
 {
   VAR_1 = VAR_1->outer;
   if (VAR_1 == VAR_0->tree_root)
     {
       FUNC_1 ();
       return;
     }
 }
      VAR_1 = VAR_1->next;
    }
}
