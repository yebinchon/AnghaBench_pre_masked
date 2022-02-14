
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t
FUNC_0(uint32_t VAR_0)
{

 VAR_0 = (VAR_0 & 0x55555555) + ((VAR_0 & 0xaaaaaaaa) >> 1);
 VAR_0 = (VAR_0 & 0x33333333) + ((VAR_0 & 0xcccccccc) >> 2);
 VAR_0 = (VAR_0 & 0x0f0f0f0f) + ((VAR_0 & 0xf0f0f0f0) >> 4);
 VAR_0 = (VAR_0 & 0x00ff00ff) + ((VAR_0 & 0xff00ff00) >> 8);
 VAR_0 = (VAR_0 & 0x0000ffff) + ((VAR_0 & 0xffff0000) >> 16);
 return (VAR_0);
}
