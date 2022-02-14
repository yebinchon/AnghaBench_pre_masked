
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char* VAR_0, size_t VAR_1)
{
 unsigned char VAR_2 = (unsigned char)VAR_0[0];
 if (VAR_2 == 128 || VAR_2 == 255 || VAR_2 == 0) {

  return 1;
 } else {

  size_t VAR_3 = 0;

  while (VAR_3 < VAR_1 && VAR_0[VAR_3] == ' ') {
   ++VAR_3;
  }

  while (VAR_3 < VAR_1 && VAR_0[VAR_3] >= '0' && VAR_0[VAR_3] <= '7') {
   ++VAR_3;
  }

  while (VAR_3 < VAR_1) {
   if (VAR_0[VAR_3] != ' ' && VAR_0[VAR_3] != 0) {
    return 0;
   }
   ++VAR_3;
  }
  return 1;
 }
}
