
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spu_link_hash_table {TYPE_1__* ovtab; int elf; } ;
struct TYPE_9__ {int string; } ;
struct TYPE_7__ {TYPE_1__* section; } ;
struct TYPE_8__ {TYPE_2__ def; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ root; TYPE_3__ u; } ;
struct elf_link_hash_entry {int def_regular; int ref_regular; int ref_regular_nonweak; TYPE_5__ root; scalar_t__ non_elf; int type; } ;
struct TYPE_6__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 struct elf_link_hash_entry* FUNC_3 (int *,char const*,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static struct elf_link_hash_entry *
FUNC_5 (struct spu_link_hash_table *VAR_5, const char *VAR_6)
{
  struct elf_link_hash_entry *VAR_7;

  VAR_7 = FUNC_3 (&VAR_5->elf, VAR_6, VAR_2, VAR_0, VAR_0);
  if (VAR_7 == ((void*)0))
    return ((void*)0);

  if (VAR_7->root.type != VAR_4
      || !VAR_7->def_regular)
    {
      VAR_7->root.type = VAR_4;
      VAR_7->root.u.def.section = VAR_5->ovtab;
      VAR_7->type = VAR_1;
      VAR_7->ref_regular = 1;
      VAR_7->def_regular = 1;
      VAR_7->ref_regular_nonweak = 1;
      VAR_7->non_elf = 0;
    }
  else
    {
      FUNC_1) (FUNC_0("%B is not allowed to define %s"),
        VAR_7->root.u.def.section->owner,
        VAR_7->root.root.string);
      FUNC_2 (VAR_3);
      return ((void*)0);
    }

  return VAR_7;
}
