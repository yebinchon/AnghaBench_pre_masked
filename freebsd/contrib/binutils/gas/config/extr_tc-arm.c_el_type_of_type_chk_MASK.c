
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum neon_type_mask { ____Placeholder_neon_type_mask } neon_type_mask ;
typedef enum neon_el_type { ____Placeholder_neon_el_type } neon_el_type ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int
FUNC_0 (enum neon_el_type *VAR_29, unsigned *VAR_30,
                     enum neon_type_mask VAR_31)
{
  if ((VAR_31 & VAR_11) != 0)
    return VAR_0;

  if ((VAR_31 & (VAR_23 | VAR_27 | VAR_17 | VAR_10 | VAR_19)) != 0)
    *VAR_30 = 8;
  else if ((VAR_31 & (VAR_20 | VAR_24 | VAR_14 | VAR_7 | VAR_18)) != 0)
    *VAR_30 = 16;
  else if ((VAR_31 & (VAR_21 | VAR_25 | VAR_15 | VAR_8 | VAR_12)) != 0)
    *VAR_30 = 32;
  else if ((VAR_31 & (VAR_22 | VAR_26 | VAR_16 | VAR_9 | VAR_13)) != 0)
    *VAR_30 = 64;
  else
    return VAR_0;

  if ((VAR_31 & (VAR_23 | VAR_20 | VAR_21 | VAR_22)) != 0)
    *VAR_29 = VAR_4;
  else if ((VAR_31 & (VAR_27 | VAR_24 | VAR_25 | VAR_26)) != 0)
    *VAR_29 = VAR_5;
  else if ((VAR_31 & (VAR_17 | VAR_14 | VAR_15 | VAR_16)) != 0)
    *VAR_29 = VAR_2;
  else if ((VAR_31 & (VAR_10 | VAR_7 | VAR_8 | VAR_9)) != 0)
    *VAR_29 = VAR_6;
  else if ((VAR_31 & (VAR_19 | VAR_18)) != 0)
    *VAR_29 = VAR_3;
  else if ((VAR_31 & (VAR_12 | VAR_13)) != 0)
    *VAR_29 = VAR_1;
  else
    return VAR_0;

  return VAR_28;
}
