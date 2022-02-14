
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct absaddr {scalar_t__ section; scalar_t__ offset; } ;
typedef scalar_t__ bfd_vma ;
struct TYPE_3__ {scalar_t__ st_name; scalar_t__ st_shndx; scalar_t__ st_value; int st_info; } ;
typedef TYPE_1__ Elf_Internal_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (Elf_Internal_Sym *VAR_2,
    unsigned long VAR_3,
    const char *VAR_4,
    unsigned long VAR_5,
    struct absaddr VAR_6,
    const char **VAR_7,
    bfd_vma *VAR_8)
{
  bfd_vma VAR_9 = 0x100000;
  Elf_Internal_Sym *VAR_10, *VAR_11 = ((void*)0);
  unsigned long VAR_12;

  for (VAR_12 = 0, VAR_10 = VAR_2; VAR_12 < VAR_3; ++VAR_12, ++VAR_10)
    {
      if (FUNC_0 (VAR_10->st_info) == VAR_1
   && VAR_10->st_name != 0
   && (VAR_6.section == VAR_0 || VAR_6.section == VAR_10->st_shndx)
   && VAR_6.offset >= VAR_10->st_value
   && VAR_6.offset - VAR_10->st_value < VAR_9)
 {
   VAR_11 = VAR_10;
   VAR_9 = VAR_6.offset - VAR_10->st_value;
   if (!VAR_9)
     break;
 }
    }
  if (VAR_11)
    {
      *VAR_7 = (VAR_11->st_name >= VAR_5
    ? "<corrupt>" : VAR_4 + VAR_11->st_name);
      *VAR_8 = VAR_9;
      return;
    }
  *VAR_7 = ((void*)0);
  *VAR_8 = VAR_6.offset;
}
