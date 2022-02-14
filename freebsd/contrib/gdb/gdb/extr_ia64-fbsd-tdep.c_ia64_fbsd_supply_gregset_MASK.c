
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {int dummy; } ;
struct regcache {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct regcache*,int,void const*) ;

__attribute__((used)) static void
FUNC_2 (const struct regset *VAR_1,
     struct regcache *VAR_2, int VAR_3,
     const void *VAR_4, size_t VAR_5)
{
  if (VAR_3 == -1)
    {
      for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
   if (FUNC_0(VAR_3))
     FUNC_1 (VAR_2, VAR_3, VAR_4);
 }
    }
  else
    if (FUNC_0(VAR_3))
      FUNC_1 (VAR_2, VAR_3, VAR_4);
}
