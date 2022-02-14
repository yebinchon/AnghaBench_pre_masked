
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct eh_frame_hdr_info {int table; TYPE_1__* hdr_sec; } ;
struct elf_link_hash_table {struct eh_frame_hdr_info eh_info; } ;
struct bfd_link_info {TYPE_2__* input_bfds; scalar_t__ eh_frame_hdr; } ;
typedef int bfd_boolean ;
struct TYPE_7__ {struct TYPE_7__* link_next; } ;
typedef TYPE_2__ bfd ;
struct TYPE_8__ {int size; int output_section; } ;
typedef TYPE_3__ asection ;
struct TYPE_6__ {int flags; int output_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct elf_link_hash_table* FUNC_2 (struct bfd_link_info*) ;

bfd_boolean
FUNC_3 (struct bfd_link_info *VAR_2)
{
  asection *VAR_3;
  bfd *VAR_4;
  struct elf_link_hash_table *VAR_5;
  struct eh_frame_hdr_info *VAR_6;

  VAR_5 = FUNC_2 (VAR_2);
  VAR_6 = &VAR_5->eh_info;
  if (VAR_6->hdr_sec == ((void*)0))
    return VAR_1;

  if (FUNC_1 (VAR_6->hdr_sec->output_section))
    {
      VAR_6->hdr_sec = ((void*)0);
      return VAR_1;
    }

  VAR_4 = ((void*)0);
  if (VAR_2->eh_frame_hdr)
    for (VAR_4 = VAR_2->input_bfds; VAR_4 != ((void*)0); VAR_4 = VAR_4->link_next)
      {


 VAR_3 = FUNC_0 (VAR_4, ".eh_frame");
 if (VAR_3 && VAR_3->size > 8 && !FUNC_1 (VAR_3->output_section))
   break;
      }

  if (VAR_4 == ((void*)0))
    {
      VAR_6->hdr_sec->flags |= VAR_0;
      VAR_6->hdr_sec = ((void*)0);
      return VAR_1;
    }

  VAR_6->table = VAR_1;
  return VAR_1;
}
