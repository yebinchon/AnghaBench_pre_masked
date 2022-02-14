
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct control_info {char* name; scalar_t__ class; unsigned long style; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_7__ {scalar_t__ named; TYPE_1__ u; } ;
struct TYPE_6__ {int style; scalar_t__ exstyle; scalar_t__ width; scalar_t__ height; scalar_t__ help; int * data; scalar_t__ y; scalar_t__ x; TYPE_4__ class; scalar_t__ id; TYPE_4__ text; } ;
typedef TYPE_2__ rc_dialog_control ;
typedef int FILE ;


 int VAR_0 ;
 struct control_info* VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,TYPE_4__,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_2, const rc_dialog_control *VAR_3)
{
  const struct control_info *VAR_4;

  FUNC_0 (VAR_2, "  ");

  if (VAR_3->class.named)
    VAR_4 = ((void*)0);
  else
    {
      for (VAR_4 = VAR_1; VAR_4->name != ((void*)0); ++VAR_4)
 if (VAR_4->class == VAR_3->class.u.id
     && (VAR_4->style == (unsigned long) -1
  || VAR_4->style == (VAR_3->style & 0xff)))
   break;
    }
  if (VAR_4 == ((void*)0))
    FUNC_0 (VAR_2, "CONTROL");
  else if (VAR_4->name != ((void*)0))
    FUNC_0 (VAR_2, "%s", VAR_4->name);
  else
    {
    FUNC_0 (VAR_2, "CONTROL");
      VAR_4 = ((void*)0);
    }

  if (VAR_3->text.named || VAR_3->text.u.id != 0)
    {
      FUNC_0 (VAR_2, " ");
      FUNC_1 (VAR_2, VAR_3->text, 1);
      FUNC_0 (VAR_2, ",");
    }

  FUNC_0 (VAR_2, " %d, ", (int) VAR_3->id);

  if (VAR_4 == ((void*)0))
    {
      if (VAR_3->class.named)
 FUNC_0 (VAR_2, "\"");
      FUNC_1 (VAR_2, VAR_3->class, 0);
      if (VAR_3->class.named)
 FUNC_0 (VAR_2, "\"");
      FUNC_0 (VAR_2, ", 0x%x, ", (unsigned int) VAR_3->style);
    }

  FUNC_0 (VAR_2, "%d, %d", (int) VAR_3->x, (int) VAR_3->y);

  if (VAR_3->style != VAR_0
      || VAR_3->exstyle != 0
      || VAR_3->width != 0
      || VAR_3->height != 0
      || VAR_3->help != 0)
    {
      FUNC_0 (VAR_2, ", %d, %d", (int) VAR_3->width, (int) VAR_3->height);




      if (VAR_4 != ((void*)0))
 FUNC_0 (VAR_2, ", 0x%x", (unsigned int) VAR_3->style);

      if (VAR_3->exstyle != 0 || VAR_3->help != 0)
 FUNC_0 (VAR_2, ", 0x%x, %u", (unsigned int) VAR_3->exstyle,
   (unsigned int) VAR_3->help);
    }

  FUNC_0 (VAR_2, "\n");

  if (VAR_3->data != ((void*)0))
    FUNC_2 (VAR_2, VAR_3->data, 2);
}
