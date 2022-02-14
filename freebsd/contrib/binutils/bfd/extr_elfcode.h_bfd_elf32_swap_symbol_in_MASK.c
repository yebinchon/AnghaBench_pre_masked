
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_9__ {int sign_extend_vma; } ;
struct TYPE_8__ {int st_shndx; int st_other; int st_info; int st_size; int st_value; int st_name; } ;
struct TYPE_7__ {int est_shndx; } ;
struct TYPE_6__ {void* st_shndx; void* st_other; void* st_info; void* st_size; void* st_value; void* st_name; } ;
typedef TYPE_1__ Elf_Internal_Sym ;
typedef TYPE_2__ Elf_External_Sym_Shndx ;
typedef TYPE_3__ Elf_External_Sym ;


 int VAR_0 ;
 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 void* FUNC_3 (int *,int ) ;
 void* FUNC_4 (int *,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_5 (int *) ;

bfd_boolean
FUNC_6 (bfd *VAR_3,
      const void *VAR_4,
      const void *VAR_5,
      Elf_Internal_Sym *VAR_6)
{
  const Elf_External_Sym *VAR_7 = VAR_4;
  const Elf_External_Sym_Shndx *VAR_8 = VAR_5;
  int VAR_9 = FUNC_5 (VAR_3)->sign_extend_vma;

  VAR_6->st_name = FUNC_1 (VAR_3, VAR_7->st_name);
  if (VAR_9)
    VAR_6->st_value = FUNC_3 (VAR_3, VAR_7->st_value);
  else
    VAR_6->st_value = FUNC_4 (VAR_3, VAR_7->st_value);
  VAR_6->st_size = FUNC_4 (VAR_3, VAR_7->st_size);
  VAR_6->st_info = FUNC_2 (VAR_3, VAR_7->st_info);
  VAR_6->st_other = FUNC_2 (VAR_3, VAR_7->st_other);
  VAR_6->st_shndx = FUNC_0 (VAR_3, VAR_7->st_shndx);
  if (VAR_6->st_shndx == VAR_1)
    {
      if (VAR_8 == ((void*)0))
 return VAR_0;
      VAR_6->st_shndx = FUNC_1 (VAR_3, VAR_8->est_shndx);
    }
  return VAR_2;
}
