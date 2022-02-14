
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch_tdep {scalar_t__ st0_regnum; } ;


 int* FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct regcache* VAR_8 ;
 int FUNC_1 (int) ;
 struct gdbarch_tdep* FUNC_2 (int ) ;
 int FUNC_3 (int*,unsigned char*,int) ;
 int FUNC_4 (struct regcache*,int,...) ;

void
FUNC_5 (void *VAR_9, int VAR_10)
{
  struct regcache *VAR_11 = VAR_8;
  struct gdbarch_tdep *VAR_12 = FUNC_2 (VAR_7);
  char *VAR_13 = VAR_9;
  int VAR_14;

  FUNC_1 (VAR_12->st0_regnum >= VAR_0);





  for (VAR_14 = VAR_12->st0_regnum; VAR_14 < VAR_6; VAR_14++)
    if (VAR_10 == -1 || VAR_10 == VAR_14)
      {


 if (VAR_14 >= VAR_1
     && VAR_14 != VAR_2 && VAR_14 != VAR_3)
   {
     unsigned char VAR_15[4];

     FUNC_4 (VAR_11, VAR_14, VAR_15);

     if (VAR_14 == VAR_4)
       {


  VAR_15[1] &= ((1 << 3) - 1);
  VAR_15[1] |= ((FUNC_0 (VAR_13, VAR_14))[1] & ~((1 << 3) - 1));
       }
     FUNC_3 (FUNC_0 (VAR_13, VAR_14), VAR_15, 2);
   }
 else
   FUNC_4 (VAR_11, VAR_14, FUNC_0 (VAR_13, VAR_14));
      }

}
