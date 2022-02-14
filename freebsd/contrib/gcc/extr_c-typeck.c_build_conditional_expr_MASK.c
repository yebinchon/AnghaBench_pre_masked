
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int,int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_16 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 int VAR_14 ;
 scalar_t__ FUNC_20 (scalar_t__,int*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_21 (int ,char*) ;

tree
FUNC_22 (tree VAR_17, tree VAR_18, tree VAR_19)
{
  tree VAR_20;
  tree VAR_21;
  enum tree_code VAR_22;
  enum tree_code VAR_23;
  tree VAR_24 = ((void*)0);
  tree VAR_25 = VAR_18, VAR_26 = VAR_19;



  if (FUNC_0 (FUNC_3 (VAR_18)) != VAR_9)
    VAR_18 = FUNC_14 (VAR_18);
  if (FUNC_0 (FUNC_3 (VAR_19)) != VAR_9)
    VAR_19 = FUNC_14 (VAR_19);

  if (FUNC_0 (VAR_17) == VAR_4
      || FUNC_0 (FUNC_3 (VAR_18)) == VAR_4
      || FUNC_0 (FUNC_3 (VAR_19)) == VAR_4)
    return VAR_10;

  VAR_20 = FUNC_3 (VAR_18);
  VAR_22 = FUNC_0 (VAR_20);
  VAR_21 = FUNC_3 (VAR_19);
  VAR_23 = FUNC_0 (VAR_21);



  if (VAR_22 == VAR_0 || VAR_23 == VAR_0)
    {
      FUNC_15 ("non-lvalue array in conditional expression");
      return VAR_10;
    }



  if (FUNC_4 (VAR_20) == FUNC_4 (VAR_21))
    {
      if (VAR_20 == VAR_21)
 VAR_24 = VAR_20;
      else
 VAR_24 = FUNC_4 (VAR_20);
    }
  else if ((VAR_22 == VAR_6 || VAR_22 == VAR_8
     || VAR_22 == VAR_2)
    && (VAR_23 == VAR_6 || VAR_23 == VAR_8
        || VAR_23 == VAR_2))
    {
      VAR_24 = FUNC_9 (VAR_20, VAR_21);






      if (VAR_16 && !VAR_14)
 {
   int VAR_27 = FUNC_5 (FUNC_3 (VAR_25));
   int VAR_28 = FUNC_5 (FUNC_3 (VAR_26));

   if (VAR_27 ^ VAR_28)
     {
       bool VAR_29;




       if (!FUNC_5 (VAR_24))
          ;



       else if ((VAR_28
   && FUNC_20 (VAR_18, &VAR_29))
         || (VAR_27
      && FUNC_20 (VAR_19, &VAR_29)))
          ;
       else
  FUNC_21 (0, "signed and unsigned type in conditional expression");
     }
 }
    }
  else if (VAR_22 == VAR_9 || VAR_23 == VAR_9)
    {
      if (VAR_13 && (VAR_22 != VAR_9 || VAR_23 != VAR_9))
 FUNC_18 ("ISO C forbids conditional expr with only one void side");
      VAR_24 = VAR_15;
    }

  else if ((VAR_22 == VAR_7
      || VAR_22 == VAR_1)
     && (VAR_23 == VAR_7
   || VAR_23 == VAR_1))

    {
      if (FUNC_11 (VAR_20, VAR_21))
 VAR_24 = FUNC_10 (VAR_20, VAR_21);
      else if (FUNC_17 (VAR_25))
 VAR_24 = FUNC_19 (VAR_21, VAR_20);
      else if (FUNC_17 (VAR_26))
 VAR_24 = FUNC_19 (VAR_20, VAR_21);

      else if (VAR_23 == VAR_1
    && FUNC_6 (FUNC_3 (VAR_20)))
  VAR_24 = VAR_21;
      else if (VAR_22 == VAR_1
    && FUNC_6 (FUNC_3 (VAR_21)))
  VAR_24 = VAR_20;

      else if (FUNC_6 (FUNC_3 (VAR_20)))
 {
   if (VAR_13 && FUNC_0 (FUNC_3 (VAR_21)) == VAR_5)
     FUNC_18 ("ISO C forbids conditional expr between "
       "%<void *%> and function pointer");
   VAR_24 = FUNC_7 (FUNC_19 (FUNC_3 (VAR_20),
         FUNC_3 (VAR_21)));
 }
      else if (FUNC_6 (FUNC_3 (VAR_21)))
 {
   if (VAR_13 && FUNC_0 (FUNC_3 (VAR_20)) == VAR_5)
     FUNC_18 ("ISO C forbids conditional expr between "
       "%<void *%> and function pointer");
   VAR_24 = FUNC_7 (FUNC_19 (FUNC_3 (VAR_21),
         FUNC_3 (VAR_20)));
 }
      else
 {
   FUNC_18 ("pointer type mismatch in conditional expression");
   VAR_24 = FUNC_7 (VAR_15);
 }
    }
  else if (VAR_22 == VAR_7 && VAR_23 == VAR_6)
    {
      if (!FUNC_17 (VAR_26))
 FUNC_18 ("pointer/integer type mismatch in conditional expression");
      else
 {
   VAR_19 = VAR_12;
 }
      VAR_24 = VAR_20;
    }
  else if (VAR_23 == VAR_7 && VAR_22 == VAR_6)
    {
      if (!FUNC_17 (VAR_25))
 FUNC_18 ("pointer/integer type mismatch in conditional expression");
      else
 {
   VAR_18 = VAR_12;
 }
      VAR_24 = VAR_21;
    }


  else if (VAR_22 == VAR_1 && VAR_23 == VAR_6)
    {
      if (!FUNC_17 (VAR_26))
 FUNC_15 ("block pointer/integer type mismatch in conditional expression");
      else
 {
   VAR_19 = FUNC_12 (VAR_20, VAR_12);
 }
      VAR_24 = VAR_20;
    }

  else if (VAR_23 == VAR_1 && VAR_22 == VAR_6)
    {
      if (!FUNC_17 (VAR_25))
 FUNC_15 ("block pointer/integer type mismatch in conditional expression");
      else
 {
   VAR_18 = FUNC_12 (VAR_21, VAR_12);
 }
      VAR_24 = VAR_21;
    }


  if (!VAR_24)
    {
      if (VAR_11)
 VAR_24 = VAR_15;
      else
 {
   FUNC_15 ("type mismatch in conditional expression");
   return VAR_10;
 }
    }


  VAR_24
    = FUNC_8 (VAR_24,
     FUNC_1 (VAR_18) || FUNC_1 (VAR_19),
     FUNC_2 (VAR_18) || FUNC_2 (VAR_19));

  if (VAR_24 != FUNC_3 (VAR_18))
    VAR_18 = FUNC_13 (VAR_24, VAR_18);
  if (VAR_24 != FUNC_3 (VAR_19))
    VAR_19 = FUNC_13 (VAR_24, VAR_19);

  return FUNC_16 (VAR_3, VAR_24, VAR_17, VAR_18, VAR_19);
}
