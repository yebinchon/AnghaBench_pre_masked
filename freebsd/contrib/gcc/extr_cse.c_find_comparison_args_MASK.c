
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {scalar_t__ exp; struct table_elt* next_same_value; scalar_t__ is_const; struct table_elt* first_same_value; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef scalar_t__ REAL_VALUE_TYPE ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_11 (scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 struct table_elt* FUNC_13 (scalar_t__,int ,int) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static enum rtx_code
FUNC_16 (enum rtx_code VAR_11, rtx *VAR_12, rtx *VAR_13,
        enum machine_mode *VAR_14, enum machine_mode *VAR_15)
{
  rtx VAR_16, VAR_17;

  VAR_16 = *VAR_12, VAR_17 = *VAR_13;



  while (VAR_17 == FUNC_1 (FUNC_4 (VAR_16)))
    {

      rtx VAR_18 = 0;
      int VAR_19 = 0;
      struct table_elt *VAR_20 = 0;






      if (FUNC_3 (VAR_16) == VAR_0 && VAR_17 == VAR_10)
 VAR_18 = VAR_16;




      else if (FUNC_0 (VAR_16))
 {




   if (VAR_11 == VAR_6
       || (FUNC_6 (FUNC_4 (VAR_16)) == VAR_5
    && VAR_11 == VAR_4 && VAR_8 == -1)





       )
     VAR_18 = VAR_16;
   else if (VAR_11 == VAR_1
     || (FUNC_6 (FUNC_4 (VAR_16)) == VAR_5
         && VAR_11 == VAR_2 && VAR_8 == -1)





     )
     VAR_18 = VAR_16, VAR_19 = 1;
 }







      if (VAR_18 == 0)


 VAR_20 = FUNC_13 (VAR_16, FUNC_8 (VAR_16, FUNC_4 (VAR_16)), FUNC_4 (VAR_16));
      if (VAR_20)
 {
   VAR_20 = VAR_20->first_same_value;
   if (VAR_20->is_const)
     break;
 }

      for (; VAR_20; VAR_20 = VAR_20->next_same_value)
 {
   enum machine_mode VAR_21 = FUNC_4 (VAR_20->exp);





   if (! FUNC_11 (VAR_20->exp, VAR_20->exp, 1, 0))
     continue;

   if (FUNC_3 (VAR_20->exp) == VAR_0







       || ((VAR_11 == VAR_6
     || (VAR_11 == VAR_4
         && FUNC_6 (VAR_21) == VAR_5
         && (FUNC_5 (VAR_21)
      <= VAR_3)
         && (VAR_8
      & ((HOST_WIDE_INT) 1
         << (FUNC_5 (VAR_21) - 1))))






     )
    && FUNC_0 (VAR_20->exp)))
     {
       VAR_18 = VAR_20->exp;
       break;
     }
   else if ((VAR_11 == VAR_1
      || (VAR_11 == VAR_2
   && FUNC_6 (VAR_21) == VAR_5
   && (FUNC_5 (VAR_21)
       <= VAR_3)
   && (VAR_8
       & ((HOST_WIDE_INT) 1
          << (FUNC_5 (VAR_21) - 1))))






      )
     && FUNC_0 (VAR_20->exp))
     {
       VAR_19 = 1;
       VAR_18 = VAR_20->exp;
       break;
     }




   else if (!FUNC_15 (VAR_20->exp))
     {
       VAR_16 = VAR_20->exp;
       continue;
     }
 }



      if (VAR_18 == 0)
 break;




      if (VAR_19)
 {
   enum rtx_code VAR_22 = FUNC_14 (VAR_18, VAR_7);
   if (VAR_22 == VAR_9)
     break;
   else
     VAR_11 = VAR_22;
 }
      else if (FUNC_0 (VAR_18))
 VAR_11 = FUNC_3 (VAR_18);
      VAR_16 = FUNC_10 (VAR_18, 0), VAR_17 = FUNC_10 (VAR_18, 1);
    }



  *VAR_14 = FUNC_4 (VAR_16), *VAR_15 = FUNC_4 (VAR_17);
  *VAR_12 = FUNC_12 (VAR_16, 0), *VAR_13 = FUNC_12 (VAR_17, 0);

  return VAR_11;
}
