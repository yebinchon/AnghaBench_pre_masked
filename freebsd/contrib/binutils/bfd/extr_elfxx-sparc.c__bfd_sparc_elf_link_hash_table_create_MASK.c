
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_link_hash_table {int dummy; } ;
struct TYPE_2__ {struct bfd_link_hash_table root; } ;
struct _bfd_sparc_elf_link_hash_table {int word_align_power; int align_power_max; int bytes_per_word; int bytes_per_rela; int dynamic_interpreter_size; TYPE_1__ elf; int dynamic_interpreter; int tpoff_reloc; int dtpmod_reloc; int dtpoff_reloc; int r_symndx; int r_info; int put_word; } ;
struct _bfd_sparc_elf_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;
typedef int Elf64_External_Rela ;
typedef int Elf32_External_Rela ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,int *,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct _bfd_sparc_elf_link_hash_table*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

struct bfd_link_hash_table *
FUNC_4 (bfd *VAR_15)
{
  struct _bfd_sparc_elf_link_hash_table *VAR_16;
  bfd_size_type VAR_17 = sizeof (struct _bfd_sparc_elf_link_hash_table);

  VAR_16 = (struct _bfd_sparc_elf_link_hash_table *) FUNC_2 (VAR_17);
  if (VAR_16 == ((void*)0))
    return ((void*)0);

  if (FUNC_0 (VAR_15))
    {
      VAR_16->put_word = VAR_14;
      VAR_16->r_info = VAR_10;
      VAR_16->r_symndx = VAR_12;
      VAR_16->dtpoff_reloc = VAR_5;
      VAR_16->dtpmod_reloc = VAR_3;
      VAR_16->tpoff_reloc = VAR_7;
      VAR_16->word_align_power = 3;
      VAR_16->align_power_max = 4;
      VAR_16->bytes_per_word = 8;
      VAR_16->bytes_per_rela = sizeof (Elf64_External_Rela);
      VAR_16->dynamic_interpreter = VAR_1;
      VAR_16->dynamic_interpreter_size = sizeof VAR_1;
    }
  else
    {
      VAR_16->put_word = VAR_13;
      VAR_16->r_info = VAR_9;
      VAR_16->r_symndx = VAR_11;
      VAR_16->dtpoff_reloc = VAR_4;
      VAR_16->dtpmod_reloc = VAR_2;
      VAR_16->tpoff_reloc = VAR_6;
      VAR_16->word_align_power = 2;
      VAR_16->align_power_max = 3;
      VAR_16->bytes_per_word = 4;
      VAR_16->bytes_per_rela = sizeof (Elf32_External_Rela);
      VAR_16->dynamic_interpreter = VAR_0;
      VAR_16->dynamic_interpreter_size = sizeof VAR_0;
    }

  if (!FUNC_1 (&VAR_16->elf, VAR_15, VAR_8,
          sizeof (struct _bfd_sparc_elf_link_hash_entry)))
    {
      FUNC_3 (VAR_16);
      return ((void*)0);
    }

  return &VAR_16->elf.root;
}
