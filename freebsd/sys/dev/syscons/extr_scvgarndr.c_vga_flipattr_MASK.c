
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;



__attribute__((used)) static u_short
FUNC_0(u_short VAR_0, int VAR_1)
{
 if (VAR_1)
  VAR_0 = (VAR_0 & 0x8800) | ((VAR_0 & 0x7000) >> 4) |
      ((VAR_0 & 0x0700) << 4);
 else
  VAR_0 = ((VAR_0 & 0xf000) >> 4) | ((VAR_0 & 0x0f00) << 4);
 return (VAR_0);
}
