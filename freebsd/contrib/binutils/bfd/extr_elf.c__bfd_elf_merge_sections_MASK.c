
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct bfd_link_info {TYPE_1__* input_bfds; int hash; } ;
struct bfd_elf_section_data {scalar_t__ sec_info; } ;
typedef int bfd_boolean ;
struct TYPE_9__ {int flags; TYPE_2__* sections; struct TYPE_9__* link_next; } ;
typedef TYPE_1__ bfd ;
struct TYPE_10__ {int flags; int sec_info_type; int output_section; struct TYPE_10__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_11__ {int * merge_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int **,TYPE_2__*,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,struct bfd_link_info*,int *,int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (struct bfd_link_info*) ;
 struct bfd_elf_section_data* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;

bfd_boolean
FUNC_6 (bfd *VAR_6, struct bfd_link_info *VAR_7)
{
  bfd *VAR_8;
  asection *VAR_9;

  if (!FUNC_5 (VAR_7->hash))
    return VAR_2;

  for (VAR_8 = VAR_7->input_bfds; VAR_8 != ((void*)0); VAR_8 = VAR_8->link_next)
    if ((VAR_8->flags & VAR_0) == 0)
      for (VAR_9 = VAR_8->sections; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
 if ((VAR_9->flags & VAR_3) != 0
     && !FUNC_2 (VAR_9->output_section))
   {
     struct bfd_elf_section_data *VAR_10;

     VAR_10 = FUNC_4 (VAR_9);
     if (! FUNC_0 (VAR_6,
       &FUNC_3 (VAR_7)->merge_info,
       VAR_9, &VAR_10->sec_info))
       return VAR_2;
     else if (VAR_10->sec_info)
       VAR_9->sec_info_type = VAR_1;
   }

  if (FUNC_3 (VAR_7)->merge_info != ((void*)0))
    FUNC_1 (VAR_6, VAR_7, FUNC_3 (VAR_7)->merge_info,
    VAR_5);
  return VAR_4;
}
