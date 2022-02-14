
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_1(netdissect_options *VAR_1,
              register const char *VAR_2, register const u_char *VAR_3)
{
 register u_int VAR_4;

 if (VAR_2 >= (const char *)VAR_3) {
  FUNC_0((VAR_1, "%s", VAR_0));
  return (0);
 }
 VAR_4 = *VAR_2++;


 if (VAR_4 > 32) {
  FUNC_0((VAR_1, "[len=%u]", VAR_4));
  return (0);
 }
 while ((int)--VAR_4 >= 0) {
  if (VAR_2 >= (const char *)VAR_3) {
   FUNC_0((VAR_1, "%s", VAR_0));
   return (0);
  }
  FUNC_0((VAR_1, "%c", *VAR_2++));
 }
 return (VAR_2);
}
