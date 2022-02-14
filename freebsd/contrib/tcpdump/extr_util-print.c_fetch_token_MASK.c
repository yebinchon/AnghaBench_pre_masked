
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef char u_char ;
typedef int netdissect_options ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2, u_int VAR_3,
    u_char *VAR_4, size_t VAR_5)
{
 size_t VAR_6 = 0;

 for (; VAR_2 < VAR_3; VAR_2++) {
  if (!FUNC_0(*(VAR_1 + VAR_2))) {

   return (0);
  }
  if (!FUNC_1(*(VAR_1 + VAR_2))) {

   return (0);
  }
  if (FUNC_3(*(VAR_1 + VAR_2))) {

   break;
  }
  if (!FUNC_2(*(VAR_1 + VAR_2))) {

   return (0);
  }
  if (VAR_6 + 2 > VAR_5) {

   return (0);
  }
  VAR_4[VAR_6] = *(VAR_1 + VAR_2);
  VAR_6++;
 }
 if (VAR_6 == 0) {

  return (0);
 }
 VAR_4[VAR_6] = '\0';





 for (; VAR_2 < VAR_3; VAR_2++) {
  if (!FUNC_0(*(VAR_1 + VAR_2))) {

   break;
  }
  if (*(VAR_1 + VAR_2) == '\r' || *(VAR_1 + VAR_2) == '\n') {

   break;
  }
  if (!FUNC_1(*(VAR_1 + VAR_2)) || !FUNC_2(*(VAR_1 + VAR_2))) {

   break;
  }
  if (!FUNC_3(*(VAR_1 + VAR_2))) {

   break;
  }
 }
 return (VAR_2);
}
