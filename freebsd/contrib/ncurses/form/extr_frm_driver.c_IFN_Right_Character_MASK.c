
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dcols; } ;
struct TYPE_6__ {int curcol; TYPE_2__* current; int currow; int w; } ;
typedef TYPE_1__ FORM ;
typedef TYPE_2__ FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(FORM *VAR_2)
{
  int VAR_3 = FUNC_4(VAR_2->w, VAR_2->currow, VAR_2->curcol);
  int VAR_4 = VAR_2->curcol;

  FUNC_2((FUNC_3("IFN_Right_Character(%p)"), (void *)VAR_2));
  if ((VAR_2->curcol += VAR_3) >= VAR_2->current->dcols)
    {






      VAR_2->curcol = VAR_4;
      FUNC_5(VAR_1);
    }
  FUNC_5(VAR_0);
}
