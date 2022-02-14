
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* next; } ;
typedef TYPE_4__ rc_dialog_control ;
struct TYPE_9__ {scalar_t__ length; } ;
struct TYPE_10__ {scalar_t__ id; TYPE_1__ n; } ;
struct TYPE_14__ {TYPE_2__ u; scalar_t__ named; } ;
struct TYPE_13__ {int style; scalar_t__ exstyle; TYPE_4__* controls; TYPE_3__* ex; int * font; scalar_t__ pointsize; TYPE_8__ menu; int * caption; TYPE_8__ class; } ;
typedef TYPE_5__ rc_dialog ;
struct TYPE_11__ {scalar_t__ weight; scalar_t__ italic; int charset; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,TYPE_8__,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,TYPE_4__ const*) ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_0, const rc_dialog *VAR_1)
{
  const rc_dialog_control *VAR_2;

  FUNC_0 (VAR_0, "STYLE 0x%x\n", VAR_1->style);

  if (VAR_1->exstyle != 0)
    FUNC_0 (VAR_0, "EXSTYLE 0x%x\n", (unsigned int) VAR_1->exstyle);

  if ((VAR_1->class.named && VAR_1->class.u.n.length > 0)
      || VAR_1->class.u.id != 0)
    {
      FUNC_0 (VAR_0, "CLASS ");
      FUNC_1 (VAR_0, VAR_1->class, 1);
      FUNC_0 (VAR_0, "\n");
    }

  if (VAR_1->caption != ((void*)0))
    {
      FUNC_0 (VAR_0, "CAPTION ");
      FUNC_2 (VAR_0, VAR_1->caption, -1);
      FUNC_0 (VAR_0, "\n");
    }

  if ((VAR_1->menu.named && VAR_1->menu.u.n.length > 0)
      || VAR_1->menu.u.id != 0)
    {
      FUNC_0 (VAR_0, "MENU ");
      FUNC_1 (VAR_0, VAR_1->menu, 0);
      FUNC_0 (VAR_0, "\n");
    }

  if (VAR_1->font != ((void*)0))
    {
      FUNC_0 (VAR_0, "FONT %d, ", (int) VAR_1->pointsize);
      FUNC_2 (VAR_0, VAR_1->font, -1);
      if (VAR_1->ex != ((void*)0)
   && (VAR_1->ex->weight != 0
       || VAR_1->ex->italic != 0
       || VAR_1->ex->charset != 1))
 FUNC_0 (VAR_0, ", %d, %d, %d",
   (int) VAR_1->ex->weight,
   (int) VAR_1->ex->italic,
   (int) VAR_1->ex->charset);
      FUNC_0 (VAR_0, "\n");
    }

  FUNC_0 (VAR_0, "BEGIN\n");

  for (VAR_2 = VAR_1->controls; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    FUNC_3 (VAR_0, VAR_2);

  FUNC_0 (VAR_0, "END\n");
}
