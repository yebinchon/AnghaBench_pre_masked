
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, int *VAR_1, uint64_t *VAR_2, size_t VAR_3, int *VAR_4)
{
 uint8_t VAR_5;

 *VAR_2 = 0;
 for (; VAR_3 > 0; VAR_3--) {
  if (!FUNC_1(VAR_0[*VAR_1]) || !FUNC_1(VAR_0[*VAR_1 + 1]))
   return (-1);
  VAR_5 = (FUNC_0(VAR_0[*VAR_1]) << 4) | FUNC_0(VAR_0[*VAR_1 + 1]);
  *VAR_2 = (*VAR_2 << 8) | VAR_5;
  *VAR_1 += 2;
  if (VAR_4 != ((void*)0))
   *VAR_4 = (*VAR_4 + VAR_5) & 0xFF;
 }

 return (0);
}
