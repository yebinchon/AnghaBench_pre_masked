
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum neon_el_type { ____Placeholder_neon_el_type } neon_el_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;

__attribute__((used)) static void
FUNC_0 (unsigned VAR_13, enum neon_el_type *VAR_14,
                       unsigned *VAR_15)
{


  if ((VAR_13 & VAR_6) != 0)
    {
      if ((VAR_13 & VAR_8) != 0)
 *VAR_15 /= 2;
      else if ((VAR_13 & VAR_5) != 0)
 *VAR_15 *= 2;
      if ((VAR_13 & VAR_10) != 0)
 *VAR_14 = VAR_2;
      else if ((VAR_13 & VAR_12) != 0)
        *VAR_14 = VAR_3;
      else if ((VAR_13 & VAR_9) != 0)
        *VAR_14 = VAR_1;
      else if ((VAR_13 & VAR_7) != 0)
        *VAR_14 = VAR_0;
      else if ((VAR_13 & VAR_11) != 0)
        *VAR_14 = VAR_4;
    }
}
