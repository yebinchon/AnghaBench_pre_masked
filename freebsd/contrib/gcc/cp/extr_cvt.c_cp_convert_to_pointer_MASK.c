
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef scalar_t__ base_kind ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_19 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (int,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_21 (scalar_t__,int) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (int ,scalar_t__,int ,int) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__) ;
 int FUNC_25 (scalar_t__,int ) ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_29 (int ,scalar_t__) ;
 scalar_t__ FUNC_30 (scalar_t__) ;
 int FUNC_31 (char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_32 (scalar_t__,int ,int,int) ;
 int FUNC_33 (int) ;
 scalar_t__ FUNC_34 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_35 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_36 (scalar_t__) ;
 scalar_t__ FUNC_37 (scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int FUNC_38 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_39 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_40 (scalar_t__) ;
 int VAR_17 ;
 int FUNC_41 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_42 (tree VAR_18, tree VAR_19, bool VAR_20)
{
  tree VAR_21 = FUNC_9 (VAR_19);
  enum tree_code VAR_22;
  tree VAR_23;
  if (VAR_21 == VAR_14)
    return VAR_14;

  if (FUNC_4 (VAR_21))
    {
      VAR_21 = FUNC_26 (VAR_21);
      if (!FUNC_1 (VAR_21))
 {
   FUNC_31 ("can't convert from incomplete type %qT to %qT",
   VAR_21, VAR_18);
   return VAR_14;
 }

      VAR_23 = FUNC_24 (VAR_18, VAR_19);
      if (VAR_23)
 {
   if (VAR_23 == VAR_14)
     FUNC_31 ("conversion of %qE from %qT to %qT is ambiguous",
     VAR_19, VAR_21, VAR_18);
   return VAR_23;
 }
    }


  if (FUNC_7 (VAR_18) == VAR_9
      && (FUNC_7 (FUNC_9 (VAR_18)) == VAR_1
   || FUNC_18 (FUNC_9 (VAR_18))))
    {
      if (FUNC_14 (VAR_21)
   || FUNC_7 (VAR_21) == VAR_2)
 return FUNC_27 (VAR_18, VAR_19);
      if (FUNC_7 (FUNC_9 (VAR_19)) == VAR_9)
 return FUNC_22 (VAR_18, VAR_19);
      VAR_21 = FUNC_9 (VAR_19);
    }

  if (VAR_19 == VAR_14)
    return VAR_14;

  VAR_22 = FUNC_7 (VAR_21);

  if (FUNC_5 (VAR_21))
    {
      VAR_21 = FUNC_10 (VAR_21);

      if (FUNC_10 (VAR_18) != VAR_21
   && FUNC_7 (VAR_18) == VAR_9
   && FUNC_7 (FUNC_9 (VAR_18)) == VAR_11
   && FUNC_4 (FUNC_9 (VAR_18))
   && FUNC_4 (FUNC_9 (VAR_21))
   && FUNC_7 (FUNC_9 (VAR_21)) == VAR_11)
 {
   enum tree_code VAR_24 = VAR_7;
   tree VAR_25;
   tree VAR_26;
   tree VAR_27;
   bool VAR_28;

   VAR_26 = FUNC_9 (VAR_21);
   VAR_27 = FUNC_9 (VAR_18);

   VAR_28 = FUNC_38 (FUNC_10 (VAR_26),
    FUNC_10 (VAR_27));
   VAR_25 = VAR_5;

   if (!VAR_28)
     VAR_25 = FUNC_37 (VAR_26, VAR_27, VAR_12, ((void*)0));
   if (!VAR_28 && !VAR_25)
     {

       VAR_25 = FUNC_37 (VAR_27, VAR_26, VAR_12, ((void*)0));
       VAR_24 = VAR_3;
     }
   if (VAR_25 == VAR_14)
     return VAR_14;
   if (VAR_25 || VAR_28)
     {
       if (VAR_25)
  VAR_19 = FUNC_20 (VAR_24, VAR_19, VAR_25, 0);

       return FUNC_22 (VAR_18, VAR_19);
     }
 }

      if (FUNC_14 (VAR_18))
 {
   FUNC_31 ("cannot convert %qE from type %qT to type %qT",
   VAR_19, VAR_21, VAR_18);
   return VAR_14;
 }

      return FUNC_22 (VAR_18, VAR_19);
    }
  else if (FUNC_16 (VAR_18) && FUNC_16 (VAR_21))
    {
      tree VAR_29;
      tree VAR_30;
      tree VAR_31;
      enum tree_code VAR_32 = VAR_7;
      base_kind VAR_33;

      VAR_29 = FUNC_15 (VAR_18);
      VAR_30 = FUNC_15 (VAR_21);
      VAR_31 = FUNC_37 (VAR_29, VAR_30, VAR_12, &VAR_33);
      if (!VAR_31)
 {
   VAR_31 = FUNC_37 (VAR_30, VAR_29, VAR_12, &VAR_33);
   VAR_32 = VAR_3;
 }
      if (VAR_31 == VAR_14)
 return VAR_14;

      if (VAR_33 == VAR_13)
 {
   if (VAR_20)
     FUNC_41 (0, "pointer to member cast from %qT to %qT is via"
       " virtual base", VAR_21, VAR_18);
   else
     {
       FUNC_31 ("pointer to member cast from %qT to %qT is"
       " via virtual base", VAR_21, VAR_18);
       return VAR_14;
     }


   return FUNC_19 (VAR_4, VAR_18, VAR_19);
 }

      if (FUNC_7 (VAR_19) == VAR_10)
 VAR_19 = FUNC_30 (VAR_19);

      if (VAR_31 && !FUNC_36 (FUNC_0 (VAR_31)))
 VAR_19 = FUNC_39 (VAR_32,
      FUNC_22 (VAR_15, VAR_19),
      FUNC_0 (VAR_31));
      return FUNC_22 (VAR_18, VAR_19);
    }
  else if (FUNC_14 (VAR_18) && FUNC_14 (VAR_21))
    return FUNC_23 (FUNC_13 (VAR_18), VAR_19, 0,
                     0);
  else if (FUNC_14 (VAR_21))
    {
      if (!VAR_17)
 {
   if (FUNC_7 (VAR_19) == VAR_10)
     return FUNC_42 (VAR_18,
       FUNC_6 (VAR_19),
       VAR_20);
   else if (FUNC_7 (VAR_19) == VAR_6)
     {
       tree VAR_34 = FUNC_8 (VAR_19, 0);
       return FUNC_34 (&VAR_34,
             FUNC_8 (VAR_19, 1));
     }
 }
      FUNC_31 ("cannot convert %qE from type %qT to type %qT",
      VAR_19, VAR_21, VAR_18);
      return VAR_14;
    }

  if (FUNC_36 (VAR_19))
    {
      if (FUNC_14 (VAR_18))
 return FUNC_23 (FUNC_13 (VAR_18), VAR_19, 0,
                  0);

      if (FUNC_16 (VAR_18))
 {


   VAR_19 = FUNC_21 (VAR_18, -1);

   VAR_19 = FUNC_32 (VAR_19, 0, 0, 0);
 }
      else
 VAR_19 = FUNC_21 (VAR_18, 0);

      return VAR_19;
    }
  else if (FUNC_17 (VAR_18) && FUNC_3 (VAR_22))
    {
      FUNC_31 ("invalid conversion from %qT to %qT", VAR_21, VAR_18);
      return VAR_14;
    }

  if (FUNC_3 (VAR_22))
    {
      if (FUNC_12 (VAR_21) == VAR_8)
 return FUNC_19 (VAR_0, VAR_18, VAR_19);
      VAR_19 = FUNC_29 (FUNC_25 (VAR_8, 0), VAR_19);



      FUNC_33 (FUNC_2 (FUNC_11 (FUNC_9 (VAR_19)))
    == FUNC_2 (FUNC_11 (VAR_18)));

      return FUNC_28 (VAR_18, VAR_19);
    }

  if (FUNC_40 (VAR_19))
    return FUNC_35 (VAR_18, VAR_19, VAR_16);

  FUNC_31 ("cannot convert %qE from type %qT to type %qT",
  VAR_19, VAR_21, VAR_18);
  return VAR_14;
}
