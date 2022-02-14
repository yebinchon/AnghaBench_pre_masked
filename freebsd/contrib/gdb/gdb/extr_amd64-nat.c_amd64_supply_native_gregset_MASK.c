
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gdbarch*) ;
 struct gdbarch* FUNC_2 (struct regcache*) ;
 int FUNC_3 (struct regcache*,int,char const*) ;

void
FUNC_4 (struct regcache *VAR_3,
        const void *VAR_4, int VAR_5)
{
  const char *VAR_6 = VAR_4;
  struct gdbarch *VAR_7 = FUNC_2 (VAR_3);
  int VAR_8 = VAR_2;
  int VAR_9;

  if (FUNC_1 (VAR_7) == 32)
    VAR_8 = VAR_1;

  if (VAR_8 > VAR_0)
    VAR_8 = VAR_0;

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
      if (VAR_5 == -1 || VAR_5 == VAR_9)
 {
   int VAR_10 = FUNC_0 (VAR_9);

   if (VAR_10 != -1)
     FUNC_3 (VAR_3, VAR_9, VAR_6 + VAR_10);
 }
    }
}
