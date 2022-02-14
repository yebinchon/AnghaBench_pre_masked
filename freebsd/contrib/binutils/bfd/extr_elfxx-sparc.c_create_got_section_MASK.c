
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {int dummy; } ;
struct _bfd_sparc_elf_link_hash_table {void* sgotplt; scalar_t__ is_vxworks; int word_align_power; int * srelgot; int * sgot; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,struct bfd_link_info*) ;
 struct _bfd_sparc_elf_link_hash_table* FUNC_2 (struct bfd_link_info*) ;
 void* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_8, struct bfd_link_info *VAR_9)
{
  struct _bfd_sparc_elf_link_hash_table *VAR_10;

  if (! FUNC_1 (VAR_8, VAR_9))
    return VAR_0;

  VAR_10 = FUNC_2 (VAR_9);
  VAR_10->sgot = FUNC_3 (VAR_8, ".got");
  FUNC_0 (VAR_10->sgot != ((void*)0));

  VAR_10->srelgot = FUNC_4 (VAR_8, ".rela.got",
            VAR_1
            | VAR_5
            | VAR_2
            | VAR_3
            | VAR_4
            | VAR_6);
  if (VAR_10->srelgot == ((void*)0)
      || ! FUNC_5 (VAR_8, VAR_10->srelgot,
          VAR_10->word_align_power))
    return VAR_0;

  if (VAR_10->is_vxworks)
    {
      VAR_10->sgotplt = FUNC_3 (VAR_8, ".got.plt");
      if (!VAR_10->sgotplt)
 return VAR_0;
    }

  return VAR_7;
}
