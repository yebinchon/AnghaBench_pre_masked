
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* string; } ;
struct TYPE_7__ {TYPE_1__ root; } ;
struct elf_link_hash_entry {int forced_local; int type; TYPE_2__ root; } ;
struct elf32_arm_link_hash_table {scalar_t__ thumb_glue_size; int * bfd_of_glue_owner; int root; } ;
struct bfd_link_info {int dummy; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
struct TYPE_8__ {int size; } ;
typedef TYPE_3__ asection ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bfd_link_info*,int *,char*,int ,TYPE_3__*,scalar_t__,int *,int ,int ,struct bfd_link_hash_entry**) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 char* FUNC_4 (scalar_t__) ;
 struct elf32_arm_link_hash_table* FUNC_5 (struct bfd_link_info*) ;
 struct elf_link_hash_entry* FUNC_6 (int *,char*,int ,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10 (struct bfd_link_info *VAR_10,
     struct elf_link_hash_entry *VAR_11)
{
  const char *VAR_12 = VAR_11->root.root.string;
  asection *VAR_13;
  char *VAR_14;
  struct elf_link_hash_entry *VAR_15;
  struct bfd_link_hash_entry *VAR_16;
  struct elf32_arm_link_hash_table *VAR_17;
  bfd_vma VAR_18;

  VAR_17 = FUNC_5 (VAR_10);

  FUNC_0 (VAR_17 != ((void*)0));
  FUNC_0 (VAR_17->bfd_of_glue_owner != ((void*)0));

  VAR_13 = FUNC_3
    (VAR_17->bfd_of_glue_owner, VAR_7);

  FUNC_0 (VAR_13 != ((void*)0));

  VAR_14 = FUNC_4 ((bfd_size_type) FUNC_9 (VAR_12)
    + FUNC_9 (VAR_6) + 1);

  FUNC_0 (VAR_14);

  FUNC_8 (VAR_14, VAR_6, VAR_12);

  VAR_15 = FUNC_6
    (&(VAR_17)->root, VAR_14, VAR_3, VAR_3, VAR_9);

  if (VAR_15 != ((void*)0))
    {

      FUNC_7 (VAR_14);
      return;
    }

  VAR_16 = ((void*)0);
  VAR_18 = VAR_17->thumb_glue_size + 1;
  FUNC_2 (VAR_10, VAR_17->bfd_of_glue_owner,
        VAR_14, VAR_0, VAR_13, VAR_18,
        ((void*)0), VAR_9, VAR_3, &VAR_16);


  VAR_15 = (struct elf_link_hash_entry *) VAR_16;
  VAR_15->type = FUNC_1 (VAR_4, VAR_5);
  VAR_15->forced_local = 1;

  FUNC_7 (VAR_14);





  VAR_14 = FUNC_4 ((bfd_size_type) FUNC_9 (VAR_12)
    + FUNC_9 ("__%s_change_to_arm") + 1);

  FUNC_0 (VAR_14);

  FUNC_8 (VAR_14, "__%s_change_to_arm", VAR_12);

  VAR_16 = ((void*)0);
  VAR_18 = VAR_17->thumb_glue_size + 4,
  FUNC_2 (VAR_10, VAR_17->bfd_of_glue_owner,
        VAR_14, VAR_1, VAR_13, VAR_18,
        ((void*)0), VAR_9, VAR_3, &VAR_16);

  FUNC_7 (VAR_14);

  VAR_13->size += VAR_8;
  VAR_17->thumb_glue_size += VAR_8;

  return;
}
