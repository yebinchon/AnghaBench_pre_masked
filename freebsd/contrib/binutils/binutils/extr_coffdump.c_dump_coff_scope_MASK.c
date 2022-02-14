
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coff_scope {int offset; int size; int nvars; struct coff_scope* next; struct coff_scope* list_head; int vars_head; TYPE_1__* sec; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (struct coff_scope *VAR_0)
{
  if (VAR_0)
    {
      FUNC_3 (1);
      FUNC_2 ("List of blocks %lx ",(unsigned long) VAR_0);

      if (VAR_0->sec)
 FUNC_2( "  %s %x..%x", VAR_0->sec->name,VAR_0->offset, VAR_0->offset + VAR_0->size -1);

      FUNC_1 ();
      FUNC_3 (0);
      FUNC_2 ("*****************");
      FUNC_1 ();

      while (VAR_0)
 {
   FUNC_3 (0);
   FUNC_2 ("vars %d", VAR_0->nvars);
   FUNC_1 ();
   FUNC_0 (VAR_0->vars_head);
   FUNC_2 ("blocks");
   FUNC_1 ();
   FUNC_4 (VAR_0->list_head);
   FUNC_1 ();
   VAR_0 = VAR_0->next;
 }

      FUNC_3 (0);
      FUNC_2 ("*****************");
      FUNC_1 ();
      FUNC_3 (-1);
    }
}
