
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int drows; scalar_t__ dcols; } ;
struct TYPE_11__ {int currow; int status; int w; scalar_t__ curcol; scalar_t__ opts; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef int FIELD_CELL ;
typedef TYPE_2__ FIELD ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 unsigned int VAR_4 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_15(FORM *VAR_7)
{
  FIELD *VAR_8 = VAR_7->current;
  FIELD_CELL *VAR_9, *VAR_10;
  bool VAR_11 = ((VAR_8->drows - 1) == VAR_7->currow);

  FUNC_8((FUNC_9("FE_New_Line(%p)"), (void *)VAR_7));
  if (VAR_7->status & VAR_5)
    {
      if (VAR_11 &&
   (!(FUNC_3(VAR_8) && !FUNC_7(VAR_8))))
 {
   if (!((unsigned)VAR_7->opts & VAR_4))
     FUNC_11(VAR_1);
   FUNC_14(VAR_7->w, VAR_7->currow, VAR_7->curcol);
   FUNC_12(VAR_7->w);




   FUNC_6(VAR_7, VAR_6);
   FUNC_11(FUNC_4(VAR_3, VAR_7));
 }
      else
 {
   if (VAR_11 && !FUNC_2(VAR_8, 1))
     {



       FUNC_11(VAR_2);
     }
   FUNC_14(VAR_7->w, VAR_7->currow, VAR_7->curcol);
   FUNC_12(VAR_7->w);
   VAR_7->currow++;
   VAR_7->curcol = 0;
   FUNC_6(VAR_7, VAR_6);
   FUNC_11(VAR_0);
 }
    }
  else
    {

      if (VAR_11 &&
   !(FUNC_3(VAR_8) && !FUNC_7(VAR_8)))
 {
   if (!((unsigned)VAR_7->opts & VAR_4))
     FUNC_11(VAR_1);
   FUNC_11(FUNC_4(VAR_3, VAR_7));
 }
      else
 {
   bool VAR_12 = !VAR_11 && FUNC_5(VAR_7);

   if (!(VAR_12 || FUNC_3(VAR_8)))
     FUNC_11(VAR_1);
   if (!VAR_12 && !FUNC_2(VAR_8, 1))
     FUNC_11(VAR_2);

   VAR_9 = FUNC_0(VAR_7);
   VAR_10 = FUNC_1(VAR_9, VAR_8->dcols - VAR_7->curcol);
   FUNC_14(VAR_7->w, VAR_7->currow, VAR_7->curcol);
   FUNC_12(VAR_7->w);
   VAR_7->currow++;
   VAR_7->curcol = 0;
   FUNC_14(VAR_7->w, VAR_7->currow, VAR_7->curcol);
   FUNC_13(VAR_7->w);
   FUNC_10(VAR_7->w, VAR_9, (int)(VAR_10 - VAR_9));
   FUNC_6(VAR_7, VAR_6);
   FUNC_11(VAR_0);
 }
    }
}
