
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_0)
{

 VAR_0 = (VAR_0 & 0x55555555) + ((VAR_0 & 0xaaaaaaaa) >> 1);
 VAR_0 = (VAR_0 & 0x33333333) + ((VAR_0 & 0xcccccccc) >> 2);
 VAR_0 = (VAR_0 + (VAR_0 >> 4)) & 0x0f0f0f0f;
 VAR_0 = (VAR_0 + (VAR_0 >> 8));
 VAR_0 = (VAR_0 + (VAR_0 >> 16)) & 0x000000ff;
 return (VAR_0);
}
