
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct elf_backend_data {TYPE_1__* s; } ;
typedef scalar_t__ file_ptr ;
typedef size_t bfd_size_type ;
typedef int const bfd_byte ;
typedef int bfd ;
struct TYPE_6__ {scalar_t__ sh_size; scalar_t__ sh_offset; } ;
struct TYPE_7__ {TYPE_2__ symtab_shndx_hdr; TYPE_2__ symtab_hdr; } ;
struct TYPE_5__ {size_t sizeof_sym; int (* swap_symbol_in ) (int *,int const*,void*,int *) ;} ;
typedef int Elf_Internal_Sym ;
typedef TYPE_2__ Elf_Internal_Shdr ;
typedef void Elf_External_Sym_Shndx ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,unsigned long) ;
 size_t FUNC_2 (void*,size_t,int *) ;
 void* FUNC_3 (size_t,int) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ) ;
 TYPE_3__* FUNC_5 (int *) ;
 int FUNC_6 (void*) ;
 struct elf_backend_data* FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,void*,int *) ;
 int FUNC_9 (int ,int *,unsigned long) ;

Elf_Internal_Sym *
FUNC_10 (bfd *VAR_1,
        Elf_Internal_Shdr *VAR_2,
        size_t VAR_3,
        size_t VAR_4,
        Elf_Internal_Sym *VAR_5,
        void *VAR_6,
        Elf_External_Sym_Shndx *VAR_7)
{
  Elf_Internal_Shdr *VAR_8;
  void *VAR_9;
  const bfd_byte *VAR_10;
  Elf_External_Sym_Shndx *VAR_11;
  Elf_External_Sym_Shndx *VAR_12;
  Elf_Internal_Sym *VAR_13;
  Elf_Internal_Sym *VAR_14;
  const struct elf_backend_data *VAR_15;
  size_t VAR_16;
  bfd_size_type VAR_17;
  file_ptr VAR_18;

  if (VAR_3 == 0)
    return VAR_5;


  VAR_8 = ((void*)0);
  if (VAR_2 == &FUNC_5 (VAR_1)->symtab_hdr)
    VAR_8 = &FUNC_5 (VAR_1)->symtab_shndx_hdr;


  VAR_9 = ((void*)0);
  VAR_11 = ((void*)0);
  VAR_15 = FUNC_7 (VAR_1);
  VAR_16 = VAR_15->s->sizeof_sym;
  VAR_17 = VAR_3 * VAR_16;
  VAR_18 = VAR_2->sh_offset + VAR_4 * VAR_16;
  if (VAR_6 == ((void*)0))
    {
      VAR_9 = FUNC_3 (VAR_3, VAR_16);
      VAR_6 = VAR_9;
    }
  if (VAR_6 == ((void*)0)
      || FUNC_4 (VAR_1, VAR_18, VAR_0) != 0
      || FUNC_2 (VAR_6, VAR_17, VAR_1) != VAR_17)
    {
      VAR_5 = ((void*)0);
      goto out;
    }

  if (VAR_8 == ((void*)0) || VAR_8->sh_size == 0)
    VAR_7 = ((void*)0);
  else
    {
      VAR_17 = VAR_3 * sizeof (Elf_External_Sym_Shndx);
      VAR_18 = VAR_8->sh_offset + VAR_4 * sizeof (Elf_External_Sym_Shndx);
      if (VAR_7 == ((void*)0))
 {
   VAR_11 = FUNC_3 (VAR_3,
     sizeof (Elf_External_Sym_Shndx));
   VAR_7 = VAR_11;
 }
      if (VAR_7 == ((void*)0)
   || FUNC_4 (VAR_1, VAR_18, VAR_0) != 0
   || FUNC_2 (VAR_7, VAR_17, VAR_1) != VAR_17)
 {
   VAR_5 = ((void*)0);
   goto out;
 }
    }

  if (VAR_5 == ((void*)0))
    {
      VAR_5 = FUNC_3 (VAR_3, sizeof (Elf_Internal_Sym));
      if (VAR_5 == ((void*)0))
 goto out;
    }


  VAR_14 = VAR_5 + VAR_3;
  for (VAR_10 = VAR_6, VAR_13 = VAR_5, VAR_12 = VAR_7;
       VAR_13 < VAR_14;
       VAR_10 += VAR_16, VAR_13++, VAR_12 = VAR_12 != ((void*)0) ? VAR_12 + 1 : ((void*)0))
    if (!(*VAR_15->s->swap_symbol_in) (VAR_1, VAR_10, VAR_12, VAR_13))
      {
 VAR_4 += (VAR_10 - (bfd_byte *) VAR_6) / VAR_16;
 FUNC_1) (FUNC_0("%B symbol number %lu references "
     "nonexistent SHT_SYMTAB_SHNDX section"),
          VAR_1, (unsigned long) VAR_4);
 VAR_5 = ((void*)0);
 goto out;
      }

 out:
  if (VAR_9 != ((void*)0))
    FUNC_6 (VAR_9);
  if (VAR_11 != ((void*)0))
    FUNC_6 (VAR_11);

  return VAR_5;
}
