
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int * tdata; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
struct TYPE_9__ {int size; scalar_t__ kind; } ;
struct TYPE_8__ {scalar_t__ sh_type; int sh_size; int sh_flags; unsigned int sh_addralign; scalar_t__ sh_entsize; int * bfd_section; scalar_t__ sh_offset; int * contents; } ;
typedef TYPE_2__ Elf_Internal_Shdr ;
typedef TYPE_3__ Elf_Internal_Options ;
typedef int Elf_External_Options ;
typedef int Elf64_External_RegInfo ;
typedef int Elf32_External_RegInfo ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *,int ,int) ;
 int FUNC_7 (int *,int,int *) ;
 char* FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,TYPE_3__*) ;
 scalar_t__ FUNC_10 (int *,scalar_t__,int ) ;
 int FUNC_11 (int *) ;
 TYPE_4__* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (int ,int *,int ,int) ;

bfd_boolean
FUNC_15 (bfd *VAR_11, Elf_Internal_Shdr *VAR_12)
{
  if (VAR_12->sh_type == VAR_7
      && VAR_12->sh_size > 0)
    {
      bfd_byte VAR_13[4];

      FUNC_1 (VAR_12->sh_size == sizeof (Elf32_External_RegInfo));
      FUNC_1 (VAR_12->contents == ((void*)0));

      if (FUNC_10 (VAR_11,
      VAR_12->sh_offset + sizeof (Elf32_External_RegInfo) - 4,
      VAR_2) != 0)
 return VAR_0;
      FUNC_2 (VAR_11, FUNC_11 (VAR_11), VAR_13);
      if (FUNC_7 (VAR_13, 4, VAR_11) != 4)
 return VAR_0;
    }

  if (VAR_12->sh_type == VAR_6
      && VAR_12->bfd_section != ((void*)0)
      && FUNC_12 (VAR_12->bfd_section) != ((void*)0)
      && FUNC_12 (VAR_12->bfd_section)->u.tdata != ((void*)0))
    {
      bfd_byte *VAR_14, *VAR_15, *VAR_16;
      VAR_14 = FUNC_12 (VAR_12->bfd_section)->u.tdata;
      VAR_15 = VAR_14;
      VAR_16 = VAR_14 + VAR_12->sh_size;
      while (VAR_15 + sizeof (Elf_External_Options) <= VAR_16)
 {
   Elf_Internal_Options VAR_17;

   FUNC_9 (VAR_11, (Elf_External_Options *) VAR_15,
     &VAR_17);
   if (VAR_17.size < sizeof (Elf_External_Options))
     {
       FUNC_6)
  (FUNC_5("%B: Warning: bad `%s' option size %u smaller than its header"),
  VAR_11, FUNC_4 (VAR_11), VAR_17.size);
       break;
     }
   if (FUNC_0 (VAR_11) && VAR_17.kind == VAR_1)
     {
       bfd_byte VAR_18[8];

       if (FUNC_10 (VAR_11,
       (VAR_12->sh_offset
        + (VAR_15 - VAR_14)
        + sizeof (Elf_External_Options)
        + (sizeof (Elf64_External_RegInfo) - 8)),
        VAR_2) != 0)
  return VAR_0;
       FUNC_3 (VAR_11, FUNC_11 (VAR_11), VAR_18);
       if (FUNC_7 (VAR_18, 8, VAR_11) != 8)
  return VAR_0;
     }
   else if (VAR_17.kind == VAR_1)
     {
       bfd_byte VAR_19[4];

       if (FUNC_10 (VAR_11,
       (VAR_12->sh_offset
        + (VAR_15 - VAR_14)
        + sizeof (Elf_External_Options)
        + (sizeof (Elf32_External_RegInfo) - 4)),
       VAR_2) != 0)
  return VAR_0;
       FUNC_2 (VAR_11, FUNC_11 (VAR_11), VAR_19);
       if (FUNC_7 (VAR_19, 4, VAR_11) != 4)
  return VAR_0;
     }
   VAR_15 += VAR_17.size;
 }
    }

  if (VAR_12->bfd_section != ((void*)0))
    {
      const char *VAR_20 = FUNC_8 (VAR_11, VAR_12->bfd_section);

      if (FUNC_13 (VAR_20, ".sdata") == 0
   || FUNC_13 (VAR_20, ".lit8") == 0
   || FUNC_13 (VAR_20, ".lit4") == 0)
 {
   VAR_12->sh_flags |= VAR_3 | VAR_5 | VAR_4;
   VAR_12->sh_type = VAR_9;
 }
      else if (FUNC_13 (VAR_20, ".sbss") == 0)
 {
   VAR_12->sh_flags |= VAR_3 | VAR_5 | VAR_4;
   VAR_12->sh_type = VAR_8;
 }
      else if (FUNC_13 (VAR_20, ".srdata") == 0)
 {
   VAR_12->sh_flags |= VAR_3 | VAR_4;
   VAR_12->sh_type = VAR_9;
 }
      else if (FUNC_13 (VAR_20, ".compact_rel") == 0)
 {
   VAR_12->sh_flags = 0;
   VAR_12->sh_type = VAR_9;
 }
      else if (FUNC_13 (VAR_20, ".rtproc") == 0)
 {
   if (VAR_12->sh_addralign != 0 && VAR_12->sh_entsize == 0)
     {
       unsigned int VAR_21;

       VAR_21 = VAR_12->sh_size % VAR_12->sh_addralign;
       if (VAR_21 != 0)
  VAR_12->sh_size += VAR_12->sh_addralign - VAR_21;
     }
 }
    }

  return VAR_10;
}
