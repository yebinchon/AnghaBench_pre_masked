
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfd_link_hash_table {int dummy; } ;
struct TYPE_6__ {struct bfd_link_hash_table root; } ;
struct TYPE_5__ {scalar_t__ refcount; } ;
struct TYPE_4__ {int * abfd; } ;
struct elf64_x86_64_link_hash_table {TYPE_3__ elf; scalar_t__ sgotplt_jump_table_size; TYPE_2__ tls_ld_got; scalar_t__ tlsdesc_got; scalar_t__ tlsdesc_plt; TYPE_1__ sym_sec; int * srelbss; int * sdynbss; int * srelplt; int * splt; int * srelgot; int * sgotplt; int * sgot; } ;
struct elf64_x86_64_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;


 int FUNC_0 (TYPE_3__*,int *,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct elf64_x86_64_link_hash_table*) ;
 int VAR_0 ;

__attribute__((used)) static struct bfd_link_hash_table *
FUNC_3 (bfd *VAR_1)
{
  struct elf64_x86_64_link_hash_table *VAR_2;
  bfd_size_type VAR_3 = sizeof (struct elf64_x86_64_link_hash_table);

  VAR_2 = (struct elf64_x86_64_link_hash_table *) FUNC_1 (VAR_3);
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  if (!FUNC_0 (&VAR_2->elf, VAR_1, VAR_0,
          sizeof (struct elf64_x86_64_link_hash_entry)))
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
  VAR_2->sym_sec.abfd = ((void*)0);
  VAR_2->tlsdesc_plt = 0;
  VAR_2->tlsdesc_got = 0;
  VAR_2->tls_ld_got.refcount = 0;
  VAR_2->sgotplt_jump_table_size = 0;

  return &VAR_2->elf.root;
}
