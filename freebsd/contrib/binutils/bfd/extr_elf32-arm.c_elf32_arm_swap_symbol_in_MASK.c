
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {int st_value; int st_info; } ;
typedef TYPE_1__ Elf_Internal_Sym ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,void const*,void const*,TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd * VAR_4,
     const void *VAR_5,
     const void *VAR_6,
     Elf_Internal_Sym *VAR_7)
{
  if (!FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_7))
    return VAR_0;



  if (FUNC_2 (VAR_7->st_info) == VAR_2
      && (VAR_7->st_value & 1))
    {
      VAR_7->st_info = FUNC_1 (FUNC_0 (VAR_7->st_info), VAR_1);
      VAR_7->st_value &= ~(bfd_vma) 1;
    }
  return VAR_3;
}
