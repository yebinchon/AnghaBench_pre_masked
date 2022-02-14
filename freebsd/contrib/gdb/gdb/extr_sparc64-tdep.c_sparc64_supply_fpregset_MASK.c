
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct regcache*,int,char const*) ;

void
FUNC_2 (struct regcache *VAR_5,
    int VAR_6, const void *VAR_7)
{
  int VAR_8 = (FUNC_0 (VAR_4) == 32);
  const char *VAR_9 = VAR_7;
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < 32; VAR_10++)
    {
      if (VAR_6 == (VAR_3 + VAR_10) || VAR_6 == -1)
 FUNC_1 (VAR_5, VAR_3 + VAR_10, VAR_9 + (VAR_10 * 4));
    }

  if (VAR_8)
    {
      if (VAR_6 == VAR_0 || VAR_6 == -1)
 FUNC_1 (VAR_5, VAR_0,
        VAR_9 + (32 * 4) + (16 * 8) + 4);
    }
  else
    {
      for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
 {
   if (VAR_6 == (VAR_1 + VAR_10) || VAR_6 == -1)
     FUNC_1 (VAR_5, VAR_1 + VAR_10,
     VAR_9 + (32 * 4) + (VAR_10 * 8));
 }

      if (VAR_6 == VAR_2 || VAR_6 == -1)
 FUNC_1 (VAR_5, VAR_2,
        VAR_9 + (32 * 4) + (16 * 8));
    }
}
