
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char const*,int,int*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 if (FUNC_2(VAR_0, 4, &VAR_3) < 0) {
  return -1;
 }
 VAR_0 += 4;
 if (FUNC_1(VAR_0 ++, "-:/ ") < 0) {
  return -1;
 }
 if (FUNC_2(VAR_0, 2, &VAR_4) < 0) {
  return -1;
 }
 VAR_0 += 2;
 if (FUNC_1(VAR_0 ++, "-:/ ") < 0) {
  return -1;
 }
 if (FUNC_2(VAR_0, 2, &VAR_5) < 0) {
  return -1;
 }
 VAR_0 += 2;
 if (FUNC_1(VAR_0 ++, " T") < 0) {
  return -1;
 }
 if (FUNC_2(VAR_0, 2, &VAR_6) < 0) {
  return -1;
 }
 VAR_0 += 2;
 if (FUNC_1(VAR_0 ++, "-:/ ") < 0) {
  return -1;
 }
 if (FUNC_2(VAR_0, 2, &VAR_7) < 0) {
  return -1;
 }
 VAR_0 += 2;
 if (FUNC_1(VAR_0 ++, "-:/ ") < 0) {
  return -1;
 }
 if (FUNC_2(VAR_0, 2, &VAR_8) < 0) {
  return -1;
 }
 VAR_0 += 2;
 if (*VAR_0 == '.') {
  while (*VAR_0 && *VAR_0 >= '0' && *VAR_0 <= '9') {
   VAR_0 ++;
  }
 }
 if (*VAR_0) {
  if (*VAR_0 ++ != 'Z') {
   return -1;
  }
  if (*VAR_0) {
   return -1;
  }
 }

 if (VAR_4 < 1 || VAR_4 > 12) {
  return -1;
 }
 VAR_9 = 0;
 for (VAR_11 = 1; VAR_11 < VAR_4; VAR_11 ++) {
  VAR_9 += FUNC_0(VAR_3, VAR_11);
 }
 if (VAR_5 < 1 || VAR_5 > FUNC_0(VAR_3, VAR_4)) {
  return -1;
 }
 VAR_9 += (VAR_5 - 1);
 VAR_10 = (VAR_3 + 3) / 4 - (VAR_3 + 99) / 100 + (VAR_3 + 399) / 400;

 if (VAR_6 > 23 || VAR_7 > 59 || VAR_8 > 60) {
  return -1;
 }
 *VAR_1 = (uint32_t)VAR_3 * 365 + (uint32_t)VAR_10 + VAR_9;
 *VAR_2 = (uint32_t)VAR_6 * 3600 + VAR_7 * 60 + VAR_8;
 return 0;
}
