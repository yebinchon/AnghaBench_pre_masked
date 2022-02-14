
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {TYPE_7__* weakdef; } ;
struct TYPE_10__ {int value; int section; } ;
struct TYPE_11__ {TYPE_1__ def; } ;
struct TYPE_12__ {TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_8__ u; TYPE_3__ root; void* needs_plt; } ;
struct bfd_link_info {int dummy; } ;
struct alpha_elf_link_hash_entry {int dummy; } ;
typedef void* bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_18__ {int * dynobj; } ;
struct TYPE_13__ {int value; int section; } ;
struct TYPE_14__ {TYPE_4__ def; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_5__ u; } ;
struct TYPE_16__ {TYPE_6__ root; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (struct elf_link_hash_entry*,struct bfd_link_info*) ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,struct bfd_link_info*) ;
 scalar_t__ FUNC_4 (struct alpha_elf_link_hash_entry*) ;
 TYPE_9__* FUNC_5 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct bfd_link_info *VAR_4,
       struct elf_link_hash_entry *VAR_5)
{
  bfd *VAR_6;
  asection *VAR_7;
  struct alpha_elf_link_hash_entry *VAR_8;

  VAR_6 = FUNC_5(VAR_4)->dynobj;
  VAR_8 = (struct alpha_elf_link_hash_entry *)VAR_5;






  if (FUNC_1 (VAR_5, VAR_4) && FUNC_4 (VAR_8))
    {
      VAR_5->needs_plt = VAR_1;

      VAR_7 = FUNC_2(VAR_6, ".plt");
      if (!VAR_7 && !FUNC_3 (VAR_6, VAR_4))
 return VAR_0;





      return VAR_1;
    }
  else
    VAR_5->needs_plt = VAR_0;




  if (VAR_5->u.weakdef != ((void*)0))
    {
      FUNC_0 (VAR_5->u.weakdef->root.type == VAR_2
    || VAR_5->u.weakdef->root.type == VAR_3);
      VAR_5->root.u.def.section = VAR_5->u.weakdef->root.u.def.section;
      VAR_5->root.u.def.value = VAR_5->u.weakdef->root.u.def.value;
      return VAR_1;
    }






  return VAR_1;
}
