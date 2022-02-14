
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* file_ptr ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_5__ {unsigned int sh_addralign; scalar_t__ sh_type; scalar_t__ sh_size; TYPE_1__* bfd_section; void* sh_offset; } ;
struct TYPE_4__ {void* filepos; } ;
typedef TYPE_2__ Elf_Internal_Shdr ;


 void* FUNC_0 (void*,unsigned int) ;
 scalar_t__ VAR_0 ;

file_ptr
FUNC_1 (Elf_Internal_Shdr *VAR_1,
        file_ptr VAR_2,
        bfd_boolean VAR_3)
{
  if (VAR_3)
    {
      unsigned int VAR_4;

      VAR_4 = VAR_1->sh_addralign;
      if (VAR_4 > 1)
 VAR_2 = FUNC_0 (VAR_2, VAR_4);
    }
  VAR_1->sh_offset = VAR_2;
  if (VAR_1->bfd_section != ((void*)0))
    VAR_1->bfd_section->filepos = VAR_2;
  if (VAR_1->sh_type != VAR_0)
    VAR_2 += VAR_1->sh_size;
  return VAR_2;
}
