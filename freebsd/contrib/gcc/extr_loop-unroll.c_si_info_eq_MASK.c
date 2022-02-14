
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_to_split {scalar_t__ insn; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct iv_to_split *VAR_2 = VAR_0;
  const struct iv_to_split *VAR_3 = VAR_1;

  return VAR_2->insn == VAR_3->insn;
}
