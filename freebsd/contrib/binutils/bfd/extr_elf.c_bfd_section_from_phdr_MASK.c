
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct elf_backend_data {int (* elf_backend_section_from_phdr ) (int *,TYPE_1__*,int,char*) ;} ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {int p_type; int p_filesz; int p_offset; } ;
typedef TYPE_1__ Elf_Internal_Phdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 struct elf_backend_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int,char*) ;

bfd_boolean
FUNC_4 (bfd *VAR_2, Elf_Internal_Phdr *VAR_3, int VAR_4)
{
  const struct elf_backend_data *VAR_5;

  switch (VAR_3->p_type)
    {
    case 130:
      return FUNC_0 (VAR_2, VAR_3, VAR_4, "null");

    case 132:
      return FUNC_0 (VAR_2, VAR_3, VAR_4, "load");

    case 137:
      return FUNC_0 (VAR_2, VAR_3, VAR_4, "dynamic");

    case 133:
      return FUNC_0 (VAR_2, VAR_3, VAR_4, "interp");

    case 131:
      if (! FUNC_0 (VAR_2, VAR_3, VAR_4, "note"))
 return VAR_0;
      if (! FUNC_1 (VAR_2, VAR_3->p_offset, VAR_3->p_filesz))
 return VAR_0;
      return VAR_1;

    case 128:
      return FUNC_0 (VAR_2, VAR_3, VAR_4, "shlib");

    case 129:
      return FUNC_0 (VAR_2, VAR_3, VAR_4, "phdr");

    case 136:
      return FUNC_0 (VAR_2, VAR_3, VAR_4,
           "eh_frame_hdr");

    case 134:
      return FUNC_0 (VAR_2, VAR_3, VAR_4, "stack");

    case 135:
      return FUNC_0 (VAR_2, VAR_3, VAR_4, "relro");

    default:

      VAR_5 = FUNC_2 (VAR_2);
      return VAR_5->elf_backend_section_from_phdr (VAR_2, VAR_3, VAR_4, "proc");
    }
}
