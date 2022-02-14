
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint32_t ;
typedef int u_char ;



__attribute__((used)) static uint32_t
FUNC_0(const u_char *VAR_0)
{
 return ((((VAR_0[0] & 0x3) << 18) | (VAR_0[1] << 10) |
     ((VAR_0[2] & 0x3) << 8) | VAR_0[3]) + 0x10000);
}
