
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct named_resolution {int * alias; int * name; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static bool
FUNC_1(struct named_resolution *VAR_0, const char *VAR_1)
{

 if (FUNC_0(VAR_0->name, VAR_1) == 0)
  return (1);
 if (VAR_0->alias != ((void*)0) && FUNC_0(VAR_0->alias, VAR_1) == 0)
  return (1);
 return (0);
}
