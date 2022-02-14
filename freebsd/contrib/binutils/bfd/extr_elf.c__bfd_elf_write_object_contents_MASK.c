
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct elf_backend_data {TYPE_2__* s; int (* elf_backend_final_write_processing ) (TYPE_3__*,int ) ;int (* elf_backend_section_processing ) (TYPE_3__*,TYPE_4__*) ;} ;
typedef scalar_t__ bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_27__ {int output_has_begun; } ;
typedef TYPE_3__ bfd ;
struct TYPE_28__ {scalar_t__ sh_size; scalar_t__ contents; int sh_offset; } ;
struct TYPE_26__ {scalar_t__ (* write_shdrs_and_ehdr ) (TYPE_3__*) ;int write_relocs; } ;
struct TYPE_25__ {int sh_offset; } ;
struct TYPE_24__ {int linker; TYPE_1__ shstrtab_hdr; } ;
typedef TYPE_4__ Elf_Internal_Shdr ;
typedef int Elf_Internal_Ehdr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ) ;
 int * FUNC_6 (TYPE_3__*) ;
 TYPE_4__** FUNC_7 (TYPE_3__*) ;
 unsigned int FUNC_8 (TYPE_3__*) ;
 int * FUNC_9 (TYPE_3__*) ;
 TYPE_10__* FUNC_10 (TYPE_3__*) ;
 struct elf_backend_data* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;

bfd_boolean
FUNC_15 (bfd *VAR_4)
{
  const struct elf_backend_data *VAR_5 = FUNC_11 (VAR_4);
  Elf_Internal_Ehdr *VAR_6;
  Elf_Internal_Shdr **VAR_7;
  bfd_boolean VAR_8;
  unsigned int VAR_9, VAR_10;

  if (! VAR_4->output_has_begun
      && ! FUNC_1 (VAR_4, ((void*)0)))
    return VAR_0;

  VAR_7 = FUNC_7 (VAR_4);
  VAR_6 = FUNC_6 (VAR_4);

  VAR_8 = VAR_0;
  FUNC_4 (VAR_4, VAR_5->s->write_relocs, &VAR_8);
  if (VAR_8)
    return VAR_0;

  FUNC_0 (VAR_4);


  VAR_10 = FUNC_8 (VAR_4);
  for (VAR_9 = 1; VAR_9 < VAR_10; VAR_9++)
    {
      if (VAR_5->elf_backend_section_processing)
 (*VAR_5->elf_backend_section_processing) (VAR_4, VAR_7[VAR_9]);
      if (VAR_7[VAR_9]->contents)
 {
   bfd_size_type VAR_11 = VAR_7[VAR_9]->sh_size;

   if (FUNC_5 (VAR_4, VAR_7[VAR_9]->sh_offset, VAR_1) != 0
       || FUNC_3 (VAR_7[VAR_9]->contents, VAR_11, VAR_4) != VAR_11)
     return VAR_0;
 }
      if (VAR_9 == VAR_3 - 1)
 VAR_9 += VAR_2 + 1 - VAR_3;
    }


  if (FUNC_9 (VAR_4) != ((void*)0)
      && (FUNC_5 (VAR_4, FUNC_10 (VAR_4)->shstrtab_hdr.sh_offset, VAR_1) != 0
   || !FUNC_2 (VAR_4, FUNC_9 (VAR_4))))
    return VAR_0;

  if (VAR_5->elf_backend_final_write_processing)
    (*VAR_5->elf_backend_final_write_processing) (VAR_4,
      FUNC_10 (VAR_4)->linker);

  return VAR_5->s->write_shdrs_and_ehdr (VAR_4);
}
