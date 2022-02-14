
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
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;

int
FUNC_9 (rtx *VAR_7, int VAR_8, int *VAR_9, int *VAR_10,
   HOST_WIDE_INT *VAR_11)
{
  int VAR_12[4];
  HOST_WIDE_INT VAR_13[4];
  int VAR_14[4];
  int VAR_15 = -1;
  int VAR_16;



  FUNC_8 (VAR_8 >= 2 && VAR_8 <= 4);





  for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
    {
      rtx VAR_17;
      rtx VAR_18;


      if (FUNC_0 (VAR_7[VAR_8 + VAR_16]) == VAR_4)
 VAR_7[VAR_8 + VAR_16] = FUNC_6 (VAR_7 + (VAR_8 + VAR_16));

      FUNC_8 (FUNC_0 (VAR_7[VAR_8 + VAR_16]) == VAR_1);



      if (FUNC_2 (VAR_7[VAR_8 + VAR_16]))
 return 0;

      VAR_18 = VAR_6;

      if ((FUNC_0 (VAR_17 = FUNC_5 (VAR_7[VAR_8 + VAR_16], 0)) == VAR_3
    || (FUNC_0 (VAR_17) == VAR_4
        && FUNC_0 (VAR_17 = FUNC_4 (VAR_17)) == VAR_3))
   || (FUNC_0 (FUNC_5 (VAR_7[VAR_8 + VAR_16], 0)) == VAR_2
       && ((FUNC_0 (VAR_17 = FUNC_5 (FUNC_5 (VAR_7[VAR_8 + VAR_16], 0), 0))
     == VAR_3)
    || (FUNC_0 (VAR_17) == VAR_4
        && FUNC_0 (VAR_17 = FUNC_4 (VAR_17)) == VAR_3))
       && (FUNC_0 (VAR_18 = FUNC_5 (FUNC_5 (VAR_7[VAR_8 + VAR_16], 0), 1))
    == VAR_0)))
 {
   if (VAR_16 == 0)
     {
       VAR_15 = FUNC_3 (VAR_17);
       VAR_12[0] = (FUNC_0 (VAR_7[VAR_16]) == VAR_3
      ? FUNC_3 (VAR_7[VAR_16])
      : FUNC_3 (FUNC_4 (VAR_7[VAR_16])));
       VAR_14[0] = 0;
     }
   else
     {
       if (VAR_15 != (int) FUNC_3 (VAR_17))

  return 0;

       VAR_12[VAR_16] = (FUNC_0 (VAR_7[VAR_16]) == VAR_3
      ? FUNC_3 (VAR_7[VAR_16])
      : FUNC_3 (FUNC_4 (VAR_7[VAR_16])));
       if (VAR_12[VAR_16] < VAR_12[VAR_14[0]])
  VAR_14[0] = VAR_16;
     }




   if (VAR_12[VAR_16] < 0 || VAR_12[VAR_16] > 14
       || (VAR_16 != VAR_8 - 1 && VAR_12[VAR_16] == VAR_15))
     return 0;

   VAR_13[VAR_16] = FUNC_1 (VAR_18);
 }
      else

 return 0;
    }







  for (VAR_16 = 1; VAR_16 < VAR_8; VAR_16++)
    {
      int VAR_19;

      VAR_14[VAR_16] = VAR_14[VAR_16 - 1];
      for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++)
 if (VAR_12[VAR_19] > VAR_12[VAR_14[VAR_16 - 1]]
     && (VAR_14[VAR_16] == VAR_14[VAR_16 - 1]
  || VAR_12[VAR_19] < VAR_12[VAR_14[VAR_16]]))
   VAR_14[VAR_16] = VAR_19;



      if (VAR_14[VAR_16] == VAR_14[VAR_16 - 1])
 return 0;


      if (VAR_13[VAR_14[VAR_16]] != VAR_13[VAR_14[VAR_16 - 1]] + 4)
 return 0;
    }

  if (VAR_10)
    {
      *VAR_10 = VAR_15;

      for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
 VAR_9[VAR_16] = VAR_12[VAR_14[VAR_16]];

      *VAR_11 = VAR_13[VAR_14[0]];
    }

  if (VAR_13[VAR_14[0]] == 0)
    return 1;

  if (VAR_13[VAR_14[0]] == 4)
    return 2;

  if (VAR_13[VAR_14[VAR_8 - 1]] == 0)
    return 3;

  if (VAR_13[VAR_14[VAR_8 - 1]] == -4)
    return 4;
  if (VAR_8 == 2 && VAR_5)
    return 0;



  return (FUNC_7 (VAR_13[VAR_14[0]])
   || FUNC_7 (-VAR_13[VAR_14[0]])) ? 5 : 0;
}
