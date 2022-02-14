
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {scalar_t__ shared; } ;
struct _bfd_sparc_elf_link_hash_table {int plt_header_size; int plt_entry_size; void* srelbss; void* sdynbss; void* srelplt; void* splt; int build_plt_entry; int srelplt2; scalar_t__ is_vxworks; int sgot; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,struct bfd_link_info*) ;
 struct _bfd_sparc_elf_link_hash_table* FUNC_3 (struct bfd_link_info*) ;
 int FUNC_4 () ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,struct bfd_link_info*) ;
 int FUNC_7 (int *,struct bfd_link_info*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

bfd_boolean
FUNC_8 (bfd *VAR_12,
     struct bfd_link_info *VAR_13)
{
  struct _bfd_sparc_elf_link_hash_table *VAR_14;

  VAR_14 = FUNC_3 (VAR_13);
  if (!VAR_14->sgot && !FUNC_6 (VAR_12, VAR_13))
    return VAR_0;

  if (!FUNC_2 (VAR_12, VAR_13))
    return VAR_0;

  VAR_14->splt = FUNC_5 (VAR_12, ".plt");
  VAR_14->srelplt = FUNC_5 (VAR_12, ".rela.plt");
  VAR_14->sdynbss = FUNC_5 (VAR_12, ".dynbss");
  if (!VAR_13->shared)
    VAR_14->srelbss = FUNC_5 (VAR_12, ".rela.bss");

  if (VAR_14->is_vxworks)
    {
      if (!FUNC_7 (VAR_12, VAR_13, &VAR_14->srelplt2))
 return VAR_0;
      if (VAR_13->shared)
 {
   VAR_14->plt_header_size
     = 4 * FUNC_1 (VAR_10);
   VAR_14->plt_entry_size
     = 4 * FUNC_1 (VAR_11);
 }
      else
 {
   VAR_14->plt_header_size
     = 4 * FUNC_1 (VAR_8);
   VAR_14->plt_entry_size
     = 4 * FUNC_1 (VAR_9);
 }
    }
  else
    {
      if (FUNC_0 (VAR_12))
 {
   VAR_14->build_plt_entry = VAR_7;
   VAR_14->plt_header_size = VAR_4;
   VAR_14->plt_entry_size = VAR_3;
 }
      else
 {
   VAR_14->build_plt_entry = VAR_6;
   VAR_14->plt_header_size = VAR_2;
   VAR_14->plt_entry_size = VAR_1;
 }
    }

  if (!VAR_14->splt || !VAR_14->srelplt || !VAR_14->sdynbss
      || (!VAR_13->shared && !VAR_14->srelbss))
    FUNC_4 ();

  return VAR_5;
}
