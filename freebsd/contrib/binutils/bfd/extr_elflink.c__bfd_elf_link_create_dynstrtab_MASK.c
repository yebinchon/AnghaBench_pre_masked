
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_link_hash_table {int * dynstr; int * dynobj; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 struct elf_link_hash_table* FUNC_1 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct elf_link_hash_table *VAR_4;

  VAR_4 = FUNC_1 (VAR_3);
  if (VAR_4->dynobj == ((void*)0))
    VAR_4->dynobj = VAR_2;

  if (VAR_4->dynstr == ((void*)0))
    {
      VAR_4->dynstr = FUNC_0 ();
      if (VAR_4->dynstr == ((void*)0))
 return VAR_0;
    }
  return VAR_1;
}
