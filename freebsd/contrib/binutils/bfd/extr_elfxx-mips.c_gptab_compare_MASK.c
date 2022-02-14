
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gt_g_value; } ;
struct TYPE_4__ {TYPE_1__ gt_entry; } ;
typedef TYPE_2__ Elf32_gptab ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const Elf32_gptab *VAR_2 = VAR_0;
  const Elf32_gptab *VAR_3 = VAR_1;

  return VAR_2->gt_entry.gt_g_value - VAR_3->gt_entry.gt_g_value;
}
