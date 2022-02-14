
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int drows; int dcols; scalar_t__ opts; } ;
struct TYPE_13__ {int currow; int curcol; int w; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef int FIELD_CELL ;
typedef TYPE_2__ FIELD ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int,int *,int) ;
 unsigned int VAR_3 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;

__attribute__((used)) static int
FUNC_11(FORM *VAR_4)
{
  FIELD *VAR_5 = VAR_4->current;
  int VAR_6 = VAR_1;
  bool VAR_7 = ((VAR_5->drows - 1) == VAR_4->currow);

  if (((unsigned)VAR_5->opts & VAR_3) &&
      (!FUNC_6(VAR_5)) &&
      (FUNC_7(VAR_4)) &&
      (!VAR_7 || FUNC_4(VAR_5)))
    {
      FIELD_CELL *VAR_8;
      FIELD_CELL *VAR_9;
      int VAR_10;
      int VAR_11;

      if (VAR_7)
 {


   if (!FUNC_3(VAR_5, 1))
     return VAR_2;
 }
      VAR_8 = FUNC_0(VAR_4);
      FUNC_8(VAR_4, VAR_5);
      VAR_9 = FUNC_1(VAR_8, VAR_5->dcols);


      VAR_11 = (int)(VAR_9 - VAR_8);
      VAR_10 = VAR_5->dcols - VAR_11;
      if (VAR_11 > 0)
 {
   if ((VAR_6 = FUNC_5(VAR_4, VAR_4->currow + 1, VAR_9,
          VAR_10)) == VAR_0)
     {
       FUNC_10(VAR_4->w, VAR_4->currow, VAR_11);
       FUNC_9(VAR_4->w);
       if (VAR_4->curcol >= VAR_11)
  {
    VAR_4->currow++;
    VAR_4->curcol -= VAR_11;
  }
       return VAR_0;
     }
 }
      else
 return VAR_0;
      if (VAR_6 != VAR_0)
 {
   FUNC_2(VAR_4);
   FUNC_8(VAR_4, VAR_5);
   VAR_6 = VAR_1;
 }
    }
  else
    VAR_6 = VAR_0;
  return (VAR_6);
}
