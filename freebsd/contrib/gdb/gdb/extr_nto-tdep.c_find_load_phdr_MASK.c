
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_7__ {unsigned int e_phnum; } ;
struct TYPE_6__ {TYPE_1__* phdr; } ;
struct TYPE_5__ {scalar_t__ p_type; int p_flags; } ;
typedef TYPE_1__ Elf_Internal_Phdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;

Elf_Internal_Phdr *
FUNC_2 (bfd *VAR_2)
{
  Elf_Internal_Phdr *VAR_3;
  unsigned int VAR_4;

  if (!FUNC_1 (VAR_2))
    return ((void*)0);

  VAR_3 = FUNC_1 (VAR_2)->phdr;
  for (VAR_4 = 0; VAR_4 < FUNC_0 (VAR_2)->e_phnum; VAR_4++, VAR_3++)
    {
      if (VAR_3->p_type == VAR_1 && (VAR_3->p_flags & VAR_0))
 return VAR_3;
    }
  return ((void*)0);
}
