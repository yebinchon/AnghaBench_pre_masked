
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_opcode {int* arg; } ;
struct spu_insn {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (char const*,struct spu_insn*,int) ;
 char* FUNC_2 (char const*,struct spu_insn*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3 (struct spu_opcode *VAR_2, const char *VAR_3, struct spu_insn *VAR_4)
{
  int VAR_5;
  int VAR_6 = 0;
  int VAR_7;

  for (VAR_5 = 1; VAR_5 <= VAR_2->arg[0]; VAR_5++)
    {
      VAR_7 = VAR_2->arg[VAR_5];
      VAR_1 = VAR_5;

      while (FUNC_0 (*VAR_3))
        VAR_3++;
      if (*VAR_3 == 0 || *VAR_3 == ',')
 return 0;
      if (VAR_7 < VAR_0)
        VAR_3 = FUNC_2 (VAR_3, VAR_4, VAR_7, 1);
      else if (VAR_7 > VAR_0)
        VAR_3 = FUNC_1 (VAR_3, VAR_4, VAR_7);
      else if (VAR_7 == VAR_0)
 {
   VAR_6++;
   if ('(' != *VAR_3++)
     return 0;
 }

      if (!VAR_3)
 return 0;

      while (FUNC_0 (*VAR_3))
        VAR_3++;

      if (VAR_7 != VAR_0 && VAR_6)
 {
   VAR_6--;
   if (')' != *VAR_3++)
     return 0;
 }
      else if (VAR_5 < VAR_2->arg[0]
        && VAR_2->arg[VAR_5] != VAR_0
        && VAR_2->arg[VAR_5+1] != VAR_0)
 {
   if (',' != *VAR_3++)
     {
       VAR_1++;
       return 0;
     }
 }
    }
  while (FUNC_0 (*VAR_3))
    VAR_3++;
  return !VAR_6 && (*VAR_3 == 0 || *VAR_3 == '\n');
}
