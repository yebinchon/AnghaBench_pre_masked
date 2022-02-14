
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eh_frame_hdr_info {int fde_count; scalar_t__ table; TYPE_1__* hdr_sec; int * cies; } ;
struct elf_link_hash_table {struct eh_frame_hdr_info eh_info; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_3__ {int size; } ;
typedef TYPE_1__ asection ;
struct TYPE_4__ {TYPE_1__* eh_frame_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct elf_link_hash_table* FUNC_0 (struct bfd_link_info*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bfd_boolean
FUNC_3 (bfd *VAR_3, struct bfd_link_info *VAR_4)
{
  struct elf_link_hash_table *VAR_5;
  struct eh_frame_hdr_info *VAR_6;
  asection *VAR_7;

  VAR_5 = FUNC_0 (VAR_4);
  VAR_6 = &VAR_5->eh_info;

  if (VAR_6->cies != ((void*)0))
    {
      FUNC_2 (VAR_6->cies);
      VAR_6->cies = ((void*)0);
    }

  VAR_7 = VAR_6->hdr_sec;
  if (VAR_7 == ((void*)0))
    return VAR_1;

  VAR_7->size = VAR_0;
  if (VAR_6->table)
    VAR_7->size += 4 + VAR_6->fde_count * 8;

  FUNC_1 (VAR_3)->eh_frame_hdr = VAR_7;
  return VAR_2;
}
