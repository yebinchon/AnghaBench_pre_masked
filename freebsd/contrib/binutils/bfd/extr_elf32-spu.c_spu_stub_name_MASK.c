
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* string; } ;
struct TYPE_8__ {TYPE_1__ root; } ;
struct elf_link_hash_entry {TYPE_2__ root; } ;
typedef int bfd_size_type ;
struct TYPE_9__ {int id; } ;
typedef TYPE_3__ asection ;
struct TYPE_10__ {scalar_t__ r_addend; int r_info; } ;
typedef TYPE_4__ Elf_Internal_Rela ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4 (const asection *VAR_0,
        const struct elf_link_hash_entry *VAR_1,
        const Elf_Internal_Rela *VAR_2)
{
  char *VAR_3;
  bfd_size_type VAR_4;

  if (VAR_1)
    {
      VAR_4 = FUNC_3 (VAR_1->root.root.string) + 1 + 8 + 1;
      VAR_3 = FUNC_1 (VAR_4);
      if (VAR_3 == ((void*)0))
 return VAR_3;

      FUNC_2 (VAR_3, "%s+%x",
        VAR_1->root.root.string,
        (int) VAR_2->r_addend & 0xffffffff);
      VAR_4 -= 8;
    }
  else
    {
      VAR_4 = 8 + 1 + 8 + 1 + 8 + 1;
      VAR_3 = FUNC_1 (VAR_4);
      if (VAR_3 == ((void*)0))
 return VAR_3;

      FUNC_2 (VAR_3, "%x:%x+%x",
        VAR_0->id & 0xffffffff,
        (int) FUNC_0 (VAR_2->r_info) & 0xffffffff,
        (int) VAR_2->r_addend & 0xffffffff);
      VAR_4 = FUNC_3 (VAR_3);
    }

  if (VAR_3[VAR_4 - 2] == '+'
      && VAR_3[VAR_4 - 1] == '0'
      && VAR_3[VAR_4] == 0)
    VAR_3[VAR_4 - 2] = 0;

  return VAR_3;
}
