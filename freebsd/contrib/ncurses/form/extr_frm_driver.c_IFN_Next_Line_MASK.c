
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ drows; } ;
struct TYPE_6__ {scalar_t__ currow; scalar_t__ curcol; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef TYPE_2__ FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(FORM *VAR_2)
{
  FIELD *VAR_3 = VAR_2->current;

  FUNC_2((FUNC_3("IFN_Next_Line(%p)"), (void *)VAR_2));
  if ((++(VAR_2->currow)) == VAR_3->drows)
    {




      VAR_2->currow--;
      FUNC_4(VAR_1);
    }
  VAR_2->curcol = 0;
  FUNC_4(VAR_0);
}
