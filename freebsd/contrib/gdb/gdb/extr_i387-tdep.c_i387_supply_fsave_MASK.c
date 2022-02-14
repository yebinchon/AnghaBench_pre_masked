
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch_tdep {scalar_t__ st0_regnum; } ;


 unsigned char* FUNC_0 (char const*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 struct gdbarch_tdep* FUNC_2 (int ) ;
 int FUNC_3 (struct regcache*) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (struct regcache*,int,unsigned char*) ;

void
FUNC_6 (struct regcache *VAR_7, int VAR_8, const void *VAR_9)
{
  struct gdbarch_tdep *VAR_10 = FUNC_2 (FUNC_3 (VAR_7));
  const char *VAR_11 = VAR_9;
  int VAR_12;

  FUNC_1 (VAR_10->st0_regnum >= VAR_0);





  for (VAR_12 = VAR_10->st0_regnum; VAR_12 < VAR_6; VAR_12++)
    if (VAR_8 == -1 || VAR_8 == VAR_12)
      {
 if (VAR_9 == ((void*)0))
   {
     FUNC_5 (VAR_7, VAR_12, ((void*)0));
     continue;
   }



 if (VAR_12 >= VAR_1
     && VAR_12 != VAR_2 && VAR_12 != VAR_3)
   {
     unsigned char VAR_13[4];

     FUNC_4 (VAR_13, FUNC_0 (VAR_11, VAR_12), 2);
     VAR_13[2] = VAR_13[3] = 0;
     if (VAR_12 == VAR_4)
       VAR_13[1] &= ((1 << 3) - 1);
     FUNC_5 (VAR_7, VAR_12, VAR_13);
   }
 else
   FUNC_5 (VAR_7, VAR_12, FUNC_0 (VAR_11, VAR_12));
      }

}
