
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;



__attribute__((used)) static int
FUNC_0(uint64_t VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = VAR_2 - VAR_1;
 VAR_4 = 0;
 if (VAR_3 >= 64) {
  VAR_4 = 0x100 - VAR_3;
  VAR_3 = 0;
 } else if (VAR_3 <= -64)
  VAR_3 = 0x100 + VAR_3;
 else if (VAR_3 < 0) {
  VAR_4 = -VAR_3;
  VAR_3 = 0;
 }

 if (VAR_3 - VAR_4 >= 64)
  return (0);

 return ((VAR_0 & (1ULL << (VAR_3 - VAR_4))) != 0);
}
