
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {int* descr; } ;
struct regcache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct regcache*,int,char const*) ;

__attribute__((used)) static void
FUNC_1 (const struct regset *VAR_1, struct regcache *VAR_2,
      int VAR_3, const void *VAR_4, size_t VAR_5)
{
  const int *VAR_6 = VAR_1->descr;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    {
      if ((VAR_3 == VAR_7 || VAR_3 == -1) && VAR_6[VAR_7] != -1)
 FUNC_0 (VAR_2, VAR_7, (const char *)VAR_4 + VAR_6[VAR_7]);
    }
}
