
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int * VAR_0 ;

void
FUNC_0(char *VAR_1, u_long VAR_2, int VAR_3)
{
 while (--VAR_3 >= 0) {
  *VAR_1++ = VAR_0[VAR_2&0x3f];
  VAR_2 >>= 6;
 }
}
