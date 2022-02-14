
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_i386_link_hash_table {int * srelgot; void* sgotplt; void* sgot; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct bfd_link_info*) ;
 int FUNC_1 () ;
 void* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int *,int) ;
 struct elf_i386_link_hash_table* FUNC_5 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_8, struct bfd_link_info *VAR_9)
{
  struct elf_i386_link_hash_table *VAR_10;

  if (! FUNC_0 (VAR_8, VAR_9))
    return VAR_0;

  VAR_10 = FUNC_5 (VAR_9);
  VAR_10->sgot = FUNC_2 (VAR_8, ".got");
  VAR_10->sgotplt = FUNC_2 (VAR_8, ".got.plt");
  if (!VAR_10->sgot || !VAR_10->sgotplt)
    FUNC_1 ();

  VAR_10->srelgot = FUNC_3 (VAR_8, ".rel.got",
            (VAR_1 | VAR_5
      | VAR_2
      | VAR_3
      | VAR_4
      | VAR_6));
  if (VAR_10->srelgot == ((void*)0)
      || ! FUNC_4 (VAR_8, VAR_10->srelgot, 2))
    return VAR_0;
  return VAR_7;
}
