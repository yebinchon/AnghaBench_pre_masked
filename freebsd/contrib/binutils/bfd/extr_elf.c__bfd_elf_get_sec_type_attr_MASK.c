
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elf_backend_data {struct bfd_elf_special_section const* special_sections; } ;
typedef struct bfd_elf_special_section const bfd_elf_special_section ;
typedef int bfd ;
struct TYPE_3__ {char* name; int use_rela_p; } ;
typedef TYPE_1__ asection ;


 struct bfd_elf_special_section const* FUNC_0 (char*,struct bfd_elf_special_section const*,int ) ;
 struct elf_backend_data* FUNC_1 (int *) ;
 struct bfd_elf_special_section const** VAR_0 ;

const struct bfd_elf_special_section *
FUNC_2 (bfd *VAR_1, asection *VAR_2)
{
  int VAR_3;
  const struct bfd_elf_special_section *VAR_4;
  const struct elf_backend_data *VAR_5;


  if (VAR_2->name == ((void*)0))
    return ((void*)0);

  VAR_5 = FUNC_1 (VAR_1);
  VAR_4 = VAR_5->special_sections;
  if (VAR_4)
    {
      VAR_4 = FUNC_0 (VAR_2->name,
        VAR_5->special_sections,
        VAR_2->use_rela_p);
      if (VAR_4 != ((void*)0))
 return VAR_4;
    }

  if (VAR_2->name[0] != '.')
    return ((void*)0);

  VAR_3 = VAR_2->name[1] - 'b';
  if (VAR_3 < 0 || VAR_3 > 't' - 'b')
    return ((void*)0);

  VAR_4 = VAR_0[VAR_3];

  if (VAR_4 == ((void*)0))
    return ((void*)0);

  return FUNC_0 (VAR_2->name, VAR_4, VAR_2->use_rela_p);
}
