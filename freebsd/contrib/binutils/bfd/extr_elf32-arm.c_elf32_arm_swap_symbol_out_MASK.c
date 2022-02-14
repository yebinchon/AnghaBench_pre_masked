
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_4__ {scalar_t__ st_shndx; int st_value; int st_info; } ;
typedef TYPE_1__ Elf_Internal_Sym ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_1__ const*,void*,void*) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_3,
      const Elf_Internal_Sym *VAR_4,
      void *VAR_5,
      void *VAR_6)
{
  Elf_Internal_Sym VAR_7;





  if (FUNC_2 (VAR_4->st_info) == VAR_1)
    {
      VAR_7 = *VAR_4;
      VAR_7.st_info = FUNC_1 (FUNC_0 (VAR_4->st_info), VAR_2);
      if (VAR_7.st_shndx != VAR_0)
        {
          VAR_7.st_value |= 1;
        }

      VAR_4 = &VAR_7;
    }
  FUNC_3 (VAR_3, VAR_4, VAR_5, VAR_6);
}
