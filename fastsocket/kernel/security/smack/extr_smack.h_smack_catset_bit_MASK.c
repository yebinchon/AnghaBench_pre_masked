
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(int VAR_1, char *VAR_2)
{
 if (VAR_1 > VAR_0 * 8)
  return;

 VAR_2[(VAR_1 - 1) / 8] |= 0x80 >> ((VAR_1 - 1) % 8);
}
