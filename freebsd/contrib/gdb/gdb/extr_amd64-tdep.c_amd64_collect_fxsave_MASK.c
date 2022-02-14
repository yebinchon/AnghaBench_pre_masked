
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regcache const*,int,void*) ;
 int FUNC_1 (struct regcache const*,int,char*) ;

void
FUNC_2 (const struct regcache *VAR_2, int VAR_3,
        void *VAR_4)
{
  char *VAR_5 = VAR_4;

  FUNC_0 (VAR_2, VAR_3, VAR_4);

  if (VAR_3 == -1 || VAR_3 == VAR_0)
    FUNC_1 (VAR_2, VAR_0, VAR_5 + 12);
  if (VAR_3 == -1 || VAR_3 == VAR_1)
    FUNC_1 (VAR_2, VAR_1, VAR_5 + 20);
}
