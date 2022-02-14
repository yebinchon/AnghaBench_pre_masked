
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifd; } ;
struct mips_elf_link_hash_entry {int tls_type; void* is_relocation_target; void* is_branch_target; void* forced_local; int * call_fp_stub; int * call_stub; void* need_fn_stub; int * fn_stub; void* no_fn_stub; void* readonly_reloc; scalar_t__ possibly_dynamic_relocs; TYPE_1__ esym; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
typedef int EXTR ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 struct mips_elf_link_hash_entry* FUNC_1 (struct bfd_hash_table*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_3 (struct bfd_hash_entry *VAR_2,
       struct bfd_hash_table *VAR_3, const char *VAR_4)
{
  struct mips_elf_link_hash_entry *VAR_5 =
    (struct mips_elf_link_hash_entry *) VAR_2;



  if (VAR_5 == ((void*)0))
    VAR_5 = FUNC_1 (VAR_3, sizeof (struct mips_elf_link_hash_entry));
  if (VAR_5 == ((void*)0))
    return (struct bfd_hash_entry *) VAR_5;


  VAR_5 = ((struct mips_elf_link_hash_entry *)
  FUNC_0 ((struct bfd_hash_entry *) VAR_5,
         VAR_3, VAR_4));
  if (VAR_5 != ((void*)0))
    {

      FUNC_2 (&VAR_5->esym, 0, sizeof (EXTR));


      VAR_5->esym.ifd = -2;
      VAR_5->possibly_dynamic_relocs = 0;
      VAR_5->readonly_reloc = VAR_0;
      VAR_5->no_fn_stub = VAR_0;
      VAR_5->fn_stub = ((void*)0);
      VAR_5->need_fn_stub = VAR_0;
      VAR_5->call_stub = ((void*)0);
      VAR_5->call_fp_stub = ((void*)0);
      VAR_5->forced_local = VAR_0;
      VAR_5->is_branch_target = VAR_0;
      VAR_5->is_relocation_target = VAR_0;
      VAR_5->tls_type = VAR_1;
    }

  return (struct bfd_hash_entry *) VAR_5;
}
