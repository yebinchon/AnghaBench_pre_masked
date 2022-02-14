
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,scalar_t__,int,char*,int ,int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int ) ;
 int FUNC_14 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_21 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_22 (int ,char*,scalar_t__,scalar_t__) ;

tree
FUNC_23 (tree VAR_18, tree VAR_19, int VAR_20,
        int VAR_21, tree VAR_22)
{
  tree VAR_23 = FUNC_3 (FUNC_2 (VAR_18));
  tree VAR_24;
  tree VAR_25 = VAR_11;
  tree VAR_26 = VAR_11;
  bool VAR_27;

  if (FUNC_1 (VAR_23) == VAR_7
      && FUNC_2 (VAR_19) == VAR_17)
    VAR_19 = FUNC_16 (VAR_23, VAR_19,
        (VAR_21 & VAR_8)
        ? VAR_16 : VAR_15);

  if (VAR_19 == VAR_14)
    return VAR_14;

  VAR_24 = FUNC_2 (VAR_19);

  FUNC_15 (FUNC_1 (VAR_24) != VAR_13);
  FUNC_15 (FUNC_1 (VAR_18) == VAR_13);

  VAR_24 = FUNC_3 (VAR_24);

  VAR_27 = FUNC_10 (VAR_23, VAR_24);
  if (!VAR_27
      && (VAR_20 & VAR_4) && FUNC_0 (VAR_24)
      && ! (VAR_21 & VAR_9))
    {


      VAR_26
 = FUNC_7 (VAR_18, VAR_19);

      if (VAR_26 && VAR_26 != VAR_14
   && FUNC_20 (VAR_26))
 {
   VAR_19 = VAR_26;
   VAR_26 = VAR_11;
   VAR_24 = VAR_23;
   VAR_27 = 1;
 }
    }

  if (((VAR_20 & VAR_6) && FUNC_10 (VAR_24, VAR_23))
      || ((VAR_20 & VAR_4) && VAR_27))
    {
      if (VAR_21 & VAR_8)
 {
   tree VAR_28 = FUNC_2 (VAR_18);
   tree VAR_29 = FUNC_18 (VAR_19);

   if (! FUNC_20 (VAR_19))
     FUNC_21 (VAR_18, VAR_24, VAR_22);

   if (! (VAR_20 & VAR_3)
     && !FUNC_4 (VAR_28, VAR_29))
     FUNC_19 ("conversion from %qT to %qT discards qualifiers",
       VAR_29, VAR_18);
 }

      return FUNC_9 (VAR_18, VAR_19, VAR_21, VAR_22);
    }
  else if ((VAR_20 & VAR_5) && FUNC_17 (VAR_19))
    {







      if (FUNC_1 (VAR_24) == VAR_12
   && (FUNC_11 (FUNC_2 (VAR_24), VAR_23,
    VAR_1 | VAR_2)))
 FUNC_22 (0, "casting %qT to %qT does not dereference pointer",
   VAR_24, VAR_18);

      VAR_25 = FUNC_8 (VAR_0, VAR_19, 0);
      if (VAR_25 != VAR_14)
 VAR_25 = FUNC_13 (FUNC_6 (FUNC_2 (VAR_18)),
         VAR_25, 0);
      if (VAR_25 != VAR_14)
 VAR_25 = FUNC_5 (VAR_10, VAR_18, VAR_25);
    }
  else
    {
      VAR_25 = FUNC_12 (VAR_11, VAR_23, VAR_19, VAR_21,
      "converting", 0, 0);
      if (VAR_25 == VAR_11 || VAR_25 == VAR_14)
 return VAR_25;
      FUNC_21 (VAR_18, VAR_24, VAR_22);
      VAR_25 = FUNC_9 (VAR_18, VAR_25, VAR_21, VAR_22);
    }

  if (VAR_25)
    {

      return VAR_25;
    }

  if (VAR_21 & VAR_8)
    FUNC_14 ("cannot convert type %qT to type %qT", VAR_24, VAR_18);

  return VAR_14;
}
