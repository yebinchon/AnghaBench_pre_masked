
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ppc_elf_link_hash_table {int glink; int elf; } ;
struct plt_entry {int glink_offset; TYPE_1__* sec; scalar_t__ addend; } ;
struct TYPE_8__ {int value; int section; } ;
struct TYPE_9__ {TYPE_3__ def; } ;
struct TYPE_7__ {char const* string; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ u; TYPE_2__ root; } ;
struct elf_link_hash_entry {int ref_regular; int def_regular; int ref_regular_nonweak; int forced_local; scalar_t__ non_elf; TYPE_5__ root; } ;
struct bfd_link_info {scalar_t__ pie; scalar_t__ shared; } ;
typedef int bfd_boolean ;
struct TYPE_6__ {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (size_t) ;
 struct elf_link_hash_entry* FUNC_1 (int *,char*,int ,int ,int ) ;
 int FUNC_2 (char*,char const*,size_t) ;
 struct ppc_elf_link_hash_table* FUNC_3 (struct bfd_link_info*) ;
 int FUNC_4 (char*,char*,unsigned int) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct plt_entry *VAR_4,
       struct elf_link_hash_entry *VAR_5,
       struct bfd_link_info *VAR_6)
{
  struct elf_link_hash_entry *VAR_7;
  size_t VAR_8, VAR_9, VAR_10;
  char *VAR_11;
  const char *VAR_12;
  struct ppc_elf_link_hash_table *VAR_13 = FUNC_3 (VAR_6);

  if (VAR_6->shared || VAR_6->pie)
    VAR_12 = ".plt_pic32.";
  else
    VAR_12 = ".plt_call32.";

  VAR_8 = FUNC_5 (VAR_5->root.root.string);
  VAR_9 = FUNC_5 (VAR_12);
  VAR_10 = 0;
  if (VAR_4->sec)
    VAR_10 = FUNC_5 (VAR_4->sec->name);
  VAR_11 = FUNC_0 (VAR_8 + VAR_9 + VAR_10 + 9);
  if (VAR_11 == ((void*)0))
    return VAR_0;
  FUNC_4 (VAR_11, "%08x", (unsigned) VAR_4->addend & 0xffffffff);
  if (VAR_4->sec)
    FUNC_2 (VAR_11 + 8, VAR_4->sec->name, VAR_10);
  FUNC_2 (VAR_11 + 8 + VAR_10, VAR_12, VAR_9);
  FUNC_2 (VAR_11 + 8 + VAR_10 + VAR_9, VAR_5->root.root.string, VAR_8 + 1);
  VAR_7 = FUNC_1 (&VAR_13->elf, VAR_11, VAR_1, VAR_0, VAR_0);
  if (VAR_7 == ((void*)0))
    return VAR_0;
  if (VAR_7->root.type == VAR_3)
    {
      VAR_7->root.type = VAR_2;
      VAR_7->root.u.def.section = VAR_13->glink;
      VAR_7->root.u.def.value = VAR_4->glink_offset;
      VAR_7->ref_regular = 1;
      VAR_7->def_regular = 1;
      VAR_7->ref_regular_nonweak = 1;
      VAR_7->forced_local = 1;
      VAR_7->non_elf = 0;
    }
  return VAR_1;
}
