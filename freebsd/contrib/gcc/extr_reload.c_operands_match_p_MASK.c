
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef scalar_t__ RTX_CODE ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (size_t) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (size_t) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int,int) ;
 int FUNC_14 (scalar_t__,int) ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 () ;
 int** VAR_11 ;
 scalar_t__ FUNC_17 (int,size_t,int ,size_t) ;

int
FUNC_18 (rtx VAR_12, rtx VAR_13)
{
  int VAR_14;
  RTX_CODE VAR_15 = FUNC_0 (VAR_12);
  const char *VAR_16;
  int VAR_17;

  if (VAR_12 == VAR_13)
    return 1;
  if ((VAR_15 == VAR_7 || (VAR_15 == VAR_8 && FUNC_6 (FUNC_9 (VAR_12))))
      && (FUNC_6 (VAR_13) || (FUNC_0 (VAR_13) == VAR_8
      && FUNC_6 (FUNC_9 (VAR_13)))))
    {
      int VAR_18;

      if (VAR_15 == VAR_8)
 {
   VAR_14 = FUNC_5 (FUNC_9 (VAR_12));
   if (VAR_14 >= VAR_0)
     goto slow;
   VAR_14 += FUNC_17 (FUNC_5 (FUNC_9 (VAR_12)),
        FUNC_1 (FUNC_9 (VAR_12)),
        FUNC_8 (VAR_12),
        FUNC_1 (VAR_12));
 }
      else
 VAR_14 = FUNC_5 (VAR_12);

      if (FUNC_0 (VAR_13) == VAR_8)
 {
   VAR_18 = FUNC_5 (FUNC_9 (VAR_13));
   if (VAR_18 >= VAR_0)
     goto slow;
   VAR_18 += FUNC_17 (FUNC_5 (FUNC_9 (VAR_13)),
        FUNC_1 (FUNC_9 (VAR_13)),
        FUNC_8 (VAR_13),
        FUNC_1 (VAR_13));
 }
      else
 VAR_18 = FUNC_5 (VAR_13);





      if (VAR_10 && FUNC_2 (FUNC_1 (VAR_12)) > VAR_9
   && FUNC_7 (FUNC_1 (VAR_12))
   && VAR_14 < VAR_0)
 VAR_14 += VAR_11[VAR_14][FUNC_1 (VAR_12)] - 1;
      if (VAR_10 && FUNC_2 (FUNC_1 (VAR_13)) > VAR_9
   && FUNC_7 (FUNC_1 (VAR_13))
   && VAR_18 < VAR_0)
 VAR_18 += VAR_11[VAR_18][FUNC_1 (VAR_13)] - 1;

      return VAR_14 == VAR_18;
    }





  if (VAR_15 == VAR_1 || VAR_15 == VAR_2 || VAR_15 == VAR_3)
    return FUNC_18 (FUNC_10 (VAR_12, 0), VAR_13);






  if (FUNC_0 (VAR_13) == VAR_4 || FUNC_0 (VAR_13) == VAR_5
      || FUNC_0 (VAR_13) == VAR_6)
    return FUNC_18 (VAR_12, FUNC_10 (VAR_13, 0)) ? 2 : 0;

 slow:



  if (VAR_15 != FUNC_0 (VAR_13))
    return 0;


  if (FUNC_1 (VAR_12) != FUNC_1 (VAR_13))
    return 0;

  switch (VAR_15)
    {
    case 130:
    case 131:
      return 0;

    case 129:
      return FUNC_10 (VAR_12, 0) == FUNC_10 (VAR_13, 0);
    case 128:
      return FUNC_12 (VAR_12, 0) == FUNC_12 (VAR_13, 0);

    default:
      break;
    }




  VAR_17 = 0;
  VAR_16 = FUNC_3 (VAR_15);
  for (VAR_14 = FUNC_4 (VAR_15) - 1; VAR_14 >= 0; VAR_14--)
    {
      int VAR_19, VAR_20;
      switch (VAR_16[VAR_14])
 {
 case 'w':
   if (FUNC_15 (VAR_12, VAR_14) != FUNC_15 (VAR_13, VAR_14))
     return 0;
   break;

 case 'i':
   if (FUNC_11 (VAR_12, VAR_14) != FUNC_11 (VAR_13, VAR_14))
     return 0;
   break;

 case 'e':
   VAR_19 = FUNC_18 (FUNC_10 (VAR_12, VAR_14), FUNC_10 (VAR_13, VAR_14));
   if (VAR_19 == 0)
     return 0;


   if (VAR_19 == 2)
     VAR_17 = 1;
   break;

 case '0':
   break;

 case 'E':
   if (FUNC_14 (VAR_12, VAR_14) != FUNC_14 (VAR_13, VAR_14))
     return 0;
   for (VAR_20 = FUNC_14 (VAR_12, VAR_14) - 1; VAR_20 >= 0; --VAR_20)
     {
       VAR_19 = FUNC_18 (FUNC_13 (VAR_12, VAR_14, VAR_20), FUNC_13 (VAR_13, VAR_14, VAR_20));
       if (VAR_19 == 0)
  return 0;
       if (VAR_19 == 2)
  VAR_17 = 1;
     }
   break;




 default:
   FUNC_16 ();
 }
    }
  return 1 + VAR_17;
}
