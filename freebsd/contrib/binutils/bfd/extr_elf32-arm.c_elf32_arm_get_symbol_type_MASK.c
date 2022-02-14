
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_info; } ;
typedef TYPE_1__ Elf_Internal_Sym ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1 (Elf_Internal_Sym * VAR_2, int VAR_3)
{
  switch (FUNC_0 (VAR_2->st_info))
    {
    case 128:
      return FUNC_0 (VAR_2->st_info);

    case 129:




      if (VAR_3 != VAR_0 && VAR_3 != VAR_1)
 return FUNC_0 (VAR_2->st_info);
      break;

    default:
      break;
    }

  return VAR_3;
}
