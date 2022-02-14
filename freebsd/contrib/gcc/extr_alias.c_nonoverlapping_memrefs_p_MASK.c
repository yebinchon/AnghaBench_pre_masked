
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ rtx ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,int) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_20 (scalar_t__,int) ;
 scalar_t__ FUNC_21 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_23 (scalar_t__,int ) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__) ;
 int FUNC_25 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_26 (rtx VAR_6, rtx VAR_7)
{
  tree VAR_8 = FUNC_9 (VAR_6), VAR_9 = FUNC_9 (VAR_7);
  rtx VAR_10, VAR_11;
  rtx VAR_12, VAR_13;
  rtx VAR_14, VAR_15;
  HOST_WIDE_INT VAR_16 = 0, VAR_17 = 0, VAR_18, VAR_19, VAR_20;


  if (VAR_8 == 0 || VAR_9 == 0)
    return 0;


  if (FUNC_17 (VAR_8) == VAR_0
      && FUNC_17 (VAR_9) == VAR_0
      && FUNC_24 (VAR_8, VAR_9))
    return 1;



  VAR_14 = FUNC_10 (VAR_6);
  if (FUNC_17 (VAR_8) == VAR_0)
    {
      if (FUNC_17 (VAR_9) == VAR_4
   && FUNC_13 (FUNC_19 (VAR_9)))
 {
  tree VAR_21 = FUNC_18 (VAR_8, 1);
  tree VAR_22 = FUNC_1 (VAR_21);
  if (FUNC_23 (VAR_22,
             FUNC_19 (VAR_21)))
    return 1;
 }
      {
 tree VAR_23 = FUNC_22 (VAR_8);
 if (! VAR_23)
   return 0;
 VAR_14 = FUNC_21 (VAR_8, VAR_14);
 VAR_8 = VAR_23;
      }
    }
  else if (FUNC_7 (VAR_8))
    {
      VAR_8 = FUNC_18 (VAR_8, 0);
      if (VAR_5 < 2
   || FUNC_17 (VAR_8) != VAR_2)
 return 0;
    }

  VAR_15 = FUNC_10 (VAR_7);
  if (FUNC_17 (VAR_9) == VAR_0)
    {
      if (FUNC_17 (VAR_8) == VAR_4
   && FUNC_13 (FUNC_19 (VAR_8)))
 {
  tree VAR_24 = FUNC_18 (VAR_9, 1);
  tree VAR_25 = FUNC_1 (VAR_24);
  if (FUNC_23 (VAR_25,
             FUNC_19 (VAR_24)))
    return 1;
 }
      {
 tree VAR_26 = FUNC_22 (VAR_9);
 if (! VAR_26)
   return 0;
 VAR_15 = FUNC_21 (VAR_9, VAR_15);
 VAR_9 = VAR_26;
      }
    }
  else if (FUNC_7 (VAR_9))
    {
      VAR_9 = FUNC_18 (VAR_9, 0);
      if (VAR_5 < 2
   || FUNC_17 (VAR_9) != VAR_2)
 return 0;
    }

  if (! FUNC_2 (VAR_8) || ! FUNC_2 (VAR_9))
    return 0;

  VAR_10 = FUNC_3 (VAR_8);
  VAR_11 = FUNC_3 (VAR_9);




  if ((!FUNC_11 (VAR_10) || !FUNC_11 (VAR_11))
      && ! FUNC_25 (VAR_10, VAR_11))
    return 1;





  VAR_12 = FUNC_11 (VAR_10) ? FUNC_20 (VAR_10, 0) : VAR_10;
  if (FUNC_4 (VAR_12) == VAR_3 && FUNC_4 (FUNC_20 (VAR_12, 1)) == VAR_1)
    VAR_16 = FUNC_8 (FUNC_20 (VAR_12, 1)), VAR_12 = FUNC_20 (VAR_12, 0);

  VAR_13 = FUNC_11 (VAR_11) ? FUNC_20 (VAR_11, 0) : VAR_11;
  if (FUNC_4 (VAR_13) == VAR_3 && FUNC_4 (FUNC_20 (VAR_13, 1)) == VAR_1)
    VAR_17 = FUNC_8 (FUNC_20 (VAR_13, 1)), VAR_13 = FUNC_20 (VAR_13, 0);





  if (! FUNC_25 (VAR_12, VAR_13))
    return ((FUNC_0 (VAR_12) && FUNC_0 (VAR_13))
     || (FUNC_0 (VAR_12) && FUNC_16 (VAR_13)
  && FUNC_15 (FUNC_14 (VAR_13)))
     || (FUNC_0 (VAR_13) && FUNC_16 (VAR_12)
  && FUNC_15 (FUNC_14 (VAR_12))));

  VAR_18 = (!FUNC_11 (VAR_10) ? (int) FUNC_6 (FUNC_5 (VAR_10))
    : FUNC_12 (VAR_10) ? FUNC_8 (FUNC_12 (VAR_10))
    : -1);
  VAR_19 = (!FUNC_11 (VAR_11) ? (int) FUNC_6 (FUNC_5 (VAR_11))
    : FUNC_12 (VAR_11) ? FUNC_8 (FUNC_12 (VAR_11)) :
    -1);



  if (VAR_14)
    VAR_16 += FUNC_8 (VAR_14), VAR_18 -= FUNC_8 (VAR_14);
  if (VAR_15)
    VAR_17 += FUNC_8 (VAR_15), VAR_19 -= FUNC_8 (VAR_15);




  if (FUNC_12 (VAR_6) && VAR_14)
    VAR_18 = FUNC_8 (FUNC_12 (VAR_6));
  if (FUNC_12 (VAR_7) && VAR_15)
    VAR_19 = FUNC_8 (FUNC_12 (VAR_7));


  if (VAR_16 > VAR_17)
    {
      VAR_20 = VAR_16, VAR_16 = VAR_17, VAR_17 = VAR_20;
      VAR_20 = VAR_18, VAR_18 = VAR_19, VAR_19 = VAR_20;
    }



  return VAR_18 >= 0 && VAR_17 >= VAR_16 + VAR_18;
}
