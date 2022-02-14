
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch_tdep {scalar_t__ st0_regnum; scalar_t__ num_xmm_regs; } ;


 unsigned char* FUNC_0 (char const*,int) ;
 unsigned char* FUNC_1 (char const*) ;
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
 int FUNC_4 (struct regcache*) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (struct regcache*,int,unsigned char*) ;

void
FUNC_8 (struct regcache *VAR_10, int VAR_11, const void *VAR_12)
{
  struct gdbarch_tdep *VAR_13 = FUNC_3 (FUNC_4 (VAR_10));
  const char *VAR_14 = VAR_12;
  int VAR_15;

  FUNC_2 (VAR_13->st0_regnum >= VAR_0);
  FUNC_2 (VAR_13->num_xmm_regs > 0);







  for (VAR_15 = VAR_13->st0_regnum; VAR_15 < VAR_7; VAR_15++)
    if (VAR_11 == -1 || VAR_11 == VAR_15)
      {
 if (VAR_14 == ((void*)0))
   {
     FUNC_7 (VAR_10, VAR_15, ((void*)0));
     continue;
   }



 if (VAR_15 >= VAR_1 && VAR_15 < VAR_9
     && VAR_15 != VAR_2 && VAR_15 != VAR_3)
   {
     unsigned char VAR_16[4];

     FUNC_6 (VAR_16, FUNC_0 (VAR_14, VAR_15), 2);
     VAR_16[2] = VAR_16[3] = 0;
     if (VAR_15 == VAR_4)
       VAR_16[1] &= ((1 << 3) - 1);
     else if (VAR_15== VAR_6)
       {




  unsigned long VAR_17 = 0;
  int VAR_18;
  int VAR_19;

  VAR_19 = ((FUNC_0 (VAR_14, VAR_5))[1] >> 3);
  VAR_19 &= 0x7;

  for (VAR_18 = 7; VAR_18 >= 0; VAR_18--)
    {
      int VAR_20;

      if (VAR_16[0] & (1 << VAR_18))
        {
   int VAR_21 = (VAR_18 + 8 - VAR_19) % 8 + VAR_13->st0_regnum;
   VAR_20 = FUNC_5 (FUNC_0 (VAR_14, VAR_21));
        }
      else
        VAR_20 = 3;

      VAR_17 |= VAR_20 << (2 * VAR_18);
    }
  VAR_16[0] = VAR_17 & 0xff;
  VAR_16[1] = (VAR_17 >> 8) & 0xff;
       }
     FUNC_7 (VAR_10, VAR_15, VAR_16);
   }
 else
   FUNC_7 (VAR_10, VAR_15, FUNC_0 (VAR_14, VAR_15));
      }

  if (VAR_11 == VAR_7 || VAR_11 == -1)
    {
      if (VAR_14 == ((void*)0))
 FUNC_7 (VAR_10, VAR_7, ((void*)0));
      else
 FUNC_7 (VAR_10, VAR_7,
        FUNC_1 (VAR_14));
    }



}
