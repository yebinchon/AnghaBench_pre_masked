
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, int *VAR_2)
{
 const char *VAR_3;

 *VAR_2 = 0;
 VAR_3 = VAR_1;
 if (*VAR_3 != 'e' && *VAR_3 != 'E') {
  return 0;
 }
 VAR_3 ++;
 if (*VAR_3 != 'c' && *VAR_3 != 'C') {
  return 0;
 }
 VAR_3 ++;
 if (*VAR_3 == 0) {
  *VAR_2 = VAR_0;
  return 1;
 }
 if (*VAR_3 != ':') {
  return 0;
 }
 *VAR_2 = FUNC_0(VAR_3);
 return *VAR_2 > 0;
}
