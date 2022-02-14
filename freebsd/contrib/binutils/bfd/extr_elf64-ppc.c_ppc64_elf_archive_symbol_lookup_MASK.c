
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppc_link_hash_entry {scalar_t__ fake; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct elf_link_hash_entry {TYPE_1__ root; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd ;


 struct elf_link_hash_entry* FUNC_0 (int *,struct bfd_link_info*,char const*) ;
 char* FUNC_1 (int *,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static struct elf_link_hash_entry *
FUNC_5 (bfd *VAR_1,
     struct bfd_link_info *VAR_2,
     const char *VAR_3)
{
  struct elf_link_hash_entry *VAR_4;
  char *VAR_5;
  size_t VAR_6;

  VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_3);
  if (VAR_4 != ((void*)0)


      && !(VAR_4->root.type == VAR_0
    && ((struct ppc_link_hash_entry *) VAR_4)->fake))
    return VAR_4;

  if (VAR_3[0] == '.')
    return VAR_4;

  VAR_6 = FUNC_4 (VAR_3);
  VAR_5 = FUNC_1 (VAR_1, VAR_6 + 2);
  if (VAR_5 == ((void*)0))
    return (struct elf_link_hash_entry *) 0 - 1;
  VAR_5[0] = '.';
  FUNC_3 (VAR_5 + 1, VAR_3, VAR_6 + 1);
  VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_5);
  FUNC_2 (VAR_1, VAR_5);
  return VAR_4;
}
