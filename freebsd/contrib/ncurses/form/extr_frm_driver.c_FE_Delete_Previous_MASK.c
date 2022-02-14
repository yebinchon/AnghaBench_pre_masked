
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int cols; int dcols; } ;
struct TYPE_9__ {scalar_t__ curcol; int currow; int status; int w; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef int FIELD_CELL ;
typedef TYPE_2__ FIELD ;


 int * FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(FORM *VAR_3)
{
  FIELD *VAR_4 = VAR_3->current;

  FUNC_6((FUNC_7("FE_Delete_Previous(%p)"), (void *)VAR_3));
  if (FUNC_4(VAR_3))
    FUNC_9(VAR_1);

  if ((--(VAR_3->curcol)) < 0)
    {
      FIELD_CELL *VAR_5, *VAR_6, *VAR_7, *VAR_8;
      int VAR_9 = VAR_3->currow;

      VAR_3->curcol++;
      if (VAR_3->status & VAR_2)
 FUNC_9(VAR_1);

      VAR_6 = FUNC_0(VAR_4, (VAR_3->currow - 1));
      VAR_5 = FUNC_0(VAR_4, (VAR_3->currow));
      FUNC_5(VAR_3);
      VAR_7 = FUNC_2(VAR_6, VAR_4->dcols);
      VAR_8 = FUNC_2(VAR_5, VAR_4->dcols);
      if ((int)(VAR_8 - VAR_5) >
   (VAR_4->cols - (int)(VAR_7 - VAR_6)))
 FUNC_9(VAR_1);
      FUNC_11(VAR_3->w, VAR_3->currow, VAR_3->curcol);
      FUNC_10(VAR_3->w);
      FUNC_1(VAR_3, VAR_7);
      if (VAR_3->currow == VAR_9 && VAR_9 > 0)
 {
   VAR_3->currow -= 1;
   VAR_3->curcol = VAR_4->dcols - 1;
   FUNC_3(VAR_3);
 }
      else
 {
   FUNC_11(VAR_3->w, VAR_3->currow, VAR_3->curcol);
   FUNC_8(VAR_3->w, VAR_5, (int)(VAR_8 - VAR_5));
 }
    }
  else
    {
      FUNC_3(VAR_3);
    }
  FUNC_9(VAR_0);
}
