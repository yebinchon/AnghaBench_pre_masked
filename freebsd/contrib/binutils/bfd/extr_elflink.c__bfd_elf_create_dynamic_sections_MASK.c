
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elf_link_hash_entry {int dummy; } ;
struct elf_backend_data {int dynamic_sec_flags; TYPE_1__* s; scalar_t__ default_use_rela_p; scalar_t__ want_dynbss; scalar_t__ want_plt_sym; int plt_alignment; scalar_t__ plt_readonly; scalar_t__ plt_not_loaded; } ;
struct bfd_link_info {int shared; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_4__ {struct elf_link_hash_entry* hplt; } ;
struct TYPE_3__ {int log_file_align; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct bfd_link_info*) ;
 struct elf_link_hash_entry* FUNC_1 (int *,struct bfd_link_info*,int *,char*) ;
 int * FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *,int ) ;
 TYPE_2__* FUNC_4 (struct bfd_link_info*) ;
 struct elf_backend_data* FUNC_5 (int *) ;

bfd_boolean
FUNC_6 (bfd *VAR_8, struct bfd_link_info *VAR_9)
{
  flagword VAR_10, VAR_11;
  struct elf_link_hash_entry *VAR_12;
  asection *VAR_13;
  const struct elf_backend_data *VAR_14 = FUNC_5 (VAR_8);



  VAR_10 = VAR_14->dynamic_sec_flags;

  VAR_11 = VAR_10;
  if (VAR_14->plt_not_loaded)



    VAR_11 &= ~ (VAR_2 | VAR_5 | VAR_3);
  else
    VAR_11 |= VAR_1 | VAR_2 | VAR_5;
  if (VAR_14->plt_readonly)
    VAR_11 |= VAR_6;

  VAR_13 = FUNC_2 (VAR_8, ".plt", VAR_11);
  if (VAR_13 == ((void*)0)
      || ! FUNC_3 (VAR_8, VAR_13, VAR_14->plt_alignment))
    return VAR_0;



  if (VAR_14->want_plt_sym)
    {
      VAR_12 = FUNC_1 (VAR_8, VAR_9, VAR_13,
           "_PROCEDURE_LINKAGE_TABLE_");
      FUNC_4 (VAR_9)->hplt = VAR_12;
      if (VAR_12 == ((void*)0))
 return VAR_0;
    }

  VAR_13 = FUNC_2 (VAR_8,
       (VAR_14->default_use_rela_p
        ? ".rela.plt" : ".rel.plt"),
       VAR_10 | VAR_6);
  if (VAR_13 == ((void*)0)
      || ! FUNC_3 (VAR_8, VAR_13, VAR_14->s->log_file_align))
    return VAR_0;

  if (! FUNC_0 (VAR_8, VAR_9))
    return VAR_0;

  if (VAR_14->want_dynbss)
    {






      VAR_13 = FUNC_2 (VAR_8, ".dynbss",
           (VAR_1
     | VAR_4));
      if (VAR_13 == ((void*)0))
 return VAR_0;
      if (! VAR_9->shared)
 {
   VAR_13 = FUNC_2 (VAR_8,
        (VAR_14->default_use_rela_p
         ? ".rela.bss" : ".rel.bss"),
        VAR_10 | VAR_6);
   if (VAR_13 == ((void*)0)
       || ! FUNC_3 (VAR_8, VAR_13, VAR_14->s->log_file_align))
     return VAR_0;
 }
    }

  return VAR_7;
}
