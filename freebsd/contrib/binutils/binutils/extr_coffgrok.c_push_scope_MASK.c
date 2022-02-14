
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_scope {struct coff_scope* parent; struct coff_scope* list_tail; struct coff_scope* list_head; struct coff_scope* next; } ;


 struct coff_scope* FUNC_0 () ;
 struct coff_scope* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (int VAR_1)
{
  struct coff_scope *VAR_2 = FUNC_0 ();
  if (VAR_1)
    {
      if (VAR_0)
 {
   if (VAR_0->list_tail)
     {
       VAR_0->list_tail->next = VAR_2;
     }
   else
     {
       VAR_0->list_head = VAR_2;
     }
   VAR_0->list_tail = VAR_2;
 }
    }
  VAR_2->parent = VAR_0;

  VAR_0 = VAR_2;
}
