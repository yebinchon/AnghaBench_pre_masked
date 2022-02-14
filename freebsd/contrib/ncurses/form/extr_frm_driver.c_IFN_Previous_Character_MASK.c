
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ currow; int curcol; TYPE_1__* current; int w; } ;
struct TYPE_4__ {int dcols; } ;
typedef TYPE_2__ FORM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(FORM *VAR_2)
{
  int VAR_3 = FUNC_2(VAR_2->w, VAR_2->currow, VAR_2->curcol - 1);
  int VAR_4 = VAR_2->curcol;

  FUNC_0((FUNC_1("IFN_Previous_Character(%p)"), (void *)VAR_2));
  if ((VAR_2->curcol -= VAR_3) < 0)
    {
      if ((--(VAR_2->currow)) < 0)
 {
   VAR_2->currow++;
   VAR_2->curcol = VAR_4;
   FUNC_3(VAR_1);
 }
      VAR_2->curcol = VAR_2->current->dcols - 1;
    }
  FUNC_3(VAR_0);
}
