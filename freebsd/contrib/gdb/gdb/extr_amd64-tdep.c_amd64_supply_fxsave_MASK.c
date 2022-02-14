
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regcache*,int,void const*) ;
 int FUNC_1 (struct regcache*,int,char const*) ;

void
FUNC_2 (struct regcache *VAR_2, int VAR_3,
        const void *VAR_4)
{
  FUNC_0 (VAR_2, VAR_3, VAR_4);

  if (VAR_4)
    {
      const char *VAR_5 = VAR_4;

      if (VAR_3 == -1 || VAR_3 == VAR_0)
 FUNC_1 (VAR_2, VAR_0, VAR_5 + 12);
      if (VAR_3 == -1 || VAR_3 == VAR_1)
 FUNC_1 (VAR_2, VAR_1, VAR_5 + 20);
    }
}
