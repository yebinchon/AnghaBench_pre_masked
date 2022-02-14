
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_15__ {int dcols; int drows; int cols; int maxgrow; int rows; int nrow; int nbuf; int * buf; struct TYPE_15__* link; int working; TYPE_1__* form; } ;
struct TYPE_14__ {int status; int curcol; int currow; int * w; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef int FIELD_CELL ;
typedef TYPE_2__ FIELD ;


 int * FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_17 (int,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ,int ) ;
 scalar_t__ FUNC_21 (int ,int,int) ;

__attribute__((used)) static bool
FUNC_22(FIELD *VAR_7, int VAR_8)
{
  bool VAR_9 = VAR_1;

  if (VAR_7 && FUNC_4(VAR_7))
    {
      bool VAR_10 = FUNC_8(VAR_7);
      int VAR_11 = FUNC_1(VAR_7);
      int VAR_12;
      int VAR_13 = VAR_7->dcols;
      int VAR_14 = VAR_7->drows;
      FIELD_CELL *VAR_15 = VAR_7->buf;
      FIELD_CELL *VAR_16;

      int VAR_17;
      FORM *VAR_18 = VAR_7->form;
      bool VAR_19 = ((VAR_18 != (FORM *)0) &&
     (VAR_18->status & VAR_4) &&
     (VAR_18->current == VAR_7));

      if (VAR_19)
 FUNC_9(VAR_18);

      if (VAR_10)
 {
   VAR_17 = VAR_7->cols * VAR_8;
   if (VAR_7->maxgrow)
     VAR_17 = FUNC_5(VAR_7->maxgrow - VAR_7->dcols, VAR_17);
   VAR_7->dcols += VAR_17;
   if (VAR_7->dcols == VAR_7->maxgrow)
     FUNC_3(VAR_7, VAR_3);
 }
      else
 {
   VAR_17 = (VAR_7->rows + VAR_7->nrow) * VAR_8;
   if (VAR_7->maxgrow)
     VAR_17 = FUNC_5(VAR_7->maxgrow - VAR_7->drows, VAR_17);
   VAR_7->drows += VAR_17;
   if (VAR_7->drows == VAR_7->maxgrow)
     FUNC_3(VAR_7, VAR_3);
 }

      VAR_12 = FUNC_1(VAR_7);
      VAR_16 = (FIELD_CELL *)FUNC_16(FUNC_12(VAR_7));
      if (!VAR_16)
 {

   VAR_7->dcols = VAR_13;
   VAR_7->drows = VAR_14;
   if ((VAR_10 && (VAR_7->dcols != VAR_7->maxgrow)) ||
       (!VAR_10 && (VAR_7->drows != VAR_7->maxgrow)))
     FUNC_6(VAR_7, VAR_3);
 }
      else
 {



   int VAR_20, VAR_21;
   FIELD_CELL *VAR_22;
   FIELD_CELL *VAR_23;

   VAR_9 = VAR_2;

   FUNC_10((FUNC_11("fieldcell %p"), (void *)VAR_16));
   VAR_7->buf = VAR_16;
   for (VAR_20 = 0; VAR_20 <= VAR_7->nbuf; VAR_20++)
     {
       VAR_23 = FUNC_0(VAR_7, VAR_20);
       VAR_22 = VAR_15 + VAR_20 * (1 + VAR_11);
       for (VAR_21 = 0; VAR_21 < VAR_11; ++VAR_21)
  VAR_23[VAR_21] = VAR_22[VAR_21];
       while (VAR_21 < VAR_12)
  VAR_23[VAR_21++] = VAR_5;
       VAR_23[VAR_12] = VAR_6;
     }






   if (VAR_19 && VAR_9)
     {
       WINDOW *VAR_24 = FUNC_17(VAR_7->drows, VAR_7->dcols);

       if (VAR_24 != 0)
  {
    FUNC_13(VAR_18 != (FORM *)0);
    if (VAR_18->w)
      FUNC_14(VAR_18->w);
    VAR_18->w = VAR_24;
    FUNC_7(VAR_7, VAR_18->w);
    FUNC_19(VAR_18->w);
    FUNC_2(VAR_7, VAR_18->w);
    FUNC_18(VAR_18->w);
    FUNC_20(VAR_18->w, VAR_18->currow, VAR_18->curcol);
  }
       else
  VAR_9 = VAR_1;
     }

   if (VAR_9)
     {
       FUNC_15(VAR_15);

       if (VAR_7 != VAR_7->link)
  {
    FIELD *VAR_25;

    for (VAR_25 = VAR_7->link;
         VAR_25 != VAR_7;
         VAR_25 = VAR_25->link)
      {
        VAR_25->buf = VAR_7->buf;
        VAR_25->drows = VAR_7->drows;
        VAR_25->dcols = VAR_7->dcols;
      }
  }
     }
   else
     {

       VAR_7->dcols = VAR_13;
       VAR_7->drows = VAR_14;
       VAR_7->buf = VAR_15;
       if ((VAR_10 &&
     (VAR_7->dcols != VAR_7->maxgrow)) ||
    (!VAR_10 &&
     (VAR_7->drows != VAR_7->maxgrow)))
  FUNC_6(VAR_7, VAR_3);
       FUNC_15(VAR_16);
     }
 }
    }
  return (VAR_9);
}
