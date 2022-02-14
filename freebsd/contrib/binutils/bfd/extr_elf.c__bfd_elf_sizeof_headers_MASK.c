
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elf_segment_map {struct elf_segment_map* next; } ;
struct elf_backend_data {TYPE_1__* s; } ;
struct bfd_link_info {int relocatable; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ program_header_size; struct elf_segment_map* segment_map; } ;
struct TYPE_3__ {int sizeof_ehdr; scalar_t__ sizeof_phdr; } ;


 TYPE_2__* FUNC_0 (int *) ;
 struct elf_backend_data* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,struct bfd_link_info*) ;

int
FUNC_3 (bfd *VAR_0, struct bfd_link_info *VAR_1)
{
  const struct elf_backend_data *VAR_2 = FUNC_1 (VAR_0);
  int VAR_3 = VAR_2->s->sizeof_ehdr;

  if (!VAR_1->relocatable)
    {
      bfd_size_type VAR_4 = FUNC_0 (VAR_0)->program_header_size;

      if (VAR_4 == (bfd_size_type) -1)
 {
   struct elf_segment_map *VAR_5;

   VAR_4 = 0;
   for (VAR_5 = FUNC_0 (VAR_0)->segment_map; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
     VAR_4 += VAR_2->s->sizeof_phdr;

   if (VAR_4 == 0)
     VAR_4 = FUNC_2 (VAR_0, VAR_1);
 }

      FUNC_0 (VAR_0)->program_header_size = VAR_4;
      VAR_3 += VAR_4;
    }

  return VAR_3;
}
