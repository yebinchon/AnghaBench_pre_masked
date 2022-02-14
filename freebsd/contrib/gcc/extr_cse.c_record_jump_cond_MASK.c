
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {scalar_t__ first_same_value; int in_memory; } ;
struct qty_table_elem {int comparison_code; int comparison_qty; scalar_t__ comparison_const; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned int FUNC_5 (scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 void* FUNC_8 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_5 ;
 struct table_elt* FUNC_11 (scalar_t__,int *,unsigned int,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int *,int ) ;
 struct table_elt* FUNC_13 (scalar_t__,unsigned int,int) ;
 int FUNC_14 (struct table_elt*,struct table_elt*) ;
 struct qty_table_elem* VAR_6 ;
 scalar_t__ FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;

__attribute__((used)) static void
FUNC_19 (enum rtx_code VAR_7, enum machine_mode VAR_8, rtx VAR_9,
    rtx VAR_10, int VAR_11)
{
  unsigned VAR_12, VAR_13;
  int VAR_14, VAR_15;
  struct table_elt *VAR_16, *VAR_17;







  if (VAR_7 == VAR_0 && FUNC_2 (VAR_9) == VAR_3
      && (FUNC_4 (FUNC_3 (VAR_9))
   > FUNC_4 (FUNC_3 (FUNC_9 (VAR_9)))))
    {
      enum machine_mode VAR_18 = FUNC_3 (FUNC_9 (VAR_9));
      rtx VAR_19 = FUNC_15 (VAR_18, VAR_10);
      if (VAR_19)
 FUNC_19 (VAR_7, VAR_8, FUNC_9 (VAR_9), VAR_19,
     VAR_11);
    }

  if (VAR_7 == VAR_0 && FUNC_2 (VAR_10) == VAR_3
      && (FUNC_4 (FUNC_3 (VAR_10))
   > FUNC_4 (FUNC_3 (FUNC_9 (VAR_10)))))
    {
      enum machine_mode VAR_20 = FUNC_3 (FUNC_9 (VAR_10));
      rtx VAR_21 = FUNC_15 (VAR_20, VAR_9);
      if (VAR_21)
 FUNC_19 (VAR_7, VAR_8, FUNC_9 (VAR_10), VAR_21,
     VAR_11);
    }
  if (VAR_7 == VAR_1 && FUNC_2 (VAR_9) == VAR_3
      && FUNC_18 (VAR_9)
      && (FUNC_4 (FUNC_3 (VAR_9))
   < FUNC_4 (FUNC_3 (FUNC_9 (VAR_9)))))
    {
      enum machine_mode VAR_22 = FUNC_3 (FUNC_9 (VAR_9));
      rtx VAR_23 = FUNC_15 (VAR_22, VAR_10);
      if (VAR_23)
 FUNC_19 (VAR_7, VAR_8, FUNC_9 (VAR_9), VAR_23,
     VAR_11);
    }

  if (VAR_7 == VAR_1 && FUNC_2 (VAR_10) == VAR_3
      && FUNC_18 (VAR_10)
      && (FUNC_4 (FUNC_3 (VAR_10))
   < FUNC_4 (FUNC_3 (FUNC_9 (VAR_10)))))
    {
      enum machine_mode VAR_24 = FUNC_3 (FUNC_9 (VAR_10));
      rtx VAR_25 = FUNC_15 (VAR_24, VAR_9);
      if (VAR_25)
 FUNC_19 (VAR_7, VAR_8, FUNC_9 (VAR_10), VAR_25,
     VAR_11);
    }



  VAR_4 = 0;
  VAR_5 = 0;
  VAR_12 = FUNC_5 (VAR_9, VAR_8);
  VAR_14 = VAR_5;

  if (VAR_4)
    return;

  VAR_4 = 0;
  VAR_5 = 0;
  VAR_13 = FUNC_5 (VAR_10, VAR_8);
  VAR_15 = VAR_5;

  if (VAR_4)
    return;


  VAR_16 = FUNC_13 (VAR_9, VAR_12, VAR_8);
  VAR_17 = FUNC_13 (VAR_10, VAR_13, VAR_8);



  if ((VAR_16 != 0 && VAR_17 != 0
       && VAR_16->first_same_value == VAR_17->first_same_value)
      || VAR_9 == VAR_10 || FUNC_17 (VAR_9, VAR_10))
    return;







  if (VAR_7 != VAR_0 || FUNC_1 (FUNC_3 (VAR_9)))
    {
      struct qty_table_elem *VAR_26;
      int VAR_27;





      if (!FUNC_7 (VAR_10))
 VAR_10 = FUNC_10 (VAR_10);

      if ((VAR_11 && FUNC_1 (VAR_8))
   || !FUNC_7 (VAR_9) || VAR_10 == 0)
 return;



      if (VAR_16 == 0)
 {
   if (FUNC_12 (VAR_9, ((void*)0), 0))
     {
       FUNC_16 (VAR_9);
       VAR_12 = FUNC_5 (VAR_9, VAR_8);




       if (! FUNC_0 (VAR_10))
  VAR_13 = FUNC_5 (VAR_10,VAR_8);
     }

   VAR_16 = FUNC_11 (VAR_9, ((void*)0), VAR_12, VAR_8);
   VAR_16->in_memory = VAR_14;
 }

      VAR_27 = FUNC_8 (FUNC_6 (VAR_9));
      VAR_26 = &VAR_6[VAR_27];

      VAR_26->comparison_code = VAR_7;
      if (FUNC_7 (VAR_10))
 {

   VAR_17 = FUNC_13 (VAR_10, VAR_13, VAR_8);


   if (VAR_17 == 0)
     {
       if (FUNC_12 (VAR_10, ((void*)0), 0))
  {
    FUNC_16 (VAR_10);
    VAR_13 = FUNC_5 (VAR_10, VAR_8);
  }

       VAR_17 = FUNC_11 (VAR_10, ((void*)0), VAR_13, VAR_8);
       VAR_17->in_memory = VAR_15;
     }

   VAR_26->comparison_const = VAR_2;
   VAR_26->comparison_qty = FUNC_8 (FUNC_6 (VAR_10));
 }
      else
 {
   VAR_26->comparison_const = VAR_10;
   VAR_26->comparison_qty = -1;
 }

      return;
    }




  if (VAR_16 == 0)
    {
      if (FUNC_12 (VAR_9, ((void*)0), 0))
 {
   FUNC_16 (VAR_9);
   VAR_12 = FUNC_5 (VAR_9, VAR_8);
 }

      VAR_16 = FUNC_11 (VAR_9, ((void*)0), VAR_12, VAR_8);
      VAR_16->in_memory = VAR_14;
    }

  if (VAR_17 == 0)
    {
      if (FUNC_12 (VAR_10, ((void*)0), 0))
 {
   FUNC_16 (VAR_10);
   VAR_13 = FUNC_5 (VAR_10, VAR_8);
 }

      VAR_17 = FUNC_11 (VAR_10, ((void*)0), VAR_13, VAR_8);
      VAR_17->in_memory = VAR_15;
    }

  FUNC_14 (VAR_16, VAR_17);
}
