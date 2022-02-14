
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dynobj; } ;
struct ppc_elf_link_hash_table {TYPE_1__ elf; } ;
struct bfd_link_info {int dummy; } ;
typedef int flagword ;
struct TYPE_6__ {int * section; int name; } ;
typedef TYPE_2__ elf_linker_section_t ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct ppc_elf_link_hash_table*,TYPE_2__*) ;
 struct ppc_elf_link_hash_table* FUNC_3 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_6,
          struct bfd_link_info *VAR_7,
          flagword VAR_8,
          elf_linker_section_t *VAR_9)
{
  struct ppc_elf_link_hash_table *VAR_10 = FUNC_3 (VAR_7);
  asection *VAR_11;

  VAR_8 |= (VAR_1 | VAR_5 | VAR_2 | VAR_3
     | VAR_4);


  if (!VAR_10->elf.dynobj)
    VAR_10->elf.dynobj = VAR_6;

  VAR_11 = FUNC_0 (VAR_10->elf.dynobj,
       VAR_9->name,
       VAR_8);
  if (VAR_11 == ((void*)0)
      || !FUNC_1 (VAR_10->elf.dynobj, VAR_11, 2))
    return VAR_0;
  VAR_9->section = VAR_11;

  return FUNC_2 (VAR_10, VAR_9);
}
