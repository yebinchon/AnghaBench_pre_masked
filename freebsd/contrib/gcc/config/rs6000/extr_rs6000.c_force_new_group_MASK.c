
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,char*,int,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8 (int VAR_4, FILE *VAR_5, rtx *VAR_6,
   rtx VAR_7, bool *VAR_8, int VAR_9,
   int *VAR_10)
{
  rtx VAR_11;
  bool VAR_12;
  int VAR_13 = FUNC_7 ();
  bool VAR_14 = *VAR_8;
  int VAR_15;

  if (VAR_7 == VAR_0)
    return VAR_9;

  if (VAR_2 > VAR_3)
    return VAR_9;

  VAR_12 = FUNC_5 (VAR_6, VAR_7);
  if (!VAR_12)
    return VAR_9;

  if (VAR_4 > 6)
    FUNC_1 (VAR_5,"force: group count = %d, can_issue_more = %d\n",
      *VAR_10 ,VAR_9);

  if (VAR_2 == VAR_3)
    {
      if (*VAR_8)
 VAR_9 = 0;






      if (VAR_9 && !FUNC_4 (VAR_7))
 VAR_9--;

      while (VAR_9 > 0)
 {
   VAR_11 = FUNC_2 ();
   FUNC_0 (VAR_11, VAR_7);
   VAR_9--;
 }

      *VAR_8 = 1;
      return 0;
    }

  if (VAR_2 < VAR_3)
    {
      int VAR_16 = VAR_2;



      if (VAR_9 == 0)
 VAR_9 = VAR_13;
      VAR_9--;
      if (VAR_9 == 0)
 {
   VAR_9 = VAR_13 - 1;
   (*VAR_10)++;
   VAR_14 = 1;
   for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
     {
       VAR_6[VAR_15] = 0;
     }
 }

      while (VAR_16 > 0)
 {
   VAR_11 = FUNC_2 ();
   FUNC_0 (VAR_11, VAR_7);
   if (VAR_9 == VAR_13 - 1)
     VAR_14 = 0;
   VAR_9--;
   if (VAR_9 == 0)
     {
       VAR_9 = VAR_13 - 1;
       (*VAR_10)++;
       VAR_14 = 1;
       for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
  {
    VAR_6[VAR_15] = 0;
  }
     }
   VAR_16--;
 }


      VAR_9++;


      *VAR_8
 = (VAR_14
    || (VAR_9 == 1 && !FUNC_4 (VAR_7))
    || (VAR_9 <= 2 && FUNC_6 (VAR_7))
    || (VAR_9 < VAR_13 &&
        FUNC_3 (VAR_7, VAR_1)));
      if (*VAR_8 && VAR_14)
 (*VAR_10)--;

      if (VAR_4 > 6)
 FUNC_1 (VAR_5, "done force: group count = %d, can_issue_more = %d\n",
   *VAR_10, VAR_9);
      return VAR_9;
    }

  return VAR_9;
}
