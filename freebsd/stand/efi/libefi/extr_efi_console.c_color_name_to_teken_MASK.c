
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_1(const char *VAR_8, int *VAR_9)
{
 if (FUNC_0(VAR_8, "black") == 0) {
  *VAR_9 = VAR_0;
  return (1);
 }
 if (FUNC_0(VAR_8, "red") == 0) {
  *VAR_9 = VAR_6;
  return (1);
 }
 if (FUNC_0(VAR_8, "green") == 0) {
  *VAR_9 = VAR_4;
  return (1);
 }
 if (FUNC_0(VAR_8, "brown") == 0) {
  *VAR_9 = VAR_2;
  return (1);
 }
 if (FUNC_0(VAR_8, "blue") == 0) {
  *VAR_9 = VAR_1;
  return (1);
 }
 if (FUNC_0(VAR_8, "magenta") == 0) {
  *VAR_9 = VAR_5;
  return (1);
 }
 if (FUNC_0(VAR_8, "cyan") == 0) {
  *VAR_9 = VAR_3;
  return (1);
 }
 if (FUNC_0(VAR_8, "white") == 0) {
  *VAR_9 = VAR_7;
  return (1);
 }
 return (0);
}
