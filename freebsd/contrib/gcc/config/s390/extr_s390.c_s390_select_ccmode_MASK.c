
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;



 int VAR_15 ;
 int FUNC_4 (int ) ;





 int VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;






 int VAR_22 ;
 int FUNC_5 (int ,int) ;
 int VAR_23 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;

enum machine_mode
FUNC_9 (enum rtx_code VAR_24, rtx VAR_25, rtx VAR_26)
{
  switch (VAR_24)
    {
      case 145:
      case 135:
 if ((FUNC_1 (VAR_25) == VAR_18 || FUNC_1 (VAR_25) == VAR_0)
     && FUNC_3 (FUNC_2 (VAR_25)) == VAR_17)
   return VAR_3;
 if (FUNC_1 (VAR_25) == VAR_19 && FUNC_1 (FUNC_5 (VAR_25, 1)) == VAR_14
     && FUNC_0 (FUNC_4 (FUNC_5 (VAR_25, 1))))
   return VAR_3;
 if ((FUNC_1 (VAR_25) == VAR_19 || FUNC_1 (VAR_25) == VAR_16
      || FUNC_1 (VAR_26) == VAR_18)
     && FUNC_3 (FUNC_2 (VAR_25)) == VAR_17)
   return VAR_6;

 if (FUNC_1 (VAR_25) == VAR_1)
   {

     enum machine_mode VAR_27;
     VAR_27 = FUNC_8 (FUNC_5 (VAR_25, 1), VAR_26, 1);
     if (VAR_27 != VAR_22)
       {


         return VAR_27 == VAR_10 ? VAR_13 : VAR_27;
       }
   }

 if (FUNC_7 (VAR_25, VAR_15)
     && FUNC_1 (VAR_26) == VAR_14
     && (FUNC_4 (VAR_26) == -1 || FUNC_4 (VAR_26) == 65535))
   return VAR_9;
 if (FUNC_7 (VAR_25, VAR_20)
     && FUNC_1 (VAR_26) == VAR_14
     && (FUNC_4 (VAR_26) == -1 || FUNC_4 (VAR_26) == 255))
   return VAR_9;

 return VAR_13;

      case 140:
      case 138:
      case 144:
      case 142:




 if ((FUNC_1 (VAR_25) == VAR_18 || FUNC_1 (VAR_25) == VAR_0)
     && FUNC_3 (FUNC_2 (VAR_25)) == VAR_17)
   return VAR_3;






 if (FUNC_1 (VAR_25) == VAR_19 && FUNC_1 (FUNC_5 (VAR_25, 1)) == VAR_14
     && FUNC_0 (FUNC_4 (FUNC_5 (VAR_25, 1))))
   {
     if (FUNC_4 (FUNC_5((VAR_25), 1)) < 0)
       return VAR_2;
     else
       return VAR_3;
   }

      case 128:
      case 134:
      case 133:
      case 130:
      case 129:
      case 132:
      case 131:
      case 137:
 if ((FUNC_1 (VAR_25) == VAR_21 || FUNC_1 (VAR_25) == VAR_23)
     && FUNC_1 (VAR_26) != VAR_14)
   return VAR_7;
 return VAR_8;

      case 136:
      case 143:
 if (FUNC_1 (VAR_25) == VAR_19
     && FUNC_3 (FUNC_2 (VAR_25)) == VAR_17)
   return VAR_4;

 if ((FUNC_1 (VAR_25) == VAR_21 || FUNC_1 (VAR_25) == VAR_23)
     && FUNC_1 (VAR_26) != VAR_14)
   return VAR_11;
 return VAR_12;

      case 139:
      case 141:
 if (FUNC_1 (VAR_25) == VAR_16
     && FUNC_3 (FUNC_2 (VAR_25)) == VAR_17)
   return VAR_5;

 if ((FUNC_1 (VAR_25) == VAR_21 || FUNC_1 (VAR_25) == VAR_23)
     && FUNC_1 (VAR_26) != VAR_14)
   return VAR_11;
 return VAR_12;

      default:
 FUNC_6 ();
    }
}
