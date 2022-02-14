
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int * VAR_11 ;
 scalar_t__ FUNC_13 (int,int ) ;
 int FUNC_14 (scalar_t__) ;

enum reg_class
FUNC_15 (enum reg_class VAR_12,
        enum machine_mode VAR_13, rtx VAR_14, int VAR_15)
{
  enum reg_class VAR_16 = VAR_10 ? VAR_5 : VAR_2;
  int VAR_17 = -1;
  int VAR_18;

  if (FUNC_9 (VAR_14)|| FUNC_4 (VAR_14) == VAR_9)
    VAR_17 = FUNC_14 (VAR_14);

  VAR_18 = VAR_10 ? FUNC_7 (VAR_17) : FUNC_6 (VAR_17);

  if (FUNC_12 (VAR_14))
    {
      VAR_16 = VAR_3;
      if (FUNC_11 (VAR_11[(int) VAR_12], 25))
 return VAR_16;
    }





  if (FUNC_13 (VAR_12, VAR_0))
    {
      if (VAR_10 && VAR_15)
 {

   return VAR_5;
 }
      return VAR_18 ? VAR_7 : VAR_16;
    }
  if (FUNC_0 (VAR_17))
    {
      if (VAR_10 && ! VAR_15)
 {

   return VAR_5;
 }
      return VAR_12 == VAR_16 ? VAR_7 : VAR_16;
    }





  if (VAR_12 == VAR_8)
    {
      if (VAR_15)
 return VAR_1;
      return VAR_18 ? VAR_7 : VAR_16;
    }
  if (FUNC_10 (VAR_17))
    {
      if (! VAR_15)
 return VAR_1;
      return VAR_12 == VAR_16 ? VAR_7 : VAR_16;
    }

  if (VAR_12 == VAR_1)
    {
      if (FUNC_8 (VAR_14))
 {

   return VAR_7;
 }
      else if (FUNC_2 (VAR_14) && FUNC_5 (VAR_13) == VAR_6)
 {



   return VAR_7;
 }
      else if (VAR_18 || VAR_14 == FUNC_1 (VAR_13))
 {

   return VAR_7;
 }
      else if (FUNC_3 (VAR_17))
 {

   return VAR_7;
 }
      else
 {

   return VAR_16;
 }
    }



  if (VAR_10)
    {
      if (VAR_12 != VAR_5 && VAR_12 != VAR_4)
 {
   if (VAR_18)
     return VAR_7;
   return VAR_5;
 }
      if (! VAR_18)
 {
   if (VAR_12 == VAR_5 || VAR_12 == VAR_4)
     return VAR_7;
   return VAR_5;
 }
    }

  return VAR_7;
}
