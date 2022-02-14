
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ member_0; scalar_t__ type; scalar_t__ min; scalar_t__ max; int * equiv; int * member_3; int member_2; int member_1; } ;
typedef TYPE_1__ value_range_t ;
typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int,scalar_t__,scalar_t__) ;
 int FUNC_17 (int) ;
 TYPE_1__* FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int ,scalar_t__,int ,int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__) ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (TYPE_1__*) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 scalar_t__ FUNC_29 (TYPE_1__*) ;
 scalar_t__ FUNC_30 (TYPE_1__*) ;
 scalar_t__ FUNC_31 (TYPE_1__*) ;
 int FUNC_32 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_33 (TYPE_1__*,scalar_t__) ;
 int FUNC_34 (TYPE_1__*,scalar_t__) ;
 int FUNC_35 (TYPE_1__*) ;
 int FUNC_36 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_37 (TYPE_1__*) ;
 scalar_t__ FUNC_38 (scalar_t__) ;
 scalar_t__ FUNC_39 (TYPE_1__*) ;
 scalar_t__ FUNC_40 (scalar_t__,int*) ;
 scalar_t__ FUNC_41 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_42 (scalar_t__) ;
 scalar_t__ FUNC_43 (scalar_t__) ;

__attribute__((used)) static void
FUNC_44 (value_range_t *VAR_20, tree VAR_21)
{
  enum tree_code VAR_22 = FUNC_2 (VAR_21);
  tree VAR_23, VAR_24, VAR_25;
  int VAR_26;
  value_range_t VAR_27 = { VAR_17, VAR_12, VAR_12, ((void*)0) };



  if (VAR_22 == VAR_7
      || VAR_22 == VAR_4
      || VAR_22 == VAR_5
      || VAR_22 == VAR_6
      || VAR_22 == VAR_8
      || VAR_22 == VAR_1
      || VAR_22 == VAR_10
      || VAR_22 == VAR_2)
    {
      FUNC_37 (VAR_20);
      return;
    }



  VAR_25 = FUNC_3 (VAR_21, 0);
  if (FUNC_2 (VAR_25) == VAR_14)
    VAR_27 = *(FUNC_18 (VAR_25));
  else if (FUNC_20 (VAR_25))
    FUNC_36 (&VAR_27, VAR_25, ((void*)0));
  else
    FUNC_37 (&VAR_27);


  if (VAR_27 == VAR_17)
    {
      FUNC_35 (VAR_20);
      return;
    }



  if ((!FUNC_0 (FUNC_5 (VAR_25))
       && !FUNC_1 (FUNC_5 (VAR_25)))
      || (VAR_27 != VAR_18
   && FUNC_39 (&VAR_27)))
    {
      FUNC_37 (VAR_20);
      return;
    }



  if (FUNC_1 (FUNC_5 (VAR_21)) || FUNC_1 (FUNC_5 (VAR_25)))
    {
      bool VAR_28;

      VAR_28 = 0;
      if (FUNC_30 (&VAR_27)
   || (FUNC_40 (VAR_21, &VAR_28)
       && !VAR_28))
 FUNC_33 (VAR_20, FUNC_5 (VAR_21));
      else if (FUNC_31 (&VAR_27))
 FUNC_34 (VAR_20, FUNC_5 (VAR_21));
      else
 FUNC_37 (VAR_20);

      return;
    }


  if (VAR_22 == VAR_11 || VAR_22 == VAR_3)
    {
      tree VAR_29 = FUNC_5 (VAR_25);
      tree VAR_30 = FUNC_5 (VAR_21);
      if ((VAR_27 == VAR_16
    && !FUNC_27 (&VAR_27))
   || (VAR_27 == VAR_18
       && FUNC_10 (VAR_30) > FUNC_10 (VAR_29)))
 {
   tree VAR_31, VAR_32, VAR_33, VAR_34;




   if (VAR_27 == VAR_16)
     {
       VAR_33 = VAR_27;
       VAR_34 = VAR_27;
     }
   else
     {
       VAR_33 = FUNC_7 (VAR_29);
       VAR_34 = FUNC_6 (VAR_29);
     }

   VAR_31 = FUNC_15 (VAR_30, VAR_33);
   VAR_32 = FUNC_15 (VAR_30, VAR_34);




   if (FUNC_21 (VAR_31)
       && FUNC_21 (VAR_32)
       && FUNC_41 (VAR_31, VAR_33)
       && FUNC_41 (VAR_32, VAR_34)
       && (!FUNC_23 (VAR_31)
    || !FUNC_23 (VAR_32))
       && FUNC_14 (VAR_31, VAR_32) <= 0
       && FUNC_14 (VAR_31, VAR_32) >= -1)
     {
       FUNC_32 (VAR_20, VAR_16, VAR_31, VAR_32, VAR_20->equiv);
       return;
     }
 }







      if (FUNC_11 (VAR_29) != FUNC_11 (VAR_30)
   || FUNC_10 (VAR_29) != FUNC_10 (VAR_30))
 {
   FUNC_37 (VAR_20);
   return;
 }
    }





  if (VAR_27 == VAR_18)
    {
      FUNC_37 (VAR_20);
      return;
    }



  if (VAR_22 == VAR_9
      && !FUNC_12 (FUNC_5 (VAR_21)))
    {


      if (FUNC_24 (VAR_27))
 VAR_23 = FUNC_26 (FUNC_5 (VAR_21));
      else if (FUNC_22 (VAR_27))
 VAR_23 = FUNC_28 (FUNC_5 (VAR_21));
      else if (!FUNC_43 (VAR_27))
 VAR_23 = FUNC_16 (VAR_22, FUNC_5 (VAR_21), VAR_27);
      else if (FUNC_25 (FUNC_5 (VAR_21)))
 {
   if (FUNC_38 (FUNC_5 (VAR_21))
       && !FUNC_23 (VAR_27)
       && !FUNC_43 (VAR_27))
     VAR_23 = FUNC_28 (FUNC_5 (VAR_21));
   else
     {
       FUNC_37 (VAR_20);
       return;
     }
 }
      else
 VAR_23 = FUNC_7 (FUNC_5 (VAR_21));

      if (FUNC_24 (VAR_27))
 VAR_24 = FUNC_26 (FUNC_5 (VAR_21));
      else if (FUNC_22 (VAR_27))
 VAR_24 = FUNC_28 (FUNC_5 (VAR_21));
      else if (!FUNC_43 (VAR_27))
 VAR_24 = FUNC_16 (VAR_22, FUNC_5 (VAR_21), VAR_27);
      else if (FUNC_25 (FUNC_5 (VAR_21)))
 {
   if (FUNC_38 (FUNC_5 (VAR_21)))
     VAR_24 = FUNC_28 (FUNC_5 (VAR_21));
   else
     {
       FUNC_37 (VAR_20);
       return;
     }
 }
      else
 VAR_24 = FUNC_7 (FUNC_5 (VAR_21));
    }
  else if (VAR_22 == VAR_9
    && FUNC_12 (FUNC_5 (VAR_21)))
    {
      if (!FUNC_29 (&VAR_27))
 {
   VAR_24 = FUNC_16 (VAR_22, FUNC_5 (VAR_21), VAR_27);
   VAR_23 = FUNC_16 (VAR_22, FUNC_5 (VAR_21), VAR_27);
 }
      else
 {
   if (FUNC_31 (&VAR_27))
     FUNC_34 (VAR_20, FUNC_5 (VAR_21));
   else
     FUNC_37 (VAR_20);
   return;
 }
    }
  else if (VAR_22 == VAR_0
           && !FUNC_12 (FUNC_5 (VAR_21)))
    {


      if (!FUNC_8 (FUNC_5 (VAR_21))
   && ((VAR_27 == VAR_16
        && FUNC_43 (VAR_27))
       || (VAR_27 == VAR_15
    && !FUNC_43 (VAR_27)
    && !FUNC_29 (&VAR_27))))
 {
   FUNC_37 (VAR_20);
   return;
 }



      if (FUNC_23 (VAR_27))
 VAR_23 = FUNC_28 (FUNC_5 (VAR_21));
      else if (!FUNC_43 (VAR_27))
 VAR_23 = FUNC_16 (VAR_22, FUNC_5 (VAR_21), VAR_27);
      else if (!FUNC_25 (FUNC_5 (VAR_21)))
 VAR_23 = FUNC_6 (FUNC_5 (VAR_21));
      else if (FUNC_38 (FUNC_5 (VAR_21)))
 VAR_23 = FUNC_28 (FUNC_5 (VAR_21));
      else
 {
   FUNC_37 (VAR_20);
   return;
 }

      if (FUNC_23 (VAR_27))
 VAR_24 = FUNC_28 (FUNC_5 (VAR_21));
      else if (!FUNC_43 (VAR_27))
 VAR_24 = FUNC_16 (VAR_22, FUNC_5 (VAR_21), VAR_27);
      else if (!FUNC_25 (FUNC_5 (VAR_21)))
 VAR_24 = FUNC_6 (FUNC_5 (VAR_21));
      else if (FUNC_38 (FUNC_5 (VAR_21)))
 VAR_24 = FUNC_28 (FUNC_5 (VAR_21));
      else
 {
   FUNC_37 (VAR_20);
   return;
 }

      VAR_26 = FUNC_14 (VAR_23, VAR_24);



      if (VAR_27 == VAR_15)
 {
   if (FUNC_29 (&VAR_27))
     {

       if (VAR_26 != 1)
  VAR_24 = VAR_23;





       if (FUNC_9 (FUNC_5 (VAR_21)))
  {
    tree VAR_35 = FUNC_7 (FUNC_5 (VAR_21));

    VAR_23 = (VAR_27 != VAR_35
    ? FUNC_19 (VAR_13, VAR_35,
         VAR_19, 0)
    : VAR_35);
  }
       else
  {
    if (FUNC_27 (&VAR_27))
      VAR_23 = FUNC_26 (FUNC_5 (VAR_21));
    else
      VAR_23 = FUNC_7 (FUNC_5 (VAR_21));
  }
     }
   else
     {



       VAR_27 = VAR_16;
       VAR_23 = FUNC_13 (FUNC_5 (VAR_21), 0);
       if (FUNC_25 (FUNC_5 (VAR_21)))
  {
    if (FUNC_38 (FUNC_5 (VAR_21)))
      VAR_24 = FUNC_28 (FUNC_5 (VAR_21));
    else
      {
        FUNC_37 (VAR_20);
        return;
      }
  }
       else
  VAR_24 = FUNC_6 (FUNC_5 (VAR_21));
     }
 }



      else if (FUNC_29 (&VAR_27))
 {
   if (VAR_26 == 1)
     VAR_24 = VAR_23;
   VAR_23 = FUNC_13 (FUNC_5 (VAR_21), 0);
 }
      else
 {

   if (VAR_26 == 1)
     {
       tree VAR_36 = VAR_23;
       VAR_23 = VAR_24;
       VAR_24 = VAR_36;
     }
 }
    }
  else
    {

      VAR_23 = FUNC_16 (VAR_22, FUNC_5 (VAR_21), VAR_27);
      VAR_24 = FUNC_16 (VAR_22, FUNC_5 (VAR_21), VAR_27);

      if (FUNC_25 (FUNC_5 (VAR_21)))
 {
   FUNC_17 (VAR_22 != VAR_9 && VAR_22 != VAR_0);



   if ((FUNC_23 (VAR_27)
        || FUNC_4 (VAR_23))
       && (FUNC_23 (VAR_27)
    || FUNC_4 (VAR_24)))
     {
       FUNC_37 (VAR_20);
       return;
     }

   if (FUNC_23 (VAR_27))
     VAR_23 = VAR_27;
   else if (FUNC_4 (VAR_23))
     {
       if (FUNC_38 (FUNC_5 (VAR_21)))
  VAR_23 = (FUNC_42 (VAR_23) >= 0
         ? FUNC_28 (FUNC_5 (VAR_23))
         : FUNC_26 (FUNC_5 (VAR_23)));
       else
  {
    FUNC_37 (VAR_20);
    return;
  }
     }

   if (FUNC_23 (VAR_27))
     VAR_24 = VAR_27;
   else if (FUNC_4 (VAR_24))
     {
       if (FUNC_38 (FUNC_5 (VAR_21)))
  VAR_24 = (FUNC_42 (VAR_24) >= 0
         ? FUNC_28 (FUNC_5 (VAR_24))
         : FUNC_26 (FUNC_5 (VAR_24)));
       else
  {
    FUNC_37 (VAR_20);
    return;
  }
     }
 }
    }

  VAR_26 = FUNC_14 (VAR_23, VAR_24);
  if (VAR_26 == -2 || VAR_26 == 1)
    {



      FUNC_37 (VAR_20);
    }
  else
    FUNC_32 (VAR_20, VAR_27, VAR_23, VAR_24, ((void*)0));
}
