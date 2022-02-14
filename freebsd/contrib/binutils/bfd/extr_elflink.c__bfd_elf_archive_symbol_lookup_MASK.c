
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd ;


 char VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct bfd_link_info*) ;
 struct elf_link_hash_entry* FUNC_3 (int ,char const*,int ,int ,int ) ;
 int FUNC_4 (char*,char const*,size_t) ;
 char* FUNC_5 (char const*,char) ;
 size_t FUNC_6 (char const*) ;

struct elf_link_hash_entry *
FUNC_7 (bfd *VAR_2,
    struct bfd_link_info *VAR_3,
    const char *VAR_4)
{
  struct elf_link_hash_entry *VAR_5;
  char *VAR_6, *VAR_7;
  size_t VAR_8, VAR_9;

  VAR_5 = FUNC_3 (FUNC_2 (VAR_3), VAR_4, VAR_1, VAR_1, VAR_1);
  if (VAR_5 != ((void*)0))
    return VAR_5;






  VAR_6 = FUNC_5 (VAR_4, VAR_0);
  if (VAR_6 == ((void*)0) || VAR_6[1] != VAR_0)
    return VAR_5;


  VAR_8 = FUNC_6 (VAR_4);
  VAR_7 = FUNC_0 (VAR_2, VAR_8);
  if (VAR_7 == ((void*)0))
    return (struct elf_link_hash_entry *)(intptr_t)-1;

  VAR_9 = VAR_6 - VAR_4 + 1;
  FUNC_4 (VAR_7, VAR_4, VAR_9);
  FUNC_4 (VAR_7 + VAR_9, VAR_4 + VAR_9 + 1, VAR_8 - VAR_9);

  VAR_5 = FUNC_3 (FUNC_2 (VAR_3), VAR_7, VAR_1, VAR_1, VAR_1);
  if (VAR_5 == ((void*)0))
    {


      VAR_7[VAR_9 - 1] = '\0';
      VAR_5 = FUNC_3 (FUNC_2 (VAR_3), VAR_7,
    VAR_1, VAR_1, VAR_1);
    }

  FUNC_1 (VAR_2, VAR_7);
  return VAR_5;
}
