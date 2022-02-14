
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int*,int) ;

int FUNC_1(u8 *VAR_0)
{
 if (FUNC_0(VAR_0 + 3, 3) < 0)
  return -1;
 VAR_0[0] &= 0xfe;
 VAR_0[0] |= 0x02;
 return 0;
}
