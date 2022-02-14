
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char*,int *,int) ;

__attribute__((used)) static inline int
FUNC_2(const char *VAR_0, size_t VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 char VAR_5[3];




 if (VAR_3 != VAR_1 / 2 || (VAR_1 % 2) == 1)
  return 1;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 += 2) {
  if (!FUNC_0(VAR_0[VAR_4]) || !FUNC_0(VAR_0[VAR_4 + 1]))
   return 1;
  VAR_5[0] = VAR_0[VAR_4];
  VAR_5[1] = VAR_0[VAR_4 + 1];
  VAR_5[2] = '\0';
  VAR_2[VAR_4 / 2] = FUNC_1(VAR_5, ((void*)0), 16);
 }
 return 0;
}
