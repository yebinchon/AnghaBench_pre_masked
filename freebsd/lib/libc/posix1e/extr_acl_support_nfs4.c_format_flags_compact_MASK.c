
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct flagnames_struct {char letter; int flag; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, size_t VAR_1, uint32_t VAR_2,
    const struct flagnames_struct *VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_3[VAR_4].letter != '\0'; VAR_4++) {
  FUNC_0(VAR_4 < VAR_1);
  if ((VAR_3[VAR_4].flag & VAR_2) == 0)
   VAR_0[VAR_4] = '-';
  else
   VAR_0[VAR_4] = VAR_3[VAR_4].letter;
 }

 VAR_0[VAR_4] = '\0';

 return (0);
}
