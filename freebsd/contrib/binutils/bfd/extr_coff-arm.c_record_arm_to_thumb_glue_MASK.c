
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* string; } ;
struct TYPE_4__ {TYPE_1__ root; } ;
struct coff_link_hash_entry {TYPE_2__ root; } ;
struct coff_arm_link_hash_table {scalar_t__ arm_glue_size; int * bfd_of_glue_owner; } ;
struct bfd_link_info {int dummy; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int asection ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
FUNC_10 (struct bfd_link_info * VAR_6,
     struct coff_link_hash_entry * VAR_7)
{
  const char * VAR_8 = VAR_7->root.root.string;
  register asection * VAR_9;
  char * VAR_10;
  struct coff_link_hash_entry * VAR_11;
  struct bfd_link_hash_entry * VAR_12;
  struct coff_arm_link_hash_table * VAR_13;
  bfd_vma VAR_14;
  bfd_size_type VAR_15;

  VAR_13 = FUNC_4 (VAR_6);

  FUNC_0 (VAR_13 != ((void*)0));
  FUNC_0 (VAR_13->bfd_of_glue_owner != ((void*)0));

  VAR_9 = FUNC_2
    (VAR_13->bfd_of_glue_owner, VAR_1);

  FUNC_0 (VAR_9 != ((void*)0));

  VAR_15 = FUNC_9 (VAR_8) + FUNC_9 (VAR_0) + 1;
  VAR_10 = FUNC_3 (VAR_15);

  FUNC_0 (VAR_10);

  FUNC_8 (VAR_10, VAR_0, VAR_8);

  VAR_11 = FUNC_6
    (FUNC_5 (VAR_6), VAR_10, VAR_4, VAR_4, VAR_5);

  if (VAR_11 != ((void*)0))
    {
      FUNC_7 (VAR_10);

      return;
    }




  VAR_12 = ((void*)0);
  VAR_14 = VAR_13->arm_glue_size + 1;
  FUNC_1 (VAR_6, VAR_13->bfd_of_glue_owner, VAR_10,
    VAR_3, VAR_9, VAR_14, ((void*)0), VAR_5, VAR_4, &VAR_12);

  FUNC_7 (VAR_10);

  VAR_13->arm_glue_size += VAR_2;

  return;
}
