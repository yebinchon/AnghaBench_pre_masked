
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_8__ {int gt_bytes; int gt_g_value; } ;
struct TYPE_10__ {TYPE_2__ gt_entry; } ;
struct TYPE_7__ {void* gt_bytes; void* gt_g_value; } ;
struct TYPE_9__ {TYPE_1__ gt_entry; } ;
typedef TYPE_3__ Elf32_gptab ;
typedef TYPE_4__ Elf32_External_gptab ;


 void* FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1 (bfd *VAR_0, const Elf32_External_gptab *VAR_1,
         Elf32_gptab *VAR_2)
{
  VAR_2->gt_entry.gt_g_value = FUNC_0 (VAR_0, VAR_1->gt_entry.gt_g_value);
  VAR_2->gt_entry.gt_bytes = FUNC_0 (VAR_0, VAR_1->gt_entry.gt_bytes);
}
