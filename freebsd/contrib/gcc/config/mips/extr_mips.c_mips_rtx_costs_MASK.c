
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int fp_add; int fp_mult_sf; int fp_mult_df; int int_mult_si; int int_mult_di; int fp_div_sf; int fp_div_df; int int_div_di; int int_div_si; } ;







 int VAR_0 ;


 int FUNC_0 (int) ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;




 int FUNC_1 (int) ;

 int VAR_4 ;
 int const FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;


 int VAR_8 ;
 int FUNC_5 (int ) ;
 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;




 int VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;


 int VAR_16 ;
 int VAR_17 ;



 int FUNC_6 (int ,int) ;


 int FUNC_7 (int ,int) ;
 TYPE_1__* VAR_18 ;

__attribute__((used)) static bool
FUNC_8 (rtx VAR_19, int VAR_20, int VAR_21, int *VAR_22)
{
  enum machine_mode VAR_23 = FUNC_3 (VAR_19);
  bool VAR_24 = FUNC_1 (VAR_23);

  switch (VAR_20)
    {
    case 153:
      if (VAR_17)
        {


   if ((VAR_21) == 157 || (VAR_21) == 156
       || (VAR_21) == 143)
     {
       if (FUNC_4 (VAR_19) >= 1 && FUNC_4 (VAR_19) <= 8)
  *VAR_22 = 0;
       else
  *VAR_22 = FUNC_0 (1);
       return 1;
     }


   if ((VAR_21) == 129
       && FUNC_4 (VAR_19) >= 0 && FUNC_4 (VAR_19) < 0x10000)
     {
       *VAR_22 = 0;
       return 1;
     }




   if (((VAR_21) == VAR_10 || (VAR_21) == VAR_8
        || (VAR_21) == VAR_4 || (VAR_21) == VAR_6
        || (VAR_21) == VAR_11 || (VAR_21) == VAR_9
        || (VAR_21) == VAR_5 || (VAR_21) == VAR_7)
       && FUNC_4 (VAR_19) >= -0x8000 && FUNC_4 (VAR_19) < 0x8000)
     {
       *VAR_22 = 0;
       return 1;
     }


   if (((VAR_21) == VAR_3 || (VAR_21) == VAR_12)
       && FUNC_4 (VAR_19) == 0)
     {
       *VAR_22 = 0;
       return 1;
     }
   if (VAR_21 == VAR_13
       && FUNC_4 (VAR_19) >= 0
       && FUNC_4 (VAR_19) < 256)
     {
       *VAR_22 = 0;
       return 1;
     }
 }
      else
 {

   *VAR_22 = 0;
   return 1;
 }




    case 155:
    case 133:
    case 145:
    case 154:
      if (FUNC_5 (VAR_19))
 {
   *VAR_22 = FUNC_0 (1);
   return 1;
 }
      else
 {

   *VAR_22 = VAR_0;
   return 1;
 }

    case 142:
      {


 int VAR_25 = FUNC_7 (FUNC_6 (VAR_19, 0), FUNC_3 (VAR_19));
 if (VAR_25 > 0)
   {
     *VAR_22 = FUNC_0 (VAR_25 + 1);
     return 1;
   }
 return 0;
      }

    case 151:
      *VAR_22 = FUNC_0 (6);
      return 1;

    case 137:
      *VAR_22 = FUNC_0 ((VAR_23 == VAR_2 && !VAR_16) ? 2 : 1);
      return 1;

    case 158:
    case 146:
    case 129:
      if (VAR_23 == VAR_2 && !VAR_16)
        {
          *VAR_22 = FUNC_0 (2);
          return 1;
        }
      return 0;

    case 157:
    case 156:
    case 143:
      if (VAR_23 == VAR_2 && !VAR_16)
        {
          *VAR_22 = FUNC_0 ((FUNC_2 (FUNC_6 (VAR_19, 1)) == 153)
                                  ? 4 : 12);
          return 1;
        }
      return 0;

    case 159:
      if (VAR_24)
        *VAR_22 = FUNC_0 (1);
      else
        *VAR_22 = FUNC_0 (4);
      return 1;

    case 144:
      *VAR_22 = FUNC_0 (1);
      return 1;

    case 136:
    case 141:
      if (VAR_24)
 {
   *VAR_22 = VAR_18->fp_add;
   return 1;
 }

      else if (VAR_23 == VAR_2 && !VAR_16)
        {
          *VAR_22 = FUNC_0 (4);
          return 1;
        }
      return 0;

    case 138:
      if (VAR_23 == VAR_2 && !VAR_16)
        {
          *VAR_22 = FUNC_0 (4);
          return 1;
        }
      return 0;

    case 139:
      if (VAR_23 == VAR_14)
 *VAR_22 = VAR_18->fp_mult_sf;

      else if (VAR_23 == VAR_1)
 *VAR_22 = VAR_18->fp_mult_df;

      else if (VAR_23 == VAR_15)
 *VAR_22 = VAR_18->int_mult_si;

      else
 *VAR_22 = VAR_18->int_mult_di;

      return 1;

    case 152:
    case 140:
      if (VAR_24)
 {
   if (VAR_23 == VAR_14)
     *VAR_22 = VAR_18->fp_div_sf;
   else
     *VAR_22 = VAR_18->fp_div_df;

   return 1;
 }


    case 132:
    case 131:
      if (VAR_23 == VAR_2)
        *VAR_22 = VAR_18->int_div_di;
      else
 *VAR_22 = VAR_18->int_div_si;

      return 1;

    case 135:



      if (VAR_16 && VAR_23 == VAR_2
          && FUNC_3 (FUNC_6 (VAR_19, 0)) == VAR_15)
        *VAR_22 = FUNC_0 (1);
      else
        *VAR_22 = FUNC_0 (2);
      return 1;

    case 128:
      if (VAR_16 && VAR_23 == VAR_2
          && FUNC_3 (FUNC_6 (VAR_19, 0)) == VAR_15)
        *VAR_22 = FUNC_0 (2);
      else
        *VAR_22 = FUNC_0 (1);
      return 1;

    case 149:
    case 130:
    case 150:
    case 148:
    case 147:
    case 134:
      *VAR_22 = VAR_18->fp_add;
      return 1;

    default:
      return 0;
    }
}
