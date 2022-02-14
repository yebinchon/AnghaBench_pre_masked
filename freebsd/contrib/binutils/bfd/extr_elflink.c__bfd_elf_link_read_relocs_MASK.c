
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct elf_backend_data {TYPE_1__* s; } ;
typedef int bfd_size_type ;
typedef void bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_11__ {scalar_t__ reloc_count; } ;
typedef TYPE_2__ asection ;
struct TYPE_12__ {int sh_size; } ;
struct TYPE_13__ {void* relocs; TYPE_3__* rel_hdr2; TYPE_3__ rel_hdr; } ;
struct TYPE_10__ {int int_rels_per_ext_rel; } ;
typedef TYPE_3__ Elf_Internal_Shdr ;
typedef void Elf_Internal_Rela ;


 int FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (int *,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_3__*,void*,void*) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (void*) ;
 struct elf_backend_data* FUNC_6 (int *) ;

Elf_Internal_Rela *
FUNC_7 (bfd *VAR_0,
      asection *VAR_1,
      void *VAR_2,
      Elf_Internal_Rela *VAR_3,
      bfd_boolean VAR_4)
{
  Elf_Internal_Shdr *VAR_5;
  void *VAR_6 = ((void*)0);
  Elf_Internal_Rela *VAR_7 = ((void*)0);
  const struct elf_backend_data *VAR_8 = FUNC_6 (VAR_0);

  if (FUNC_4 (VAR_1)->relocs != ((void*)0))
    return FUNC_4 (VAR_1)->relocs;

  if (VAR_1->reloc_count == 0)
    return ((void*)0);

  VAR_5 = &FUNC_4 (VAR_1)->rel_hdr;

  if (VAR_3 == ((void*)0))
    {
      bfd_size_type VAR_9;

      VAR_9 = VAR_1->reloc_count;
      VAR_9 *= VAR_8->s->int_rels_per_ext_rel * sizeof (Elf_Internal_Rela);
      if (VAR_4)
 VAR_3 = FUNC_1 (VAR_0, VAR_9);
      else
 VAR_3 = VAR_7 = FUNC_2 (VAR_9);
      if (VAR_3 == ((void*)0))
 goto error_return;
    }

  if (VAR_2 == ((void*)0))
    {
      bfd_size_type VAR_10 = VAR_5->sh_size;

      if (FUNC_4 (VAR_1)->rel_hdr2)
 VAR_10 += FUNC_4 (VAR_1)->rel_hdr2->sh_size;
      VAR_6 = FUNC_2 (VAR_10);
      if (VAR_6 == ((void*)0))
 goto error_return;
      VAR_2 = VAR_6;
    }

  if (!FUNC_3 (VAR_0, VAR_1, VAR_5,
       VAR_2,
       VAR_3))
    goto error_return;
  if (FUNC_4 (VAR_1)->rel_hdr2
      && (!FUNC_3
   (VAR_0, VAR_1,
    FUNC_4 (VAR_1)->rel_hdr2,
    ((bfd_byte *) VAR_2) + VAR_5->sh_size,
    VAR_3 + (FUNC_0 (VAR_5)
         * VAR_8->s->int_rels_per_ext_rel))))
    goto error_return;


  if (VAR_4)
    FUNC_4 (VAR_1)->relocs = VAR_3;

  if (VAR_6 != ((void*)0))
    FUNC_5 (VAR_6);




  return VAR_3;

 error_return:
  if (VAR_6 != ((void*)0))
    FUNC_5 (VAR_6);
  if (VAR_7 != ((void*)0))
    FUNC_5 (VAR_7);
  return ((void*)0);
}
