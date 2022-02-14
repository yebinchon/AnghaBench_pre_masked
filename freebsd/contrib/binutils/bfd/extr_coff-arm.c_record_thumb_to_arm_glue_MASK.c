
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* string; } ;
struct TYPE_4__ {TYPE_1__ root; } ;
struct coff_link_hash_entry {int class; TYPE_2__ root; } ;
struct coff_arm_link_hash_table {scalar_t__ thumb_glue_size; int * bfd_of_glue_owner; scalar_t__ support_old_code; } ;
struct bfd_link_info {int dummy; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int asection ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bfd_link_info*,int *,char*,int ,int *,scalar_t__,int *,int ,int ,struct bfd_link_hash_entry**) ;
 int * FUNC_2 (int *,int ) ;
 char* FUNC_3 (scalar_t__) ;
 struct coff_arm_link_hash_table* FUNC_4 (struct bfd_link_info*) ;
 int FUNC_5 (struct bfd_link_info*) ;
 struct coff_link_hash_entry* FUNC_6 (int ,char*,int ,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10 (struct bfd_link_info * VAR_10,
     struct coff_link_hash_entry * VAR_11)
{
  const char * VAR_12 = VAR_11->root.root.string;
  asection * VAR_13;
  char * VAR_14;
  struct coff_link_hash_entry * VAR_15;
  struct bfd_link_hash_entry * VAR_16;
  struct coff_arm_link_hash_table * VAR_17;
  bfd_vma VAR_18;
  bfd_size_type VAR_19;

  VAR_17 = FUNC_4 (VAR_10);

  FUNC_0 (VAR_17 != ((void*)0));
  FUNC_0 (VAR_17->bfd_of_glue_owner != ((void*)0));

  VAR_13 = FUNC_2
    (VAR_17->bfd_of_glue_owner, VAR_7);

  FUNC_0 (VAR_13 != ((void*)0));

  VAR_19 = FUNC_9 (VAR_12) + FUNC_9 (VAR_6) + 1;
  VAR_14 = FUNC_3 (VAR_19);

  FUNC_0 (VAR_14);

  FUNC_8 (VAR_14, VAR_6, VAR_12);

  VAR_15 = FUNC_6
    (FUNC_5 (VAR_10), VAR_14, VAR_5, VAR_5, VAR_9);

  if (VAR_15 != ((void*)0))
    {
      FUNC_7 (VAR_14);

      return;
    }

  VAR_16 = ((void*)0);
  VAR_18 = VAR_17->thumb_glue_size + 1;
  FUNC_1 (VAR_10, VAR_17->bfd_of_glue_owner, VAR_14,
    VAR_1, VAR_13, VAR_18, ((void*)0), VAR_9, VAR_5, &VAR_16);


  VAR_15 = (struct coff_link_hash_entry *) VAR_16;
  VAR_15->class = VAR_4;

  FUNC_7 (VAR_14);






  VAR_19 = FUNC_9 (VAR_12) + FUNC_9 ("__%s_change_to_arm") + 1;
  VAR_14 = FUNC_3 (VAR_19);

  FUNC_0 (VAR_14);

  FUNC_8 (VAR_14, VAR_17->support_old_code ? "__%s_back_from_arm" : "__%s_change_to_arm", VAR_12);

  VAR_16 = ((void*)0);
  VAR_18 = VAR_17->thumb_glue_size + (VAR_17->support_old_code ? 8 : 4);
  FUNC_1 (VAR_10, VAR_17->bfd_of_glue_owner, VAR_14,
    VAR_2, VAR_13, VAR_18, ((void*)0), VAR_9, VAR_5, &VAR_16);

  FUNC_7 (VAR_14);

  VAR_17->thumb_glue_size += VAR_8;

  return;
}
