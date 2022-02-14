
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint64_t ;
struct regcache {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (struct regcache*,int,char*) ;

__attribute__((used)) static void
FUNC_1 (struct regcache *VAR_4, int VAR_5,
      const void *VAR_6)
{
  int VAR_7;

  if (VAR_5 < 0 || VAR_5 >= VAR_2)
    return;

  VAR_7 = VAR_3[VAR_5];
  if (VAR_5 == VAR_1)
    {




      uint64_t VAR_8;
      VAR_8 = *((uint64_t*)((char *)VAR_6 + VAR_7));
      VAR_8 += *((uint64_t*)((char *)VAR_6 + VAR_3[VAR_0]));
      FUNC_0 (VAR_4, VAR_5, &VAR_8);
    }
  else
    {
      if (VAR_7 < 0)
 FUNC_0 (VAR_4, VAR_5, ((void*)0));
      else
 FUNC_0 (VAR_4, VAR_5, (char *)VAR_6 + VAR_7);
    }
}
