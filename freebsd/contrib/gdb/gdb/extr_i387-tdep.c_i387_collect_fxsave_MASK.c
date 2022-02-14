
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch_tdep {scalar_t__ st0_regnum; scalar_t__ num_xmm_regs; } ;


 int* FUNC_0 (char*,int) ;
 int* FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 struct gdbarch_tdep* FUNC_3 (int ) ;
 int FUNC_4 (int*,unsigned char*,int) ;
 int FUNC_5 (struct regcache const*,int,...) ;

void
FUNC_6 (const struct regcache *VAR_10, int VAR_11, void *VAR_12)
{
  struct gdbarch_tdep *VAR_13 = FUNC_3 (VAR_9);
  char *VAR_14 = VAR_12;
  int VAR_15;

  FUNC_2 (VAR_13->st0_regnum >= VAR_0);
  FUNC_2 (VAR_13->num_xmm_regs > 0);







  for (VAR_15 = VAR_13->st0_regnum; VAR_15 < VAR_6; VAR_15++)
    if (VAR_11 == -1 || VAR_11 == VAR_15)
      {


 if (VAR_15 >= VAR_1 && VAR_15 < VAR_8
     && VAR_15 != VAR_2 && VAR_15 != VAR_3)
   {
     unsigned char VAR_16[4];

     FUNC_5 (VAR_10, VAR_15, VAR_16);

     if (VAR_15 == VAR_4)
       {


  VAR_16[1] &= ((1 << 3) - 1);
  VAR_16[1] |= ((FUNC_0 (VAR_14, VAR_15))[1] & ~((1 << 3) - 1));
       }
     else if (VAR_15 == VAR_5)
       {


  unsigned short VAR_17;
  int VAR_18;

  VAR_17 = (VAR_16[1] << 8) | VAR_16[0];
  VAR_16[0] = 0;
  VAR_16[1] = 0;

  for (VAR_18 = 7; VAR_18 >= 0; VAR_18--)
    {
      int VAR_19 = (VAR_17 >> (VAR_18 * 2)) & 3;

      if (VAR_19 != 3)
        VAR_16[0] |= (1 << VAR_18);
    }
       }
     FUNC_4 (FUNC_0 (VAR_14, VAR_15), VAR_16, 2);
   }
 else
   FUNC_5 (VAR_10, VAR_15, FUNC_0 (VAR_14, VAR_15));
      }

  if (VAR_11 == VAR_6 || VAR_11 == -1)
    FUNC_5 (VAR_10, VAR_6,
     FUNC_1 (VAR_14));



}
