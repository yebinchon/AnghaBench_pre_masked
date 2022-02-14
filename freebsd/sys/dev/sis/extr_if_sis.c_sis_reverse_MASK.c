
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static uint16_t
FUNC_0(uint16_t VAR_0)
{
 VAR_0 = ((VAR_0 >> 1) & 0x5555) | ((VAR_0 << 1) & 0xaaaa);
 VAR_0 = ((VAR_0 >> 2) & 0x3333) | ((VAR_0 << 2) & 0xcccc);
 VAR_0 = ((VAR_0 >> 4) & 0x0f0f) | ((VAR_0 << 4) & 0xf0f0);
 VAR_0 = ((VAR_0 >> 8) & 0x00ff) | ((VAR_0 << 8) & 0xff00);

 return (VAR_0);
}
