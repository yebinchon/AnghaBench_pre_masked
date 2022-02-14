
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint64_t ;


 char FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, int *VAR_1, uint64_t VAR_2, size_t VAR_3, int *VAR_4)
{
 uint8_t VAR_5;

 for (; VAR_3 > 0; VAR_3--) {
  VAR_5 = (VAR_2 >> ((VAR_3 - 1) * 8)) & 0xFF;
  VAR_0[*VAR_1] = FUNC_0((VAR_5 >> 4) & 0xF);
  VAR_0[*VAR_1 + 1] = FUNC_0(VAR_5 & 0xF);
  *VAR_1 += 2;
  if (VAR_4 != ((void*)0))
   *VAR_4 = (*VAR_4 + VAR_5) & 0xFF;
 }
}
