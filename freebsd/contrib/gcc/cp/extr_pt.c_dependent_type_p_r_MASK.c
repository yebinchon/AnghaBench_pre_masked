
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_21 (tree VAR_11)
{
  tree VAR_12;
  if (FUNC_5 (VAR_11) == VAR_8
      || FUNC_5 (VAR_11) == VAR_7)
    return 1;



  if (FUNC_5 (VAR_11) == VAR_9)
    return 1;


  VAR_11 = FUNC_11 (VAR_11);

  if (FUNC_16 (VAR_11))
    return (FUNC_18 (FUNC_14 (VAR_11))
     || FUNC_18 (FUNC_15
        (VAR_11)));
  else if (FUNC_5 (VAR_11) == VAR_5
    || FUNC_5 (VAR_11) == VAR_6)
    return FUNC_18 (FUNC_6 (VAR_11));
  else if (FUNC_5 (VAR_11) == VAR_3
    || FUNC_5 (VAR_11) == VAR_4)
    {
      tree VAR_13;

      if (FUNC_18 (FUNC_6 (VAR_11)))
 return 1;
      for (VAR_13 = FUNC_8 (VAR_11);
    VAR_13;
    VAR_13 = FUNC_4 (VAR_13))
 if (FUNC_18 (FUNC_7 (VAR_13)))
   return 1;
      return 0;
    }



  if (FUNC_5 (VAR_11) == VAR_0)
    {
      if (FUNC_10 (VAR_11)
   && ((FUNC_20
        (FUNC_12 (FUNC_10 (VAR_11))))
       || (FUNC_19
    (FUNC_12 (FUNC_10 (VAR_11))))))
 return 1;
      return FUNC_18 (FUNC_6 (VAR_11));
    }



  if (FUNC_5 (VAR_11) == VAR_1)
    return 1;


  else if (FUNC_2 (VAR_11) && FUNC_0 (VAR_11)
    && (FUNC_17
        (FUNC_3 (FUNC_1 (VAR_11)))))
    return 1;




  if (FUNC_5 (VAR_11) == VAR_10)
    return 1;
  VAR_12 = FUNC_9 (VAR_11);
  if (VAR_12 && FUNC_13 (VAR_12))
    return FUNC_18 (VAR_12);
  else if (VAR_12 && FUNC_5 (VAR_12) == VAR_2)
    return FUNC_19 (VAR_12);


  return 0;
}
