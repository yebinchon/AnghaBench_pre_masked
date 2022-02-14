
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned long FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, unsigned *VAR_1, uint32_t *VAR_2)
{
 const char *VAR_3;
 char *VAR_4;
 unsigned long VAR_5;

 VAR_3 = VAR_0;
 if (*VAR_3 != 'r' && *VAR_3 != 'R') {
  return 0;
 }
 VAR_3 ++;
 if (*VAR_3 != 's' && *VAR_3 != 'S') {
  return 0;
 }
 VAR_3 ++;
 if (*VAR_3 != 'a' && *VAR_3 != 'A') {
  return 0;
 }
 VAR_3 ++;
 if (*VAR_3 == 0) {
  *VAR_1 = 2048;
  *VAR_2 = 3;
  return 1;
 } else if (*VAR_3 != ':') {
  return 0;
 }
 VAR_3 ++;
 VAR_5 = FUNC_0(VAR_3, &VAR_4, 10);
 if (VAR_5 < 512 || VAR_5 > 32768) {
  return 0;
 }
 *VAR_1 = VAR_5;
 VAR_3 = VAR_4;
 if (*VAR_3 == 0) {
  *VAR_2 = 3;
  return 1;
 } else if (*VAR_3 != ':') {
  return 0;
 }
 VAR_3 ++;
 VAR_5 = FUNC_0(VAR_3, &VAR_4, 10);
 if ((VAR_5 & 1) == 0 || VAR_5 == 1 || ((VAR_5 >> 30) >> 2) != 0) {
  return 0;
 }
 *VAR_2 = VAR_5;
 if (*VAR_4 != 0) {
  return 0;
 }
 return 1;
}
