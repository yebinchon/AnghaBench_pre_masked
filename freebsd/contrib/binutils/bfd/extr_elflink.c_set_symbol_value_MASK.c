
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int section; void* value; } ;
struct TYPE_6__ {scalar_t__ link; } ;
struct TYPE_8__ {TYPE_2__ def; TYPE_1__ i; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; } ;
struct elf_final_link_info {TYPE_5__* internal_syms; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_10__ {void* st_value; int st_shndx; int st_info; } ;
typedef TYPE_5__ Elf_Internal_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct elf_link_hash_entry** FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2 (bfd * VAR_6,
    struct elf_final_link_info * VAR_7,
    int VAR_8,
    bfd_vma VAR_9)
{
  bfd_boolean VAR_10;
  Elf_Internal_Sym * VAR_11;
  struct elf_link_hash_entry ** VAR_12;
  struct elf_link_hash_entry * VAR_13;

  VAR_12 = FUNC_1 (VAR_6);
  VAR_11 = VAR_7->internal_syms + VAR_8;
  VAR_10 = FUNC_0(VAR_11->st_info) == VAR_1;

  if (VAR_10)
    {


      VAR_11->st_shndx = VAR_0;
      VAR_11->st_value = VAR_9;
    }
  else
    {


      VAR_13 = VAR_12 [VAR_8];
      while (VAR_13->root.type == VAR_4
      || VAR_13->root.type == VAR_5)
 VAR_13 = (struct elf_link_hash_entry *) VAR_13->root.u.i.link;
      VAR_13->root.type = VAR_3;
      VAR_13->root.u.def.value = VAR_9;
      VAR_13->root.u.def.section = VAR_2;
    }
}
