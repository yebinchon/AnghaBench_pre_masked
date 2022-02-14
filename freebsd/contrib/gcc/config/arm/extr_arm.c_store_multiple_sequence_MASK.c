
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int) ;

int
FUNC_8 (rtx *VAR_6, int VAR_7, int *VAR_8, int *VAR_9,
    HOST_WIDE_INT * VAR_10)
{
  int VAR_11[4];
  HOST_WIDE_INT VAR_12[4];
  int VAR_13[4];
  int VAR_14 = -1;
  int VAR_15;



  FUNC_7 (VAR_7 >= 2 && VAR_7 <= 4);





  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
    {
      rtx VAR_16;
      rtx VAR_17;


      if (FUNC_0 (VAR_6[VAR_7 + VAR_15]) == VAR_4)
 VAR_6[VAR_7 + VAR_15] = FUNC_6 (VAR_6 + (VAR_7 + VAR_15));

      FUNC_7 (FUNC_0 (VAR_6[VAR_7 + VAR_15]) == VAR_1);



      if (FUNC_2 (VAR_6[VAR_7 + VAR_15]))
 return 0;

      VAR_17 = VAR_5;

      if ((FUNC_0 (VAR_16 = FUNC_5 (VAR_6[VAR_7 + VAR_15], 0)) == VAR_3
    || (FUNC_0 (VAR_16) == VAR_4
        && FUNC_0 (VAR_16 = FUNC_4 (VAR_16)) == VAR_3))
   || (FUNC_0 (FUNC_5 (VAR_6[VAR_7 + VAR_15], 0)) == VAR_2
       && ((FUNC_0 (VAR_16 = FUNC_5 (FUNC_5 (VAR_6[VAR_7 + VAR_15], 0), 0))
     == VAR_3)
    || (FUNC_0 (VAR_16) == VAR_4
        && FUNC_0 (VAR_16 = FUNC_4 (VAR_16)) == VAR_3))
       && (FUNC_0 (VAR_17 = FUNC_5 (FUNC_5 (VAR_6[VAR_7 + VAR_15], 0), 1))
    == VAR_0)))
 {
   if (VAR_15 == 0)
     {
       VAR_14 = FUNC_3 (VAR_16);
       VAR_11[0] = (FUNC_0 (VAR_6[VAR_15]) == VAR_3
      ? FUNC_3 (VAR_6[VAR_15])
      : FUNC_3 (FUNC_4 (VAR_6[VAR_15])));
       VAR_13[0] = 0;
     }
   else
     {
       if (VAR_14 != (int) FUNC_3 (VAR_16))

  return 0;

       VAR_11[VAR_15] = (FUNC_0 (VAR_6[VAR_15]) == VAR_3
      ? FUNC_3 (VAR_6[VAR_15])
      : FUNC_3 (FUNC_4 (VAR_6[VAR_15])));
       if (VAR_11[VAR_15] < VAR_11[VAR_13[0]])
  VAR_13[0] = VAR_15;
     }


   if (VAR_11[VAR_15] < 0 || VAR_11[VAR_15] > 14)
     return 0;

   VAR_12[VAR_15] = FUNC_1 (VAR_17);
 }
      else

 return 0;
    }







  for (VAR_15 = 1; VAR_15 < VAR_7; VAR_15++)
    {
      int VAR_18;

      VAR_13[VAR_15] = VAR_13[VAR_15 - 1];
      for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++)
 if (VAR_11[VAR_18] > VAR_11[VAR_13[VAR_15 - 1]]
     && (VAR_13[VAR_15] == VAR_13[VAR_15 - 1]
  || VAR_11[VAR_18] < VAR_11[VAR_13[VAR_15]]))
   VAR_13[VAR_15] = VAR_18;



      if (VAR_13[VAR_15] == VAR_13[VAR_15 - 1])
 return 0;


      if (VAR_12[VAR_13[VAR_15]] != VAR_12[VAR_13[VAR_15 - 1]] + 4)
 return 0;
    }

  if (VAR_9)
    {
      *VAR_9 = VAR_14;

      for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
 VAR_8[VAR_15] = VAR_11[VAR_13[VAR_15]];

      *VAR_10 = VAR_12[VAR_13[0]];
    }

  if (VAR_12[VAR_13[0]] == 0)
    return 1;

  if (VAR_12[VAR_13[0]] == 4)
    return 2;

  if (VAR_12[VAR_13[VAR_7 - 1]] == 0)
    return 3;

  if (VAR_12[VAR_13[VAR_7 - 1]] == -4)
    return 4;

  return 0;
}
