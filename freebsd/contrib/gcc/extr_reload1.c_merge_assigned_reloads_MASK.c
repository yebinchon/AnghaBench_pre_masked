
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {scalar_t__ in; scalar_t__ when_needed; scalar_t__ out; scalar_t__ reg_rtx; int opnum; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int* VAR_10 ;
 TYPE_1__* VAR_11 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void
FUNC_6 (rtx VAR_12)
{
  int VAR_13, VAR_14;





  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
    {
      int VAR_15 = 0;
      int VAR_16 = -1;
      int VAR_17 = VAR_0;

      if (VAR_11[VAR_13].in == 0 || VAR_11[VAR_13].when_needed == VAR_8
   || VAR_11[VAR_13].out != 0 || VAR_11[VAR_13].reg_rtx == 0
   || FUNC_3 (VAR_11[VAR_13].reg_rtx, VAR_12))
 continue;







      for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
 {
   if (VAR_13 == VAR_14 || VAR_11[VAR_14].reg_rtx == 0
       || ! FUNC_2 (VAR_11[VAR_14].reg_rtx,
         VAR_11[VAR_13].reg_rtx))
     continue;

   if (VAR_11[VAR_14].when_needed == VAR_3
       && VAR_11[VAR_14].opnum > VAR_16)
     VAR_16 = VAR_11[VAR_14].opnum;






   if (! FUNC_4 (VAR_11[VAR_13].reg_rtx, VAR_11[VAR_14].reg_rtx)
       || VAR_11[VAR_14].out != 0 || VAR_11[VAR_14].in == 0
       || ! FUNC_4 (VAR_11[VAR_13].in, VAR_11[VAR_14].in))
     {
       if (VAR_11[VAR_14].when_needed != VAR_2
    || ((VAR_11[VAR_13].when_needed != VAR_3
         || VAR_11[VAR_13].opnum > VAR_11[VAR_14].opnum)
        && VAR_11[VAR_13].when_needed != VAR_5))
  break;
       VAR_15 = 1;
       if (VAR_17 > VAR_11[VAR_14].opnum)
  VAR_17 = VAR_11[VAR_14].opnum;
     }
 }




      if (VAR_14 == VAR_9
   && VAR_16 <= VAR_17)
 {
   FUNC_0 (VAR_11[VAR_13].when_needed != VAR_6);

   for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
     if (VAR_13 != VAR_14 && VAR_11[VAR_14].reg_rtx != 0
  && FUNC_4 (VAR_11[VAR_13].reg_rtx, VAR_11[VAR_14].reg_rtx)
  && (! VAR_15
      || VAR_11[VAR_14].when_needed == VAR_3
      || VAR_11[VAR_14].when_needed == VAR_5))
       {
  VAR_11[VAR_13].when_needed = VAR_8;
  VAR_11[VAR_14].in = 0;
  VAR_10[VAR_14] = -1;
  FUNC_5 (VAR_13, VAR_14);
       }
   if (VAR_11[VAR_13].when_needed == VAR_8)
     for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
       if (VAR_11[VAR_14].in != 0
    && VAR_11[VAR_14].when_needed != VAR_8
    && VAR_11[VAR_14].when_needed != VAR_5
    && VAR_11[VAR_14].when_needed != VAR_7
    && VAR_11[VAR_14].when_needed != VAR_4
    && (! VAR_15
        || VAR_11[VAR_14].when_needed == VAR_3
        || VAR_11[VAR_14].when_needed == VAR_1)
    && FUNC_1 (VAR_11[VAR_14].in,
        VAR_11[VAR_13].in))
  {
    int VAR_18;

    VAR_11[VAR_14].when_needed
      = ((VAR_11[VAR_14].when_needed == VAR_3
   || VAR_11[VAR_14].when_needed == VAR_1)
         ? VAR_5 : VAR_8);





    if (VAR_11[VAR_14].reg_rtx)
      for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++)
        FUNC_0 (VAR_11[VAR_18].in == 0 || VAR_11[VAR_18].reg_rtx == 0
      || VAR_11[VAR_18].when_needed != VAR_11[VAR_14].when_needed
      || !FUNC_4 (VAR_11[VAR_18].reg_rtx,
         VAR_11[VAR_14].reg_rtx)
      || FUNC_4 (VAR_11[VAR_18].in,
        VAR_11[VAR_14].in));
  }
 }
    }
}
