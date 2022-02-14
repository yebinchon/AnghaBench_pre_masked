
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,char const) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_1, u8 *VAR_2)
{
 int VAR_3;


 if (FUNC_2(VAR_1) < 3 * VAR_0 - 1)
  return 0;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_1("0123456789abcdefABCDEF", VAR_1[VAR_3 * 3]))
   return 0;
  if (!FUNC_1("0123456789abcdefABCDEF", VAR_1[VAR_3 * 3 + 1]))
   return 0;
  if (VAR_3 != VAR_0 - 1 && VAR_1[VAR_3 * 3 + 2] != ':')
   return 0;
 }
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2[VAR_3] = (FUNC_0(VAR_1[VAR_3 * 3]) << 4) | FUNC_0(VAR_1[VAR_3 * 3 + 1]);
 }
 return 1;
}
