
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_link_hash_entry {int dummy; } ;
struct elf32_arm_link_hash_table {int root; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_size_type ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,int ,char*,char const*) ;
 char* FUNC_3 (scalar_t__) ;
 struct elf32_arm_link_hash_table* FUNC_4 (struct bfd_link_info*) ;
 struct elf_link_hash_entry* FUNC_5 (int *,char*,int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static struct elf_link_hash_entry *
FUNC_9 (struct bfd_link_info *VAR_3,
        const char *VAR_4,
        char **VAR_5)
{
  char *VAR_6;
  struct elf_link_hash_entry *VAR_7;
  struct elf32_arm_link_hash_table *VAR_8;


  VAR_8 = FUNC_4 (VAR_3);

  VAR_6 = FUNC_3 ((bfd_size_type) FUNC_8 (VAR_4)
    + FUNC_8 (VAR_0) + 1);

  FUNC_0 (VAR_6);

  FUNC_7 (VAR_6, VAR_0, VAR_4);

  VAR_7 = FUNC_5
    (&(VAR_8)->root, VAR_6, VAR_1, VAR_1, VAR_2);

  if (VAR_7 == ((void*)0))
    FUNC_2 (VAR_5, FUNC_1("unable to find ARM glue '%s' for '%s'"),
       VAR_6, VAR_4);

  FUNC_6 (VAR_6);

  return VAR_7;
}
