
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(u8 VAR_0)
{
 int VAR_1 = (VAR_0 >> 4) | ((VAR_0 & 0xf) << 4);
 VAR_1 = ((VAR_1 & 0xcc) >> 2) | ((VAR_1 & 0x33) << 2);
 VAR_1 = ((VAR_1 & 0xaa) >> 1) | ((VAR_1 & 0x55) << 1);
 return (u8) VAR_1;
}
