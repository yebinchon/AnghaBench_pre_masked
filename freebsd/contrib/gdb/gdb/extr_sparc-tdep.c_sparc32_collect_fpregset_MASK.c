
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regcache const*,int,char*) ;

void
FUNC_1 (const struct regcache *VAR_2,
     int VAR_3, void *VAR_4)
{
  char *VAR_5 = VAR_4;
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
    {
      if (VAR_3 == (VAR_1 + VAR_6) || VAR_3 == -1)
 FUNC_0 (VAR_2, VAR_1 + VAR_6, VAR_5 + (VAR_6 * 4));
    }

  if (VAR_3 == VAR_0 || VAR_3 == -1)
    FUNC_0 (VAR_2, VAR_0, VAR_5 + (32 * 4) + 4);
}
