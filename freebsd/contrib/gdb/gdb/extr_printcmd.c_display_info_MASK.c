
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char size; scalar_t__ format; int count; } ;
struct display {scalar_t__ block; int exp; TYPE_1__ format; scalar_t__ enabled_p; int number; struct display* next; } ;


 int FUNC_0 (int ,scalar_t__) ;
 struct display* VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_2, int VAR_3)
{
  struct display *VAR_4;

  if (!VAR_0)
    FUNC_5 ("There are no auto-display expressions now.\n");
  else
    FUNC_4 ("Auto-display expressions now in effect:\nNum Enb Expression\n");


  for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next)
    {
      FUNC_4 ("%d:   %c  ", VAR_4->number, "ny"[(int) VAR_4->enabled_p]);
      if (VAR_4->format.size)
 FUNC_4 ("/%d%c%c ", VAR_4->format.count, VAR_4->format.size,
    VAR_4->format.format);
      else if (VAR_4->format.format)
 FUNC_4 ("/%c ", VAR_4->format.format);
      FUNC_3 (VAR_4->exp, VAR_1);
      if (VAR_4->block && !FUNC_0 (FUNC_2 (0), VAR_4->block))
 FUNC_4 (" (cannot be evaluated in the current context)");
      FUNC_4 ("\n");
      FUNC_1 (VAR_1);
    }
}
