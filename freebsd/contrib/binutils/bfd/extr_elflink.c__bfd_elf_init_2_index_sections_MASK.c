
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
struct TYPE_7__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_8__ {int flags; struct TYPE_8__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_9__ {TYPE_2__* data_index_section; TYPE_2__* text_index_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct bfd_link_info*,TYPE_2__*) ;
 TYPE_3__* FUNC_1 (struct bfd_link_info*) ;

void
FUNC_2 (bfd *VAR_3, struct bfd_link_info *VAR_4)
{
  asection *VAR_5;

  for (VAR_5 = VAR_3->sections; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    if (((VAR_5->flags & (VAR_1 | VAR_0 | VAR_2))
  == (VAR_0 | VAR_2))
 && !FUNC_0 (VAR_3, VAR_4, VAR_5))
      {
 FUNC_1 (VAR_4)->text_index_section = VAR_5;
 break;
      }

  for (VAR_5 = VAR_3->sections; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    if (((VAR_5->flags & (VAR_1 | VAR_0 | VAR_2)) == VAR_0)
 && !FUNC_0 (VAR_3, VAR_4, VAR_5))
      {
 FUNC_1 (VAR_4)->data_index_section = VAR_5;
 break;
      }

  if (FUNC_1 (VAR_4)->text_index_section == ((void*)0))
    FUNC_1 (VAR_4)->text_index_section
      = FUNC_1 (VAR_4)->data_index_section;
}
