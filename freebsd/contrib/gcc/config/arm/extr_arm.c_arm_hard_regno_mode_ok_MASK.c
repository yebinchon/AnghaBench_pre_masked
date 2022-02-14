
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (int) ;
 unsigned int VAR_24 ;

int
FUNC_8 (unsigned int VAR_25, enum machine_mode VAR_26)
{
  if (FUNC_1 (VAR_26) == VAR_11)
    return (VAR_25 == VAR_1
     || (VAR_17 && VAR_22
  && VAR_25 == VAR_24));

  if (VAR_21)





    return (FUNC_0 (VAR_26) < 2) || (VAR_25 < VAR_10);

  if (VAR_17 && VAR_19
      && FUNC_3 (VAR_25))





    return (FUNC_1 (VAR_26) == VAR_12) || (VAR_26 == VAR_3);

  if (VAR_17 && VAR_22
      && FUNC_6 (VAR_25))
    {
      if (VAR_26 == VAR_14 || VAR_26 == VAR_15)
 return VAR_23;


      if (VAR_26 == VAR_2)
 return ((VAR_25 - VAR_6) & 1) == 0;
      return VAR_4;
    }

  if (VAR_20)
    {
      if (FUNC_4 (VAR_25))
 return VAR_26 == VAR_15;

      if (FUNC_5 (VAR_25))
 return FUNC_7 (VAR_26);
    }




  if (VAR_25 <= VAR_8)
    return !(VAR_18 && FUNC_2 (VAR_26) > 4 && (VAR_25 & 1) != 0);

  if (VAR_25 == VAR_7
      || VAR_25 == VAR_0)

    return FUNC_1 (VAR_26) == VAR_13;



  return (VAR_17 && VAR_16
   && FUNC_1 (VAR_26) == VAR_12
   && VAR_25 >= VAR_5
   && VAR_25 <= VAR_9);
}
