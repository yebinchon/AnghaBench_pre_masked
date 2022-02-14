
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

enum reg_class
FUNC_10 (rtx VAR_17, enum reg_class VAR_18)
{
  enum machine_mode VAR_19 = FUNC_3 (VAR_17);



  if (VAR_18 == VAR_9)
    return VAR_9;


  if (VAR_17 == FUNC_0 (VAR_19))
    return VAR_18;




  if (FUNC_1 (VAR_17)
      && (FUNC_4 (VAR_18) || FUNC_5 (VAR_18)))
    return VAR_9;


  if (VAR_15 && !VAR_14 && FUNC_7 (VAR_19))
    return FUNC_6 (VAR_18) ? VAR_18 : VAR_9;


  if (FUNC_2 (VAR_17) == VAR_0 && FUNC_3 (VAR_17) != VAR_16)
    {

      if (FUNC_8 (VAR_18, VAR_8))
        return VAR_18;




      if (VAR_13
   && FUNC_9 (VAR_17))
 {

   if (VAR_18 == VAR_3)
     return VAR_2;
   if (VAR_18 == VAR_7)
     return VAR_6;
   if (VAR_18 == VAR_5)
     return VAR_4;
   if (VAR_18 == VAR_1 || VAR_18 == VAR_2)
     return VAR_18;
 }

      return VAR_9;
    }




  if (FUNC_2 (VAR_17) == VAR_10)
    return FUNC_8 (VAR_18, VAR_8) ? VAR_18 : VAR_9;



  if (FUNC_3 (VAR_17) == VAR_11 && !FUNC_1 (VAR_17))
    {
      if (FUNC_8 (VAR_18, VAR_12))
 return VAR_18;
      if (FUNC_8 (VAR_12, VAR_18))
 return VAR_12;
      return VAR_9;
    }

  return VAR_18;
}
