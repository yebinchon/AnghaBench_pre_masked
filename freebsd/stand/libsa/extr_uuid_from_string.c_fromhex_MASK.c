
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char const) ;

__attribute__((used)) static uint32_t
FUNC_1(const char *VAR_0, int VAR_1, int *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4, VAR_5;

 if (!*VAR_2)
  return 0;
 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0[VAR_4]);
  if (VAR_5 == 16) {
   *VAR_2 = 0;
   return VAR_3;
  }
  VAR_3 = (VAR_3 << 4) | VAR_5;
 }
 return VAR_3;
}
