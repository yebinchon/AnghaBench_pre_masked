
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;

__attribute__((used)) static int
FUNC_1(const unsigned char *VAR_0, const unsigned char *VAR_1) {
 const unsigned char *VAR_2 = VAR_0;
 for (;;) {
  int VAR_3;
  int VAR_4 = *VAR_0++;
  int VAR_5 = *VAR_1++;
  if (VAR_4 != VAR_5)
   return 0;
  if (VAR_4 == 0)
   return VAR_0 - VAR_2;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   if (FUNC_0(VAR_0[VAR_3]) != FUNC_0(VAR_1[VAR_3]))
    return 0;
  VAR_0 += VAR_4;
  VAR_1 += VAR_4;
 }
}
