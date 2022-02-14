
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct constructor_range_stack {scalar_t__ index; scalar_t__ fields; scalar_t__ range_start; scalar_t__ range_end; TYPE_1__* stack; struct constructor_range_stack* next; struct constructor_range_stack* prev; } ;
struct c_expr {scalar_t__ value; scalar_t__ original_code; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {scalar_t__ implicit; struct c_expr replacement_value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 struct constructor_range_stack* VAR_16 ;
 TYPE_1__* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_12 (scalar_t__) ;
 int VAR_25 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,int,scalar_t__,scalar_t__,int) ;
 int FUNC_16 (char*) ;
 struct c_expr FUNC_17 (int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int VAR_26 ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__,scalar_t__) ;
 int FUNC_26 (scalar_t__,int) ;
 int FUNC_27 (int ,char*) ;

void
FUNC_28 (struct c_expr VAR_27)
{
  tree VAR_28 = VAR_27.value;
  int VAR_29 = VAR_28 != 0 && FUNC_6 (VAR_28) == VAR_6;
  bool VAR_30 = VAR_27.original_code == VAR_6;

  VAR_21 = 0;
  VAR_22 = 0;



  if (VAR_29
      && VAR_18
      && FUNC_6 (VAR_18) == VAR_0
      && FUNC_3 (FUNC_7 (VAR_18))
      && FUNC_14 (VAR_20))
    {
      if (VAR_17->replacement_value.value)
 FUNC_11 ("excess elements in char array initializer");
      VAR_17->replacement_value = VAR_27;
      return;
    }

  if (VAR_17->replacement_value.value != 0)
    {
      FUNC_11 ("excess elements in struct initializer");
      return;
    }



  if (VAR_18 == 0)
    return;



  while (VAR_17->implicit)
    {
      if ((FUNC_6 (VAR_18) == VAR_5
    || FUNC_6 (VAR_18) == VAR_7)
   && VAR_13 == 0)
 FUNC_28 (FUNC_17 (1));
      else if (FUNC_6 (VAR_18) == VAR_0
        && (VAR_15 == 0
     || FUNC_25 (VAR_15,
           VAR_14)))
 FUNC_28 (FUNC_17 (1));
      else
 break;
    }


  if (VAR_16)
    {


      if (FUNC_6 (VAR_27.value) != VAR_1
   || !VAR_26
   || VAR_24)
 VAR_27.value = FUNC_22 (VAR_27.value);
    }

  while (1)
    {
      if (FUNC_6 (VAR_18) == VAR_5)
 {
   tree VAR_31;
   enum tree_code VAR_32;

   if (VAR_13 == 0)
     {
       FUNC_16 ("excess elements in struct initializer");
       break;
     }

   VAR_31 = FUNC_7 (VAR_13);
   if (VAR_31 != VAR_23)
     VAR_31 = FUNC_8 (VAR_31);
   VAR_32 = FUNC_6 (VAR_31);


   if (VAR_32 == VAR_0
       && !VAR_26
       && FUNC_9 (VAR_31) == VAR_2
       && FUNC_5 (VAR_13) == VAR_2)
     {
       FUNC_11 ("non-static initialization of a flexible array member");
       break;
     }


   if (VAR_27.value != 0
       && VAR_32 == VAR_0
       && FUNC_3 (FUNC_7 (VAR_31))
       && VAR_29)
     VAR_27.value = VAR_28;


   else if (VAR_27.value != 0
     && VAR_27.value != VAR_23
     && FUNC_8 (FUNC_7 (VAR_27.value)) != VAR_31
     && (VAR_32 == VAR_5 || VAR_32 == VAR_0
         || VAR_32 == VAR_7))
     {
       FUNC_19 (1);
       continue;
     }

   if (VAR_27.value)
     {
       FUNC_20 (VAR_13);
       FUNC_15 (VAR_27.value, VAR_30,
       VAR_31, VAR_13, 1);
       FUNC_4 (VAR_11);
     }
   else


     {

       if (FUNC_2 (VAR_13))
  VAR_10
    = FUNC_23 (VAR_4,
    FUNC_10 (VAR_13),
    FUNC_2 (VAR_13));



       if (VAR_19 == VAR_13)
  {
    VAR_19 = FUNC_5 (VAR_13);

    while (VAR_19 != 0
    && FUNC_0 (VAR_19)
    && FUNC_1 (VAR_19) == 0)
      VAR_19 =
        FUNC_5 (VAR_19);
  }
     }

   VAR_13 = FUNC_5 (VAR_13);

   while (VAR_13 != 0
   && FUNC_0 (VAR_13)
   && FUNC_1 (VAR_13) == 0)
     VAR_13 = FUNC_5 (VAR_13);
 }
      else if (FUNC_6 (VAR_18) == VAR_7)
 {
   tree VAR_33;
   enum tree_code VAR_34;

   if (VAR_13 == 0)
     {
       FUNC_16 ("excess elements in union initializer");
       break;
     }

   VAR_33 = FUNC_7 (VAR_13);
   if (VAR_33 != VAR_23)
     VAR_33 = FUNC_8 (VAR_33);
   VAR_34 = FUNC_6 (VAR_33);
   if (!VAR_25 && !VAR_12
       && !(VAR_27.value && (FUNC_14 (VAR_27.value)
       || FUNC_21 (VAR_27.value))))
     FUNC_27 (VAR_3, "traditional C rejects initialization "
       "of unions");


   if (VAR_27.value != 0
       && VAR_34 == VAR_0
       && FUNC_3 (FUNC_7 (VAR_33))
       && VAR_29)
     VAR_27.value = VAR_28;


   else if (VAR_27.value != 0
     && VAR_27.value != VAR_23
     && FUNC_8 (FUNC_7 (VAR_27.value)) != VAR_33
     && (VAR_34 == VAR_5 || VAR_34 == VAR_0
         || VAR_34 == VAR_7))
     {
       FUNC_19 (1);
       continue;
     }

   if (VAR_27.value)
     {
       FUNC_20 (VAR_13);
       FUNC_15 (VAR_27.value, VAR_30,
       VAR_33, VAR_13, 1);
       FUNC_4 (VAR_11);
     }
   else


     {
       VAR_10 = FUNC_2 (VAR_13);
       VAR_19 = FUNC_5 (VAR_13);
     }

   VAR_13 = 0;
 }
      else if (FUNC_6 (VAR_18) == VAR_0)
 {
   tree VAR_35 = FUNC_8 (FUNC_7 (VAR_18));
   enum tree_code VAR_36 = FUNC_6 (VAR_35);


   if (VAR_27.value != 0
       && VAR_36 == VAR_0
       && FUNC_3 (FUNC_7 (VAR_35))
       && VAR_29)
     VAR_27.value = VAR_28;


   else if (VAR_27.value != 0
     && VAR_27.value != VAR_23
     && FUNC_8 (FUNC_7 (VAR_27.value)) != VAR_35
     && (VAR_36 == VAR_5 || VAR_36 == VAR_0
         || VAR_36 == VAR_7))
     {
       FUNC_19 (1);
       continue;
     }

   if (VAR_15 != 0
       && (FUNC_25 (VAR_15, VAR_14)
    || FUNC_13 (VAR_15)))
     {
       FUNC_16 ("excess elements in array initializer");
       break;
     }


   if (VAR_27.value)
     {
       FUNC_18 (FUNC_26 (VAR_14, 1));
       FUNC_15 (VAR_27.value, VAR_30,
       VAR_35, VAR_14, 1);
       FUNC_4 (VAR_11);
     }

   VAR_14
     = FUNC_23 (VAR_4, VAR_14, VAR_9);

   if (!VAR_27.value)



     VAR_20 = VAR_14;
 }
      else if (FUNC_6 (VAR_18) == VAR_8)
 {
   tree VAR_37 = FUNC_8 (FUNC_7 (VAR_18));



   if (FUNC_25 (VAR_15, VAR_14))
     {
       FUNC_16 ("excess elements in vector initializer");
       break;
     }


   if (VAR_27.value)
     FUNC_15 (VAR_27.value, VAR_30,
     VAR_37, VAR_14, 1);

   VAR_14
     = FUNC_23 (VAR_4, VAR_14, VAR_9);

   if (!VAR_27.value)



     VAR_20 = VAR_14;
 }



      else if (VAR_18 != VAR_23
        && VAR_13 == 0)
 {
   FUNC_16 ("excess elements in scalar initializer");
   break;
 }
      else
 {
   if (VAR_27.value)
     FUNC_15 (VAR_27.value, VAR_30,
     VAR_18, VAR_2, 1);
   VAR_13 = 0;
 }



      if (VAR_16)
 {
   struct constructor_range_stack *VAR_38, *VAR_39;
   int VAR_40 = 0;

   VAR_39 = VAR_16;
   VAR_16 = 0;
   while (VAR_17 != VAR_39->stack)
     {
       FUNC_12 (VAR_17->implicit);
       FUNC_28 (FUNC_17 (1));
     }
   for (VAR_38 = VAR_39;
        !VAR_38->range_end || FUNC_24 (VAR_38->index, VAR_38->range_end);
        VAR_38 = VAR_38->prev)
     {
       FUNC_12 (VAR_17->implicit);
       FUNC_28 (FUNC_17 (1));
     }

   VAR_38->index = FUNC_23 (VAR_4, VAR_38->index, VAR_9);
   if (FUNC_24 (VAR_38->index, VAR_38->range_end) && !VAR_38->prev)
     VAR_40 = 1;

   while (1)
     {
       VAR_14 = VAR_38->index;
       VAR_13 = VAR_38->fields;
       if (VAR_40 && VAR_38->range_end && VAR_38->index == VAR_38->range_start)
  {
    VAR_40 = 0;
    VAR_38->prev = 0;
  }
       VAR_38 = VAR_38->next;
       if (!VAR_38)
  break;
       FUNC_19 (2);
       VAR_38->stack = VAR_17;
       if (VAR_38->range_end && FUNC_24 (VAR_38->index, VAR_38->range_end))
  VAR_38->index = VAR_38->range_start;
     }

   if (!VAR_40)
     VAR_16 = VAR_39;
   continue;
 }

      break;
    }

  VAR_16 = 0;
}
