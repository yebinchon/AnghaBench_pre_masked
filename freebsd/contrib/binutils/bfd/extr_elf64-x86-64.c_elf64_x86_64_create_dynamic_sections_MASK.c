
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf64_x86_64_link_hash_table {void* srelbss; void* sdynbss; void* srelplt; void* splt; int sgot; } ;
struct bfd_link_info {int shared; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct bfd_link_info*) ;
 int FUNC_1 () ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct bfd_link_info*) ;
 struct elf64_x86_64_link_hash_table* FUNC_4 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct elf64_x86_64_link_hash_table *VAR_4;

  VAR_4 = FUNC_4 (VAR_3);
  if (!VAR_4->sgot && !FUNC_3 (VAR_2, VAR_3))
    return VAR_0;

  if (!FUNC_0 (VAR_2, VAR_3))
    return VAR_0;

  VAR_4->splt = FUNC_2 (VAR_2, ".plt");
  VAR_4->srelplt = FUNC_2 (VAR_2, ".rela.plt");
  VAR_4->sdynbss = FUNC_2 (VAR_2, ".dynbss");
  if (!VAR_3->shared)
    VAR_4->srelbss = FUNC_2 (VAR_2, ".rela.bss");

  if (!VAR_4->splt || !VAR_4->srelplt || !VAR_4->sdynbss
      || (!VAR_3->shared && !VAR_4->srelbss))
    FUNC_1 ();

  return VAR_1;
}
