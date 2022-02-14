
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int chtype ;
struct TYPE_14__ {int drows; int dcols; scalar_t__ opts; } ;
struct TYPE_13__ {int status; int currow; int curcol; int w; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef TYPE_2__ FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int ) ;
 int VAR_11 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int
FUNC_17(FORM *VAR_12, int VAR_13)
{
  FIELD *VAR_14 = VAR_12->current;
  int VAR_15 = VAR_1;

  FUNC_9((FUNC_10("Data_Entry(%p,%s)"), (void )VAR_12, FUNC_13((chtype)VAR_13)));
  if (((unsigned)VAR_14->opts & VAR_7)



    )
    {
      if (((unsigned)VAR_14->opts & VAR_6) &&
   FUNC_1(VAR_12) &&
   !(VAR_12->status & VAR_8) &&
   !(VAR_12->status & VAR_10))
 FUNC_15(VAR_12->w);

      if (VAR_12->status & VAR_9)
 {
   FUNC_14(VAR_12->w, (chtype)VAR_13);
 }
      else

 {
   bool VAR_16 = FUNC_5(VAR_12);

   if (!(VAR_16 ||
  ((FUNC_8(VAR_14) && FUNC_2(VAR_14)))))
     FUNC_6(VAR_1);

   if (!VAR_16 && !FUNC_0(VAR_14, 1))
     FUNC_6(VAR_2);

   FUNC_16(VAR_12->w, (chtype)VAR_13);
 }

      if ((VAR_15 = FUNC_12(VAR_12)) == VAR_0)
 {
   bool VAR_17 = (((VAR_14->drows - 1) == VAR_12->currow) &&
          ((VAR_14->dcols - 1) == VAR_12->curcol));

   FUNC_7(VAR_12, VAR_10);
   if (VAR_17 && !FUNC_2(VAR_14) && ((unsigned)VAR_14->opts & VAR_5))
     VAR_15 = FUNC_4(VAR_3, VAR_12);
   else
     {
       if (VAR_17 && FUNC_2(VAR_14) && !FUNC_0(VAR_14, 1))
  VAR_15 = VAR_2;
       else
  {
    FUNC_3(VAR_12);

    VAR_15 = VAR_0;
  }
     }
 }
    }
  FUNC_6(VAR_15);
}
