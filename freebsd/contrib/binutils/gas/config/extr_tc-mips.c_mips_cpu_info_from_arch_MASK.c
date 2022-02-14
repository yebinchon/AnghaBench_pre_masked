
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cpu_info {int cpu; int * name; } ;


 struct mips_cpu_info const* VAR_0 ;

__attribute__((used)) static const struct mips_cpu_info *
FUNC_0 (int VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++)
    if (VAR_1 == VAR_0[VAR_2].cpu)
      return (&VAR_0[VAR_2]);

  return ((void*)0);
}
