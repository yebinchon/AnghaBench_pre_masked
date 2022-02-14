
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* section; } ;
struct TYPE_7__ {TYPE_2__ def; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; scalar_t__ forced_local; } ;
typedef int bfd_boolean ;
struct TYPE_5__ {int * output_section; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

bfd_boolean
FUNC_0 (struct elf_link_hash_entry *VAR_4)
{
  return !(VAR_4->forced_local
    || VAR_4->root.type == VAR_2
    || VAR_4->root.type == VAR_3
    || ((VAR_4->root.type == VAR_0
  || VAR_4->root.type == VAR_1)
        && VAR_4->root.u.def.section->output_section == ((void*)0)));
}
