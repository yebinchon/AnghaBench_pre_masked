
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_4__ {int sh_type; int * bfd_section; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,char const*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_3,
          Elf_Internal_Shdr *VAR_4,
          const char *VAR_5,
          int VAR_6)
{
  asection *VAR_7;






  switch (VAR_4->sh_type)
    {
    case 128:
      if (FUNC_3 (VAR_5, ".mdebug") != 0)
 return VAR_0;
      break;
    default:
      return VAR_0;
    }

  if (! FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6))
    return VAR_0;
  VAR_7 = VAR_4->bfd_section;

  if (VAR_4->sh_type == 128)
    {
      if (! FUNC_2 (VAR_3, VAR_7,
       (FUNC_1 (VAR_3, VAR_7)
        | VAR_1)))
 return VAR_0;
    }

  return VAR_2;
}
