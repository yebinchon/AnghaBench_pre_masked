
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_arm_link_hash_entry {int plt_got_offset; int * export_glue; scalar_t__ plt_thumb_refcount; int tls_type; int * relocs_copied; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 struct elf32_arm_link_hash_entry* FUNC_1 (struct bfd_hash_table*,int) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry * VAR_1,
                             struct bfd_hash_table * VAR_2,
                             const char * VAR_3)
{
  struct elf32_arm_link_hash_entry * VAR_4 =
    (struct elf32_arm_link_hash_entry *) VAR_1;



  if (VAR_4 == (struct elf32_arm_link_hash_entry *) ((void*)0))
    VAR_4 = FUNC_1 (VAR_2, sizeof (struct elf32_arm_link_hash_entry));
  if (VAR_4 == ((void*)0))
    return (struct bfd_hash_entry *) VAR_4;


  VAR_4 = ((struct elf32_arm_link_hash_entry *)
  FUNC_0 ((struct bfd_hash_entry *) VAR_4,
         VAR_2, VAR_3));
  if (VAR_4 != ((void*)0))
    {
      VAR_4->relocs_copied = ((void*)0);
      VAR_4->tls_type = VAR_0;
      VAR_4->plt_thumb_refcount = 0;
      VAR_4->plt_got_offset = -1;
      VAR_4->export_glue = ((void*)0);
    }

  return (struct bfd_hash_entry *) VAR_4;
}
