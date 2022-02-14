
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int desc; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 long FUNC_1 (char const*,char**,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_2(int VAR_1, int VAR_2, const char *VAR_3[])
{
 int VAR_4;

 if (VAR_2 == 0)
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  char *VAR_5;
  long VAR_6 = FUNC_1(VAR_3[VAR_4], &VAR_5, 10);

  if (*VAR_5 == '\0') {
   if (VAR_6 == VAR_1 + 1)
    return 1;
   continue;
  }

  if (FUNC_0(VAR_0[VAR_1].desc, VAR_3[VAR_4]))
   return 1;
 }

 return 0;
}
