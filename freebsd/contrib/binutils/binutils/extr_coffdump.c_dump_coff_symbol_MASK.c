
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_symbol {char* name; int tag; int number; struct coff_symbol* next; int visible; int where; int type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (struct coff_symbol *VAR_0)
{
  FUNC_5 (1);
  FUNC_4 ("List of symbols");
  FUNC_3 ();

  while (VAR_0)
    {
      FUNC_5 (1);
      FUNC_5 (1);
      FUNC_4 ("Symbol  %s, tag %d, number %d", VAR_0->name, VAR_0->tag, VAR_0->number);
      FUNC_3 ();
      FUNC_5 (-1);
      FUNC_5 (1);
      FUNC_4 ("Type");
      FUNC_3 ();
      FUNC_0 (VAR_0->type);
      FUNC_5 (-1);
      FUNC_5 (1);
      FUNC_4 ("Where");
      FUNC_2 (VAR_0->where);
      FUNC_5 (-1);
      FUNC_5 (1);
      FUNC_4 ("Visible");
      FUNC_1 (VAR_0->visible);
      FUNC_5 (-1);
      VAR_0 = VAR_0->next;
      FUNC_5 (-1);
    }
  FUNC_5 (-1);
}
