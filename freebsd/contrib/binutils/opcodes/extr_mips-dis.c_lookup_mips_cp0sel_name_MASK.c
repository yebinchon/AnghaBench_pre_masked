
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cp0sel_name {unsigned int cp0reg; unsigned int sel; } ;



__attribute__((used)) static const struct mips_cp0sel_name *
FUNC_0 (const struct mips_cp0sel_name *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2,
    unsigned int VAR_3)
{
  unsigned int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    if (VAR_0[VAR_4].cp0reg == VAR_2 && VAR_0[VAR_4].sel == VAR_3)
      return &VAR_0[VAR_4];
  return ((void*)0);
}
