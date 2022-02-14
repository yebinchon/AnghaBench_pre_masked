
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {scalar_t__ ctr; int cr; } ;



__attribute__((used)) static int
FUNC_0(int VAR_0, int VAR_1, struct reg *VAR_2)
{
 int VAR_3 = 0;


 if ((VAR_0 & 0x14) == 0x14)
  return 1;


 if (!(VAR_0 & 0x04)) {
  --VAR_2->ctr;
  VAR_3 = (VAR_2->ctr == 0);
  if (VAR_0 & 0x10) {
   return (!(VAR_3 ^ (VAR_0 >> 1)));
  }
 }

 return (VAR_3 | (((VAR_2->cr >> (31 - VAR_1)) ^ (VAR_0 >> 3)) ^ 1));
}
