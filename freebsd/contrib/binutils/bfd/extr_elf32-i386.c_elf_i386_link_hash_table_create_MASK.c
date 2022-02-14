
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfd_link_hash_table {int dummy; } ;
struct TYPE_6__ {struct bfd_link_hash_table root; } ;
struct TYPE_5__ {int * abfd; } ;
struct TYPE_4__ {scalar_t__ refcount; } ;
struct elf_i386_link_hash_table {TYPE_3__ elf; scalar_t__ plt0_pad_byte; int * srelplt2; scalar_t__ is_vxworks; TYPE_2__ sym_sec; scalar_t__ sgotplt_jump_table_size; scalar_t__ next_tls_desc_index; TYPE_1__ tls_ldm_got; int * srelbss; int * sdynbss; int * srelplt; int * splt; int * srelgot; int * sgotplt; int * sgot; } ;
struct elf_i386_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;


 int FUNC_0 (TYPE_3__*,int *,int ,int) ;
 struct elf_i386_link_hash_table* FUNC_1 (int) ;
 int FUNC_2 (struct elf_i386_link_hash_table*) ;
 int VAR_0 ;

__attribute__((used)) static struct bfd_link_hash_table *
FUNC_3 (bfd *VAR_1)
{
  struct elf_i386_link_hash_table *VAR_2;
  bfd_size_type VAR_3 = sizeof (struct elf_i386_link_hash_table);

  VAR_2 = FUNC_1 (VAR_3);
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  if (!FUNC_0 (&VAR_2->elf, VAR_1, VAR_0,
          sizeof (struct elf_i386_link_hash_entry)))
    {
      FUNC_2 (VAR_2);
      return ((void*)0);
    }

  VAR_2->sgot = ((void*)0);
  VAR_2->sgotplt = ((void*)0);
  VAR_2->srelgot = ((void*)0);
  VAR_2->splt = ((void*)0);
  VAR_2->srelplt = ((void*)0);
  VAR_2->sdynbss = ((void*)0);
  VAR_2->srelbss = ((void*)0);
  VAR_2->tls_ldm_got.refcount = 0;
  VAR_2->next_tls_desc_index = 0;
  VAR_2->sgotplt_jump_table_size = 0;
  VAR_2->sym_sec.abfd = ((void*)0);
  VAR_2->is_vxworks = 0;
  VAR_2->srelplt2 = ((void*)0);
  VAR_2->plt0_pad_byte = 0;

  return &VAR_2->elf.root;
}
