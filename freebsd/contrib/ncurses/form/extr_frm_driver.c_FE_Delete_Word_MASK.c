
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dcols; } ;
struct TYPE_7__ {int curcol; int w; int currow; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef int FIELD_CELL ;
typedef TYPE_2__ FIELD ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_14(FORM *VAR_2)
{
  FIELD *VAR_3 = VAR_2->current;
  FIELD_CELL *VAR_4 = FUNC_0(VAR_2);
  FIELD_CELL *VAR_5 = VAR_4 + VAR_3->dcols;
  FIELD_CELL *VAR_6 = VAR_4 + VAR_2->curcol;
  FIELD_CELL *VAR_7;

  FUNC_8((FUNC_9("FE_Delete_Word(%p)"), (void *)VAR_2));
  FUNC_7(VAR_2);
  if (FUNC_6(*VAR_6))
    FUNC_11(VAR_1);


  FUNC_1(VAR_2,
    FUNC_3(VAR_4, VAR_2->curcol));
  FUNC_13(VAR_2->w, VAR_2->currow, VAR_2->curcol);
  FUNC_12(VAR_2->w);


  VAR_7 = FUNC_4(VAR_6, (int)(VAR_5 - VAR_6));

  VAR_7 = FUNC_5(VAR_7, (int)(VAR_5 - VAR_7));
  if ((VAR_7 != VAR_6) && !FUNC_6(*VAR_7))
    {

      FUNC_10(VAR_2->w, VAR_7, (int)(VAR_7 - FUNC_2(VAR_7, (int)(VAR_5 - VAR_7))));
    }
  FUNC_11(VAR_0);
}
