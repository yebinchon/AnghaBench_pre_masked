
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_5__ {void* st_name; int st_shndx; int st_other; int st_info; int st_size; int st_value; } ;
struct TYPE_4__ {unsigned int st_name; unsigned int st_shndx; int st_other; int st_info; int st_size; int st_value; } ;
typedef TYPE_1__ Elf_Internal_Sym ;
typedef TYPE_2__ Elf_External_Sym ;


 int FUNC_0 (int *,unsigned int,int ) ;
 int FUNC_1 (int *,unsigned int,void*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_4 () ;

void
FUNC_5 (bfd *VAR_2,
       const Elf_Internal_Sym *VAR_3,
       void *VAR_4,
       void *VAR_5)
{
  unsigned int VAR_6;
  Elf_External_Sym *VAR_7 = VAR_4;
  FUNC_1 (VAR_2, VAR_3->st_name, VAR_7->st_name);
  FUNC_3 (VAR_2, VAR_3->st_value, VAR_7->st_value);
  FUNC_3 (VAR_2, VAR_3->st_size, VAR_7->st_size);
  FUNC_2 (VAR_2, VAR_3->st_info, VAR_7->st_info);
  FUNC_2 (VAR_2, VAR_3->st_other, VAR_7->st_other);
  VAR_6 = VAR_3->st_shndx;
  if (VAR_6 > VAR_0)
    {
      if (VAR_5 == ((void*)0))
 FUNC_4 ();
      FUNC_1 (VAR_2, VAR_6, VAR_5);
      VAR_6 = VAR_1;
    }
  FUNC_0 (VAR_2, VAR_6, VAR_7->st_shndx);
}
