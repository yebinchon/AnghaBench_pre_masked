
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ member_0; scalar_t__ member_1; scalar_t__ member_2; scalar_t__ type; scalar_t__ min; scalar_t__ max; int * member_3; } ;
typedef TYPE_1__ value_range_t ;
typedef scalar_t__ tree ;
typedef enum value_range_type { ____Placeholder_value_range_type } value_range_type ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 () ;
 TYPE_1__* FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,int,scalar_t__,scalar_t__,int *) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (TYPE_1__*,int ) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_24 (TYPE_1__*) ;
 scalar_t__ FUNC_25 (TYPE_1__*) ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 scalar_t__ FUNC_29 (scalar_t__) ;

__attribute__((used)) static void
FUNC_30 (value_range_t *VAR_22, tree VAR_23)
{
  enum tree_code VAR_24 = FUNC_1 (VAR_23);
  enum value_range_type VAR_25;
  tree VAR_26, VAR_27, VAR_28, VAR_29;
  int VAR_30;
  value_range_t VAR_31 = { VAR_20, VAR_9, VAR_9, ((void*)0) };
  value_range_t VAR_32 = { VAR_20, VAR_9, VAR_9, ((void*)0) };



  if (VAR_24 != VAR_10
      && VAR_24 != VAR_6
      && VAR_24 != VAR_8
      && VAR_24 != VAR_13
      && VAR_24 != VAR_3
      && VAR_24 != VAR_1
      && VAR_24 != VAR_2
      && VAR_24 != VAR_11
      && VAR_24 != VAR_7
      && VAR_24 != VAR_5
      && VAR_24 != VAR_0
      && VAR_24 != VAR_14
      && VAR_24 != VAR_16
      && VAR_24 != VAR_15
      && VAR_24 != VAR_17)
    {
      FUNC_24 (VAR_22);
      return;
    }



  VAR_26 = FUNC_2 (VAR_23, 0);
  if (FUNC_1 (VAR_26) == VAR_12)
    VAR_31 = *(FUNC_10 (VAR_26));
  else if (FUNC_13 (VAR_26))
    FUNC_23 (&VAR_31, VAR_26, ((void*)0));
  else
    FUNC_24 (&VAR_31);

  VAR_27 = FUNC_2 (VAR_23, 1);
  if (FUNC_1 (VAR_27) == VAR_12)
    VAR_32 = *(FUNC_10 (VAR_27));
  else if (FUNC_13 (VAR_27))
    FUNC_23 (&VAR_32, VAR_27, ((void*)0));
  else
    FUNC_24 (&VAR_32);


  if (VAR_31 == VAR_20 || VAR_32 == VAR_20)
    {
      FUNC_22 (VAR_22);
      return;
    }


  VAR_25 = VAR_31;






  if (VAR_24 != VAR_0
      && VAR_24 != VAR_15
      && VAR_24 != VAR_17
      && (VAR_31 == VAR_21
   || VAR_32 == VAR_21
   || VAR_31 != VAR_32
   || FUNC_25 (&VAR_31)
   || FUNC_25 (&VAR_32)))
    {
      FUNC_24 (VAR_22);
      return;
    }


  if (FUNC_0 (FUNC_4 (VAR_23))
      || FUNC_0 (FUNC_4 (VAR_26))
      || FUNC_0 (FUNC_4 (VAR_27)))
    {





      if (VAR_24 == VAR_10)
 {
   if (FUNC_17 (&VAR_31) || FUNC_17 (&VAR_32))
     FUNC_20 (VAR_22, FUNC_4 (VAR_23));
   else if (FUNC_18 (&VAR_31) && FUNC_18 (&VAR_32))
     FUNC_21 (VAR_22, FUNC_4 (VAR_23));
   else
     FUNC_24 (VAR_22);
 }
      else
 {


   FUNC_24 (VAR_22);
 }

      return;
    }



  if (VAR_24 == VAR_14
      || VAR_24 == VAR_16
      || VAR_24 == VAR_15
      || VAR_24 == VAR_17)
    {


      if (VAR_24 == VAR_15
   && ((VAR_31 == VAR_19
        && FUNC_12 (VAR_31)
        && FUNC_12 (VAR_31))
       || (VAR_32 == VAR_19
    && FUNC_12 (VAR_32)
    && FUNC_12 (VAR_32))))
 {
   VAR_25 = VAR_19;
   VAR_28 = VAR_29 = FUNC_6 (FUNC_4 (VAR_23), 0);
 }


      else if (VAR_24 == VAR_17
        && ((VAR_31 == VAR_19
      && FUNC_11 (VAR_31)
      && FUNC_11 (VAR_31))
     || (VAR_32 == VAR_19
         && FUNC_11 (VAR_32)
         && FUNC_11 (VAR_32))))
 {
   VAR_25 = VAR_19;
   VAR_28 = VAR_29 = FUNC_6 (FUNC_4 (VAR_23), 1);
 }
      else if (VAR_31 != VAR_21
        && VAR_32 != VAR_21
        && VAR_31 == VAR_32
        && !FUNC_25 (&VAR_31)
        && !FUNC_15 (&VAR_31)
        && !FUNC_25 (&VAR_32)
        && !FUNC_15 (&VAR_32))
 {

   VAR_28 = FUNC_8 (VAR_24, FUNC_4 (VAR_23), VAR_31, VAR_32);
   VAR_29 = FUNC_8 (VAR_24, FUNC_4 (VAR_23), VAR_31, VAR_32);
 }
      else
 {
   FUNC_24 (VAR_22);
   return;
 }
    }
  else if (VAR_24 == VAR_10
    || VAR_24 == VAR_7
    || VAR_24 == VAR_5)
    {







      if (VAR_24 == VAR_10 && VAR_31 == VAR_18)
 {
   FUNC_24 (VAR_22);
   return;
 }




      VAR_28 = FUNC_27 (VAR_24, VAR_31, VAR_32);
      VAR_29 = FUNC_27 (VAR_24, VAR_31, VAR_32);
    }
  else if (VAR_24 == VAR_8
    || VAR_24 == VAR_13
    || VAR_24 == VAR_3
    || VAR_24 == VAR_1
    || VAR_24 == VAR_2
    || VAR_24 == VAR_11)
    {
      tree VAR_33[4];
      size_t VAR_34;
      bool VAR_35;
      if (VAR_24 == VAR_8
   && VAR_31 == VAR_18
   && !FUNC_5 (FUNC_4 (VAR_26)))
 {
   FUNC_24 (VAR_22);
   return;
 }
      if (VAR_24 != VAR_8
   && (VAR_31 == VAR_18 || FUNC_16 (&VAR_32)))
 {
   FUNC_24 (VAR_22);
   return;
 }


      VAR_35 = 0;
      VAR_33[0] = FUNC_27 (VAR_24, VAR_31, VAR_32);
      if (VAR_33[0] == VAR_9)
 VAR_35 = 1;

      if (VAR_32 == VAR_32)
 VAR_33[1] = VAR_9;
      else
 {
   VAR_33[1] = FUNC_27 (VAR_24, VAR_31, VAR_32);
   if (VAR_33[1] == VAR_9)
     VAR_35 = 1;
 }

      if (VAR_31 == VAR_31)
 VAR_33[2] = VAR_9;
      else
 {
   VAR_33[2] = FUNC_27 (VAR_24, VAR_31, VAR_32);
   if (VAR_33[2] == VAR_9)
     VAR_35 = 1;
 }

      if (VAR_31 == VAR_31 || VAR_32 == VAR_32)
 VAR_33[3] = VAR_9;
      else
 {
   VAR_33[3] = FUNC_27 (VAR_24, VAR_31, VAR_32);
   if (VAR_33[3] == VAR_9)
     VAR_35 = 1;
 }

      if (VAR_35)
 {
   FUNC_24 (VAR_22);
   return;
 }



      VAR_28 = VAR_33[0];
      VAR_29 = VAR_33[0];
      for (VAR_34 = 1; VAR_34 < 4; VAR_34++)
 {
   if (!FUNC_13 (VAR_28)
       || (FUNC_3 (VAR_28) && !FUNC_14 (VAR_28))
       || !FUNC_13 (VAR_29)
       || (FUNC_3 (VAR_29) && !FUNC_14 (VAR_29)))
     break;

   if (VAR_33[VAR_34])
     {
       if (!FUNC_13 (VAR_33[VAR_34])
    || (FUNC_3 (VAR_33[VAR_34])
        && !FUNC_14 (VAR_33[VAR_34])))
  {



    VAR_28 = VAR_29 = VAR_33[VAR_34];
    break;
  }

       if (FUNC_7 (VAR_33[VAR_34], VAR_28) == -1)
  VAR_28 = VAR_33[VAR_34];

       if (FUNC_7 (VAR_33[VAR_34], VAR_29) == 1)
  VAR_29 = VAR_33[VAR_34];
     }
 }
    }
  else if (VAR_24 == VAR_6)
    {







      if (VAR_31 == VAR_18)
 {
   FUNC_24 (VAR_22);
   return;
 }



      VAR_28 = FUNC_27 (VAR_24, VAR_31, VAR_32);
      VAR_29 = FUNC_27 (VAR_24, VAR_31, VAR_32);
    }
  else if (VAR_24 == VAR_0)
    {
      if (VAR_31 == VAR_19
   && VAR_31 == VAR_31
   && FUNC_1 (VAR_31) == VAR_4
   && !FUNC_3 (VAR_31)
   && FUNC_26 (VAR_31) >= 0)
 {
   VAR_28 = FUNC_6 (FUNC_4 (VAR_23), 0);
   VAR_29 = VAR_31;
 }
      else if (VAR_32 == VAR_19
        && VAR_32 == VAR_32
        && FUNC_1 (VAR_32) == VAR_4
        && !FUNC_3 (VAR_32)
        && FUNC_26 (VAR_32) >= 0)
 {
   VAR_25 = VAR_19;
   VAR_28 = FUNC_6 (FUNC_4 (VAR_23), 0);
   VAR_29 = VAR_32;
 }
      else
 {
   FUNC_24 (VAR_22);
   return;
 }
    }
  else
    FUNC_9 ();




  if (VAR_28 == VAR_9
      || !FUNC_13 (VAR_28)
      || (FUNC_3 (VAR_28) && !FUNC_14 (VAR_28))
      || VAR_29 == VAR_9
      || !FUNC_13 (VAR_29)
      || (FUNC_3 (VAR_29) && !FUNC_14 (VAR_29)))
    {
      FUNC_24 (VAR_22);
      return;
    }
  if ((FUNC_29 (VAR_28) || FUNC_14 (VAR_28))
      && (FUNC_28 (VAR_29) || FUNC_14 (VAR_29)))
    {
      FUNC_24 (VAR_22);
      return;
    }

  VAR_30 = FUNC_7 (VAR_28, VAR_29);
  if (VAR_30 == -2 || VAR_30 == 1)
    {



      FUNC_24 (VAR_22);
    }
  else
    FUNC_19 (VAR_22, VAR_25, VAR_28, VAR_29, ((void*)0));
}
