
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cpu_info {scalar_t__ name; int isa; } ;


 struct mips_cpu_info* VAR_0 ;

__attribute__((used)) static const struct mips_cpu_info *
FUNC_0 (int VAR_1)
{
  const struct mips_cpu_info *VAR_2;

  for (VAR_2 = VAR_0; VAR_2->name != 0; VAR_2++)
    if (VAR_2->isa == VAR_1)
      return VAR_2;

  return 0;
}
