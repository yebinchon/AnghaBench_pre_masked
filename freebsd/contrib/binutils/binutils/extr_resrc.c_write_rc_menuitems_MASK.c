
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ id; scalar_t__ state; scalar_t__ help; struct TYPE_3__* popup; int * text; struct TYPE_3__* next; } ;
typedef TYPE_1__ rc_menuitem ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_6, const rc_menuitem *VAR_7, int VAR_8,
      int VAR_9)
{
  const rc_menuitem *VAR_10;

  FUNC_1 (VAR_6, VAR_9);
  FUNC_0 (VAR_6, "BEGIN\n");

  for (VAR_10 = VAR_7; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      FUNC_1 (VAR_6, VAR_9 + 2);

      if (VAR_10->popup == ((void*)0))
 FUNC_0 (VAR_6, "MENUITEM");
      else
 FUNC_0 (VAR_6, "POPUP");

      if (! VAR_8
   && VAR_10->popup == ((void*)0)
   && VAR_10->text == ((void*)0)
   && VAR_10->type == 0
   && VAR_10->id == 0)
 {
   FUNC_0 (VAR_6, " SEPARATOR\n");
   continue;
 }

      if (VAR_10->text == ((void*)0))
 FUNC_0 (VAR_6, " \"\"");
      else
 {
   FUNC_0 (VAR_6, " ");
   FUNC_2 (VAR_6, VAR_10->text, -1);
 }

      if (! VAR_8)
 {
   if (VAR_10->popup == ((void*)0))
     FUNC_0 (VAR_6, ", %d", (int) VAR_10->id);

   if ((VAR_10->type & VAR_0) != 0)
     FUNC_0 (VAR_6, ", CHECKED");
   if ((VAR_10->type & VAR_1) != 0)
     FUNC_0 (VAR_6, ", GRAYED");
   if ((VAR_10->type & VAR_2) != 0)
     FUNC_0 (VAR_6, ", HELP");
   if ((VAR_10->type & VAR_3) != 0)
     FUNC_0 (VAR_6, ", INACTIVE");
   if ((VAR_10->type & VAR_4) != 0)
     FUNC_0 (VAR_6, ", MENUBARBREAK");
   if ((VAR_10->type & VAR_5) != 0)
     FUNC_0 (VAR_6, ", MENUBREAK");
 }
      else
 {
   if (VAR_10->id != 0 || VAR_10->type != 0 || VAR_10->state != 0 || VAR_10->help != 0)
     {
       FUNC_0 (VAR_6, ", %d", (int) VAR_10->id);
       if (VAR_10->type != 0 || VAR_10->state != 0 || VAR_10->help != 0)
  {
    FUNC_0 (VAR_6, ", %u", (unsigned int) VAR_10->type);
    if (VAR_10->state != 0 || VAR_10->help != 0)
      {
        FUNC_0 (VAR_6, ", %u", (unsigned int) VAR_10->state);
        if (VAR_10->help != 0)
   FUNC_0 (VAR_6, ", %u", (unsigned int) VAR_10->help);
      }
  }
     }
 }

      FUNC_0 (VAR_6, "\n");

      if (VAR_10->popup != ((void*)0))
 FUNC_3 (VAR_6, VAR_10->popup, VAR_8, VAR_9 + 2);
    }

  FUNC_1 (VAR_6, VAR_9);
  FUNC_0 (VAR_6, "END\n");
}
