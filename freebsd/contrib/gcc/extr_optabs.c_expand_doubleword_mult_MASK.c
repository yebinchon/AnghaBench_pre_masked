
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum optab_methods { ____Placeholder_optab_methods } optab_methods ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__,int,int,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static rtx
FUNC_6 (enum machine_mode VAR_12, rtx VAR_13, rtx VAR_14, rtx VAR_15,
         bool VAR_16, enum optab_methods VAR_17)
{
  int VAR_18 = (VAR_3 ? 1 : 0);
  int VAR_19 = (VAR_3 ? 0 : 1);
  rtx VAR_20 = VAR_16 ? VAR_1 : FUNC_0 (VAR_0 - 1);
  rtx VAR_21, VAR_22, VAR_23, VAR_24;

  rtx VAR_25 = FUNC_5 (VAR_13, VAR_19, VAR_12);
  rtx VAR_26 = FUNC_5 (VAR_13, VAR_18, VAR_12);
  rtx VAR_27 = FUNC_5 (VAR_14, VAR_19, VAR_12);
  rtx VAR_28 = FUNC_5 (VAR_14, VAR_18, VAR_12);
  if (!VAR_16)
    {

      VAR_24 = FUNC_3 (VAR_11, VAR_6, VAR_26, VAR_20,
      VAR_1, 1, VAR_17);
      if (VAR_24)
 VAR_25 = FUNC_3 (VAR_11, VAR_4, VAR_25, VAR_24,
     VAR_1, 0, VAR_2);
      else
 {
   VAR_24 = FUNC_3 (VAR_11, VAR_5, VAR_26, VAR_20,
          VAR_1, 0, VAR_17);
   if (!VAR_24)
     return VAR_1;
   VAR_25 = FUNC_3 (VAR_11, VAR_9, VAR_25, VAR_24,
       VAR_1, 0, VAR_2);
 }

      if (!VAR_25)
 return VAR_1;
    }

  VAR_22 = FUNC_3 (VAR_11, VAR_7, VAR_25, VAR_28,
    VAR_1, 0, VAR_2);
  if (!VAR_22)
    return VAR_1;



  if (!VAR_16)
    {

      VAR_24 = FUNC_3 (VAR_11, VAR_6, VAR_28, VAR_20,
      VAR_1, 1, VAR_17);
      if (VAR_24)
 VAR_27 = FUNC_3 (VAR_11, VAR_4, VAR_27, VAR_24,
     VAR_1, 0, VAR_2);
      else
 {
   VAR_24 = FUNC_3 (VAR_11, VAR_5, VAR_28, VAR_20,
          VAR_1, 0, VAR_17);
   if (!VAR_24)
     return VAR_1;
   VAR_27 = FUNC_3 (VAR_11, VAR_9, VAR_27, VAR_24,
       VAR_1, 0, VAR_2);
 }

      if (!VAR_27)
 return VAR_1;
    }

  VAR_24 = FUNC_3 (VAR_11, VAR_7, VAR_27, VAR_26,
         VAR_1, 0, VAR_2);
  if (!VAR_24)
    return VAR_1;



  VAR_22 = FUNC_3 (VAR_11, VAR_4, VAR_22, VAR_24,
    VAR_22, 0, VAR_2);

  if (VAR_15 && !FUNC_1 (VAR_15))
    VAR_15 = VAR_1;

  if (VAR_16)
    VAR_21 = FUNC_3 (VAR_12, VAR_10, VAR_26, VAR_28,
       VAR_15, 1, VAR_2);
  else
    VAR_21 = FUNC_3 (VAR_12, VAR_8, VAR_26, VAR_28,
       VAR_15, 1, VAR_2);

  if (!VAR_21)
    return VAR_1;

  VAR_23 = FUNC_4 (VAR_21, VAR_19, 1, VAR_12);
  VAR_22 = FUNC_3 (VAR_11, VAR_4, VAR_23, VAR_22,
    FUNC_1 (VAR_23) ? VAR_23 : VAR_22,
    0, VAR_2);
  FUNC_2 (VAR_23, VAR_22);
  return VAR_21;
}
