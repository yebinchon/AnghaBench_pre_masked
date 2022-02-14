
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static char
FUNC_0(uint32_t VAR_0)
{







 uint32_t VAR_1, VAR_2, VAR_3;

 VAR_1 = VAR_0 - 26;
 VAR_2 = VAR_0 - 52;
 VAR_3 = VAR_0 - 62;
 return (char)(((VAR_0 + 0x41) & ((VAR_1 & VAR_2 & VAR_3) >> 8))
  | ((VAR_0 + (0x61 - 26)) & ((~VAR_1 & VAR_2 & VAR_3) >> 8))
  | ((VAR_0 - (52 - 0x30)) & ((~VAR_1 & ~VAR_2 & VAR_3) >> 8))
  | ((0x2B + ((VAR_0 & 1) << 2)) & (~(VAR_1 | VAR_2 | VAR_3) >> 8)));
}
