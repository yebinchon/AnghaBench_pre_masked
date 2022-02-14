
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
typedef int CORE_ADDR ;


 struct regcache* FUNC_0 (int ,int ) ;
 char* FUNC_1 (struct regcache*) ;

char *
FUNC_2 (CORE_ADDR VAR_0, CORE_ADDR VAR_1)
{
  struct regcache *VAR_2 = FUNC_0 (VAR_0, VAR_1);
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  return FUNC_1 (VAR_2);
}
