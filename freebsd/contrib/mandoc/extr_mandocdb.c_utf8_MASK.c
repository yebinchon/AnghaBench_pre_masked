
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(unsigned int VAR_0, char VAR_1[7])
{
 size_t VAR_2;

 VAR_2 = 0;
 if (VAR_0 <= 0x0000007F) {
  VAR_2 = 1;
  VAR_1[0] = (char)VAR_0;
 } else if (VAR_0 <= 0x000007FF) {
  VAR_2 = 2;
  VAR_1[0] = (VAR_0 >> 6 & 31) | 192;
  VAR_1[1] = (VAR_0 & 63) | 128;
 } else if (VAR_0 <= 0x0000FFFF) {
  VAR_2 = 3;
  VAR_1[0] = (VAR_0 >> 12 & 15) | 224;
  VAR_1[1] = (VAR_0 >> 6 & 63) | 128;
  VAR_1[2] = (VAR_0 & 63) | 128;
 } else if (VAR_0 <= 0x001FFFFF) {
  VAR_2 = 4;
  VAR_1[0] = (VAR_0 >> 18 & 7) | 240;
  VAR_1[1] = (VAR_0 >> 12 & 63) | 128;
  VAR_1[2] = (VAR_0 >> 6 & 63) | 128;
  VAR_1[3] = (VAR_0 & 63) | 128;
 } else if (VAR_0 <= 0x03FFFFFF) {
  VAR_2 = 5;
  VAR_1[0] = (VAR_0 >> 24 & 3) | 248;
  VAR_1[1] = (VAR_0 >> 18 & 63) | 128;
  VAR_1[2] = (VAR_0 >> 12 & 63) | 128;
  VAR_1[3] = (VAR_0 >> 6 & 63) | 128;
  VAR_1[4] = (VAR_0 & 63) | 128;
 } else if (VAR_0 <= 0x7FFFFFFF) {
  VAR_2 = 6;
  VAR_1[0] = (VAR_0 >> 30 & 1) | 252;
  VAR_1[1] = (VAR_0 >> 24 & 63) | 128;
  VAR_1[2] = (VAR_0 >> 18 & 63) | 128;
  VAR_1[3] = (VAR_0 >> 12 & 63) | 128;
  VAR_1[4] = (VAR_0 >> 6 & 63) | 128;
  VAR_1[5] = (VAR_0 & 63) | 128;
 } else
  return 0;

 VAR_1[VAR_2] = '\0';
 return VAR_2;
}
