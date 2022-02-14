
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {scalar_t__ readonly_p; int * register_valid_p; } ;


 int FUNC_0 (struct regcache*,int,void*) ;

__attribute__((used)) static int
FUNC_1 (void *VAR_0, int VAR_1, void *VAR_2)
{
  struct regcache *VAR_3 = VAR_0;
  if (!VAR_3->register_valid_p[VAR_1] && VAR_3->readonly_p)



    return 0;
  FUNC_0 (VAR_3, VAR_1, VAR_2);
  return 1;
}
