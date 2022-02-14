
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int const VAR_0 ;

__attribute__((used)) static int
FUNC_0(const uint8_t *VAR_1, const uint8_t *VAR_2)
{
 static const uint32_t VAR_3 = (1<<2*1)|(1<<2*2)|(1<<11)|(1<<2*11);
 int VAR_4;


 if (VAR_2 != ((void*)0) || VAR_1 == ((void*)0))
  return 0;
 for (VAR_4 = 0; VAR_4 < VAR_1[1]; VAR_4++) {
  int VAR_5 = VAR_1[2+VAR_4] & VAR_0;
  if (VAR_5 > 2*11 || ((1<<VAR_5) & VAR_3) == 0)
   return 0;
 }
 return 1;
}
