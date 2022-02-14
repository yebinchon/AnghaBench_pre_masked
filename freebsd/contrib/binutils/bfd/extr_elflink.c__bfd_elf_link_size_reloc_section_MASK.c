
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct elf_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int reloc_count; } ;
typedef TYPE_1__ asection ;
struct TYPE_8__ {int sh_size; int sh_entsize; int * contents; } ;
struct TYPE_9__ {int rel_count; int rel_count2; struct elf_link_hash_entry** rel_hashes; TYPE_2__ rel_hdr; } ;
typedef TYPE_2__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;
 struct elf_link_hash_entry** FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;

bfd_boolean
FUNC_3 (bfd *VAR_2,
      Elf_Internal_Shdr *VAR_3,
      asection *VAR_4)
{
  bfd_size_type VAR_5;
  bfd_size_type VAR_6;


  if (VAR_3 == &FUNC_2 (VAR_4)->rel_hdr)
    VAR_5 = FUNC_2 (VAR_4)->rel_count;
  else
    VAR_5 = FUNC_2 (VAR_4)->rel_count2;

  VAR_6 = VAR_4->reloc_count;
  if (VAR_6 < VAR_5)
    VAR_6 = VAR_5;


  VAR_3->sh_size = VAR_3->sh_entsize * VAR_5;





  VAR_3->contents = FUNC_0 (VAR_2, VAR_3->sh_size);
  if (VAR_3->contents == ((void*)0) && VAR_3->sh_size != 0)
    return VAR_0;



  if (FUNC_2 (VAR_4)->rel_hashes == ((void*)0)
      && VAR_6)
    {
      struct elf_link_hash_entry **VAR_7;

      VAR_7 = FUNC_1 (VAR_6 * sizeof (struct elf_link_hash_entry *));
      if (VAR_7 == ((void*)0))
 return VAR_0;

      FUNC_2 (VAR_4)->rel_hashes = VAR_7;
    }

  return VAR_1;
}
