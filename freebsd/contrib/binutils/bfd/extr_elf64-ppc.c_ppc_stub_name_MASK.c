
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* string; } ;
struct TYPE_10__ {TYPE_1__ root; } ;
struct TYPE_11__ {TYPE_2__ root; } ;
struct ppc_link_hash_entry {TYPE_3__ elf; } ;
typedef int bfd_size_type ;
struct TYPE_12__ {int id; } ;
typedef TYPE_4__ asection ;
struct TYPE_13__ {int r_addend; int r_info; } ;
typedef TYPE_5__ Elf_Internal_Rela ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5 (const asection *VAR_0,
        const asection *VAR_1,
        const struct ppc_link_hash_entry *VAR_2,
        const Elf_Internal_Rela *VAR_3)
{
  char *VAR_4;
  bfd_size_type VAR_5;




  FUNC_0 (((int) VAR_3->r_addend & 0xffffffff) == VAR_3->r_addend);

  if (VAR_2)
    {
      VAR_5 = 8 + 1 + FUNC_4 (VAR_2->elf.root.root.string) + 1 + 8 + 1;
      VAR_4 = FUNC_2 (VAR_5);
      if (VAR_4 == ((void*)0))
 return VAR_4;

      FUNC_3 (VAR_4, "%08x.%s+%x",
        VAR_0->id & 0xffffffff,
        VAR_2->elf.root.root.string,
        (int) VAR_3->r_addend & 0xffffffff);
    }
  else
    {
      VAR_5 = 8 + 1 + 8 + 1 + 8 + 1 + 8 + 1;
      VAR_4 = FUNC_2 (VAR_5);
      if (VAR_4 == ((void*)0))
 return VAR_4;

      FUNC_3 (VAR_4, "%08x.%x:%x+%x",
        VAR_0->id & 0xffffffff,
        VAR_1->id & 0xffffffff,
        (int) FUNC_1 (VAR_3->r_info) & 0xffffffff,
        (int) VAR_3->r_addend & 0xffffffff);
    }
  if (VAR_4[VAR_5 - 2] == '+' && VAR_4[VAR_5 - 1] == '0')
    VAR_4[VAR_5 - 2] = 0;
  return VAR_4;
}
