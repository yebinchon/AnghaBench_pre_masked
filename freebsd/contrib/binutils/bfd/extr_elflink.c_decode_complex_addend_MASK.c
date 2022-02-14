
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0
    (unsigned long * VAR_0,
     unsigned long * VAR_1,
     unsigned long * VAR_2,
     unsigned long * VAR_3,
     unsigned long * VAR_4,
     unsigned long * VAR_5,
     unsigned long * VAR_6,
     unsigned long * VAR_7,
     unsigned long VAR_8)
{
  * VAR_0 = VAR_8 & 0x3F;
  * VAR_2 = (VAR_8 >> 6) & 0x3F;
  * VAR_1 = (VAR_8 >> 12) & 0x3F;
  * VAR_3 = (VAR_8 >> 18) & 0xF;
  * VAR_4 = (VAR_8 >> 22) & 0xF;
  * VAR_5 = (VAR_8 >> 27) & 1;
  * VAR_6 = (VAR_8 >> 28) & 1;
  * VAR_7 = (VAR_8 >> 29) & 1;
}
