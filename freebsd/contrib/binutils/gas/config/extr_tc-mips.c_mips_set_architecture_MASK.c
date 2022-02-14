
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_cpu_info {int isa; int cpu; } ;
struct TYPE_2__ {int isa; int arch; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_0 (const struct mips_cpu_info *VAR_2)
{
  if (VAR_2 != 0)
    {
      VAR_0 = VAR_2->cpu;
      VAR_1.arch = VAR_2->cpu;
      VAR_1.isa = VAR_2->isa;
    }
}
