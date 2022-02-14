
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s390_address {int pointer; int literal_pool; scalar_t__ disp; scalar_t__ indx; scalar_t__ base; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ base_reg; scalar_t__ decomposed_literal_pool_addresses_ok_p; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;


 int VAR_18 ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int) ;
 int FUNC_12 (scalar_t__,int ) ;
 scalar_t__ VAR_19 ;
 TYPE_2__* VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_13 (int,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,int ,int) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;

__attribute__((used)) static int
FUNC_19 (rtx VAR_28, struct s390_address *VAR_29)
{
  HOST_WIDE_INT VAR_30 = 0;
  rtx VAR_31 = VAR_7;
  rtx VAR_32 = VAR_7;
  rtx VAR_33 = VAR_7;
  rtx VAR_34;
  bool VAR_35 = 0;
  bool VAR_36 = 0;
  bool VAR_37 = 0;
  bool VAR_38 = 0;






  rtx VAR_39 = FUNC_15 (VAR_10, VAR_0);



  if (FUNC_2 (VAR_28) == VAR_11 || FUNC_2 (VAR_28) == VAR_15)
    VAR_31 = VAR_28;

  else if (FUNC_2 (VAR_28) == VAR_9)
    {
      rtx VAR_40 = FUNC_9 (VAR_28, 0);
      rtx VAR_41 = FUNC_9 (VAR_28, 1);
      enum rtx_code VAR_42 = FUNC_2 (VAR_40);
      enum rtx_code VAR_43 = FUNC_2 (VAR_41);

      if (VAR_42 == VAR_11 || VAR_42 == VAR_15)
 {
   if (VAR_43 == VAR_11 || VAR_43 == VAR_15)
     {
       VAR_32 = VAR_40;
       VAR_31 = VAR_41;
     }

   else
     {
       VAR_31 = VAR_40;
       VAR_33 = VAR_41;
     }
 }

      else if (VAR_42 == VAR_9)
 {
   VAR_32 = FUNC_9 (VAR_40, 0);
   VAR_31 = FUNC_9 (VAR_40, 1);
   VAR_33 = VAR_41;
 }

      else
 {
   return 0;
 }
    }

  else
    VAR_33 = VAR_28;


  VAR_34 = VAR_33;
  if (VAR_33)
    {
      if (FUNC_2 (VAR_33) == VAR_2)
 {
   VAR_30 = FUNC_5 (VAR_33);
   VAR_33 = VAR_7;
 }
      else if (FUNC_2 (VAR_33) == VAR_1
        && FUNC_2 (FUNC_9 (VAR_33, 0)) == VAR_9
        && FUNC_2 (FUNC_9 (FUNC_9 (VAR_33, 0), 1)) == VAR_2)
 {
   VAR_30 = FUNC_5 (FUNC_9 (FUNC_9 (VAR_33, 0), 1));
   VAR_33 = FUNC_9 (FUNC_9 (VAR_33, 0), 0);
 }
    }


  if (VAR_33 && FUNC_2 (VAR_33) == VAR_1)
    VAR_33 = FUNC_9 (VAR_33, 0);



  if (VAR_33 && FUNC_2 (VAR_33) == VAR_14 && FUNC_0 (VAR_33))
    {

      if (!VAR_31)
        VAR_31 = VAR_39, VAR_38 = 1;
      else if (!VAR_32)
        VAR_32 = VAR_39, VAR_38 = 1;
      else
        return 0;


      VAR_33 = FUNC_16 (VAR_10, FUNC_13 (1, VAR_33),
        VAR_18);
    }


  if (VAR_31)
    {
      if (FUNC_2 (VAR_31) == VAR_15)
 switch (FUNC_10 (VAR_31, 1))
   {
   case 129:
     if (!VAR_33)
       VAR_33 = FUNC_16 (VAR_10,
         FUNC_13 (1, FUNC_11 (VAR_31, 0, 0)),
         VAR_18);
     else
       return 0;

     VAR_31 = FUNC_11 (VAR_31, 0, 1);
     break;

   case 128:
     if (FUNC_12 (VAR_31, 0) == 1)
       VAR_31 = VAR_39, VAR_38 = 1;
     else
       VAR_31 = FUNC_11 (VAR_31, 0, 1);
     break;

   default:
     return 0;
   }

      if (!FUNC_7 (VAR_31)
   || (FUNC_3 (VAR_31) != VAR_12
       && FUNC_3 (VAR_31) != VAR_10))
 return 0;

      if (FUNC_6 (VAR_31) == VAR_13
   || FUNC_6 (VAR_31) == VAR_3
   || ((VAR_24 || VAR_25)
       && VAR_22
       && FUNC_6 (VAR_31) == VAR_4)
   || FUNC_6 (VAR_31) == VAR_0
          || (VAR_21
              && FUNC_6 (VAR_31) == VAR_8))
        VAR_35 = VAR_36 = 1;

      if ((VAR_24 || VAR_25)
   && VAR_31 == VAR_20->machine->base_reg)
        VAR_35 = VAR_36 = VAR_38 = 1;
    }


  if (VAR_32)
    {
      if (FUNC_2 (VAR_32) == VAR_15)
 switch (FUNC_10 (VAR_32, 1))
   {
   case 129:
     if (!VAR_33)
       VAR_33 = FUNC_16 (VAR_10,
         FUNC_13 (1, FUNC_11 (VAR_32, 0, 0)),
         VAR_18);
     else
       return 0;

     VAR_32 = FUNC_11 (VAR_32, 0, 1);
     break;

   case 128:
     if (FUNC_12 (VAR_32, 0) == 1)
       VAR_32 = VAR_39, VAR_38 = 1;
     else
       VAR_32 = FUNC_11 (VAR_32, 0, 1);
     break;

   default:
     return 0;
   }

      if (!FUNC_7 (VAR_32)
   || (FUNC_3 (VAR_32) != VAR_12
       && FUNC_3 (VAR_32) != VAR_10))
 return 0;

      if (FUNC_6 (VAR_32) == VAR_13
   || FUNC_6 (VAR_32) == VAR_3
   || ((VAR_24 || VAR_25)
       && VAR_22
       && FUNC_6 (VAR_32) == VAR_4)
   || FUNC_6 (VAR_32) == VAR_0
          || (VAR_21
              && FUNC_6 (VAR_32) == VAR_8))
        VAR_35 = VAR_37 = 1;

      if ((VAR_24 || VAR_25)
   && VAR_32 == VAR_20->machine->base_reg)
        VAR_35 = VAR_37 = VAR_38 = 1;
    }


  if (VAR_31 && VAR_32 && !VAR_36
      && (VAR_37 || (!FUNC_8 (VAR_31) && FUNC_8 (VAR_32))))
    {
      rtx VAR_44 = VAR_31;
      VAR_31 = VAR_32;
      VAR_32 = VAR_44;
    }


  if (!VAR_33)
    {
      if (VAR_31 != VAR_19
   && VAR_32 != VAR_19
   && VAR_31 != VAR_26
   && VAR_32 != VAR_26
   && VAR_31 != VAR_23
   && VAR_32 != VAR_23
   && VAR_31 != VAR_27
   && VAR_32 != VAR_27)
 if (!FUNC_1 (VAR_30))
   return 0;
    }
  else
    {

      VAR_35 = 1;



      if (FUNC_2 (VAR_33) == VAR_15
          && (FUNC_10 (VAR_33, 1) == VAR_16
       || FUNC_10 (VAR_33, 1) == VAR_17)
   && VAR_21 == 1)
        {
   ;
        }


      else if (VAR_20 && VAR_20->machine
        && VAR_20->machine->decomposed_literal_pool_addresses_ok_p
        && FUNC_2 (VAR_33) == VAR_6
               && FUNC_2 (FUNC_9 (VAR_33, 0)) == VAR_5
               && FUNC_2 (FUNC_9 (VAR_33, 1)) == VAR_5)
        {
   ;
        }


      else if (FUNC_2 (VAR_33) == VAR_15
        && FUNC_10 (VAR_33, 1) == VAR_18)
        {
   VAR_34 = FUNC_14 (VAR_10, VAR_33);
   if (VAR_30)
     {


       rtx VAR_45 = FUNC_11 (VAR_33, 0, 0);
       if (VAR_30 >= FUNC_4 (FUNC_17 (VAR_45)))
  return 0;

              VAR_34 = FUNC_18 (VAR_34, VAR_30);
     }
        }

      else
 return 0;
    }

  if (!VAR_31 && !VAR_32)
    VAR_35 = 1;

  if (VAR_29)
    {
      VAR_29->base = VAR_31;
      VAR_29->indx = VAR_32;
      VAR_29->disp = VAR_34;
      VAR_29->pointer = VAR_35;
      VAR_29->literal_pool = VAR_38;
    }

  return 1;
}
