
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {int sh_type; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,char const*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_2,
        Elf_Internal_Shdr * VAR_3,
        const char *VAR_4,
        int VAR_5)
{





  switch (VAR_3->sh_type)
    {
    case 129:
    case 128:
    case 130:
      break;

    default:
      return VAR_0;
    }

  if (! FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5))
    return VAR_0;

  return VAR_1;
}
