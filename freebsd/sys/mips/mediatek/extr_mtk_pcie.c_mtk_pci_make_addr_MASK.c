
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = ((((VAR_3 & 0xf00) >> 8) << 24) | (VAR_0 << 16) | (VAR_1 << 11) |
  (VAR_2 << 8) | (VAR_3 & 0xfc) | (1 << 31));

 return (VAR_4);
}
