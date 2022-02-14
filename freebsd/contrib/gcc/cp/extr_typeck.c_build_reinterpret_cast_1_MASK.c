
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_21 (int ,int) ;
 int FUNC_22 (scalar_t__,scalar_t__,int (*) (char*,scalar_t__,scalar_t__),char*) ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__) ;
 int FUNC_25 (scalar_t__,scalar_t__) ;
 int FUNC_26 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 int FUNC_29 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_30 (scalar_t__) ;
 scalar_t__ FUNC_31 (int ) ;
 scalar_t__ FUNC_32 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_33 (char*,scalar_t__,scalar_t__) ;
 int FUNC_34 (scalar_t__) ;
 int FUNC_35 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_36 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_37 (int ,char*,...) ;

__attribute__((used)) static tree
FUNC_38 (tree VAR_17, tree VAR_18, bool VAR_19,
     bool *VAR_20)
{
  tree VAR_21;


  if (VAR_20)
    *VAR_20 = 1;

  if (VAR_17 == VAR_13 || FUNC_30 (VAR_18))
    return VAR_13;

  VAR_21 = FUNC_7 (VAR_18);


  FUNC_36 (VAR_17);






  if (FUNC_5 (VAR_17) == VAR_10)
    {
      if (! FUNC_34 (VAR_18))
 {
   FUNC_29 ("invalid cast of an rvalue expression of type "
   "%qT to type %qT",
   VAR_21, VAR_17);
   return VAR_13;
 }




      if (FUNC_14 (VAR_21)
   && (FUNC_23 (FUNC_7 (VAR_21), FUNC_7 (VAR_17),
    VAR_2 | VAR_3)))
 FUNC_37 (0, "casting %qT to %qT does not dereference pointer",
   VAR_21, VAR_17);

      VAR_18 = FUNC_20 (VAR_0, VAR_18, 0);
      if (VAR_18 != VAR_13)
 VAR_18 = FUNC_38
   (FUNC_19 (FUNC_7 (VAR_17)), VAR_18, VAR_19,
    VAR_20);
      if (VAR_18 != VAR_13)
 VAR_18 = FUNC_17 (VAR_18, 0);
      return VAR_18;
    }






  if ((FUNC_11 (VAR_21)
       || FUNC_5 (VAR_21) == VAR_6)
      && FUNC_14 (VAR_17)
      && (FUNC_5 (FUNC_7 (VAR_17)) == VAR_4
   || FUNC_16 (FUNC_7 (VAR_17))))
    return FUNC_24 (VAR_17, VAR_18);




  VAR_18 = FUNC_28 (VAR_18);



  if (FUNC_5 (VAR_18) == VAR_7
      && FUNC_7 (VAR_18) == FUNC_7 (FUNC_6 (VAR_18, 0)))
    VAR_18 = FUNC_6 (VAR_18, 0);

  if (FUNC_30 (VAR_18))
    return VAR_13;

  VAR_21 = FUNC_7 (VAR_18);




  if (FUNC_1 (VAR_17) && FUNC_14 (VAR_21))
    {
      if (FUNC_9 (VAR_17) < FUNC_9 (VAR_21))
 FUNC_33 ("cast from %qT to %qT loses precision",
   VAR_21, VAR_17);
    }



  else if (FUNC_14 (VAR_17) && FUNC_2 (VAR_21))

    ;

  else if (FUNC_5 (VAR_17) == VAR_5 && FUNC_5 (VAR_21) == VAR_1)
    {
      if (FUNC_9 (VAR_17) < FUNC_9 (VAR_21))
 FUNC_33 ("cast from %qT to %qT loses precision",
   VAR_21, VAR_17);
    }
  else if (FUNC_5 (VAR_17) == VAR_1 && FUNC_5 (VAR_21) == VAR_5)

    ;
  else if (FUNC_5 (VAR_17) == VAR_1 && FUNC_5 (VAR_21) == VAR_1)

    ;
  else if (FUNC_5 (VAR_21) == VAR_1
    && (FUNC_32 (VAR_17)
        || (FUNC_5 (VAR_17) == VAR_9 && FUNC_16 (FUNC_7 (VAR_17)))))

    ;
  else if (FUNC_5 (VAR_17) == VAR_1
    && FUNC_5 (VAR_21) == VAR_9
    && (FUNC_32 (VAR_21) || FUNC_16 (FUNC_7 (VAR_21))))

    ;

  else if ((FUNC_10 (VAR_17) && FUNC_10 (VAR_21))
    || (FUNC_11 (VAR_17) && FUNC_11 (VAR_21)))
    return FUNC_31 (FUNC_18 (VAR_17, VAR_18));
  else if ((FUNC_12 (VAR_17) && FUNC_12 (VAR_21))
    || (FUNC_13 (VAR_17) && FUNC_13 (VAR_21)))
    {
      tree VAR_22 = VAR_18;

      if (!VAR_19)
 FUNC_22 (VAR_21, VAR_17, FUNC_29,
       "reinterpret_cast");

      if (VAR_11 && VAR_15
   && !FUNC_16 (VAR_17)
   && FUNC_5 (FUNC_7 (VAR_21)) != VAR_4
   && FUNC_0 (FUNC_7 (VAR_17))
   && FUNC_0 (FUNC_7 (VAR_21))
   && FUNC_8 (FUNC_7 (VAR_17)) > FUNC_8 (FUNC_7 (VAR_21)))
 FUNC_37 (0, "cast from %qT to %qT increases required alignment of "
   "target type",
   VAR_21, VAR_17);



      FUNC_4 (VAR_22);
      if (VAR_16 <= 2)
 FUNC_35 (VAR_21, VAR_17, VAR_22);

      return FUNC_31 (FUNC_18 (VAR_17, VAR_18));
    }
  else if ((FUNC_10 (VAR_17) && FUNC_13 (VAR_21))
    || (FUNC_10 (VAR_21) && FUNC_13 (VAR_17)))
    {
      if (VAR_14)




 FUNC_37 (0, "ISO C++ forbids casting between pointer-to-function and pointer-to-object");
      return FUNC_31 (FUNC_18 (VAR_17, VAR_18));
    }
  else if (FUNC_5 (VAR_17) == VAR_12)
    return FUNC_31 (FUNC_26 (VAR_17, VAR_18));
  else if (FUNC_5 (VAR_21) == VAR_12 && FUNC_3 (VAR_17))
    return FUNC_31 (FUNC_25 (VAR_17, VAR_18));
  else
    {
      if (VAR_20)
 *VAR_20 = 0;
      FUNC_29 ("invalid cast from type %qT to type %qT", VAR_21, VAR_17);
      return VAR_13;
    }


  if (FUNC_5 (VAR_17) == VAR_5
      && FUNC_5 (VAR_21) == VAR_9
      && FUNC_9 (VAR_17) > FUNC_9 (VAR_21)
      && FUNC_15 (VAR_17))
    VAR_18 = FUNC_27 (FUNC_21 (VAR_8, 1), VAR_18);


  return FUNC_27 (VAR_17, VAR_18);
}
