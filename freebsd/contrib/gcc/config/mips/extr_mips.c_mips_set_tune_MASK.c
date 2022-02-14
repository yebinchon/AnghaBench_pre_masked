
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cpu_info {int cpu; } ;


 int VAR_0 ;
 struct mips_cpu_info const* VAR_1 ;

__attribute__((used)) static void
FUNC_0 (const struct mips_cpu_info *VAR_2)
{
  if (VAR_2 != 0)
    {
      VAR_1 = VAR_2;
      VAR_0 = VAR_2->cpu;
    }
}
