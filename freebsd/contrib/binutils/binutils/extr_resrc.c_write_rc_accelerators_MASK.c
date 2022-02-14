
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; int flags; scalar_t__ id; struct TYPE_3__* next; } ;
typedef TYPE_1__ rc_accelerator ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_4, const rc_accelerator *VAR_5)
{
  const rc_accelerator *VAR_6;

  FUNC_1 (VAR_4, "BEGIN\n");
  for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
      int VAR_7;

      FUNC_1 (VAR_4, "  ");

      if ((VAR_6->key & 0x7f) == VAR_6->key
   && FUNC_0 (VAR_6->key)
   && (VAR_6->flags & VAR_3) == 0)
 {
   FUNC_1 (VAR_4, "\"%c\"", (char) VAR_6->key);
   VAR_7 = 1;
 }
      else
 {
   FUNC_1 (VAR_4, "%d", (int) VAR_6->key);
   VAR_7 = 0;
 }

      FUNC_1 (VAR_4, ", %d", (int) VAR_6->id);

      if (! VAR_7)
 {
   if ((VAR_6->flags & VAR_3) != 0)
     FUNC_1 (VAR_4, ", VIRTKEY");
   else
     FUNC_1 (VAR_4, ", ASCII");
 }

      if ((VAR_6->flags & VAR_2) != 0)
 FUNC_1 (VAR_4, ", SHIFT");
      if ((VAR_6->flags & VAR_1) != 0)
 FUNC_1 (VAR_4, ", CONTROL");
      if ((VAR_6->flags & VAR_0) != 0)
 FUNC_1 (VAR_4, ", ALT");

      FUNC_1 (VAR_4, "\n");
    }

  FUNC_1 (VAR_4, "END\n");
}
