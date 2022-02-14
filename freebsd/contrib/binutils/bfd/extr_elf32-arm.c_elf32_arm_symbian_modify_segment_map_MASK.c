
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_segment_map {scalar_t__ p_type; struct elf_segment_map* next; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {struct elf_segment_map* segment_map; } ;


 scalar_t__ VAR_0 ;
 struct elf_segment_map* FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct bfd_link_info*) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_1,
          struct bfd_link_info *VAR_2)
{
  struct elf_segment_map *VAR_3;
  asection *VAR_4;





  VAR_4 = FUNC_1 (VAR_1, ".dynamic");
  if (VAR_4)
    {
      for (VAR_3 = FUNC_3 (VAR_1)->segment_map; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
 if (VAR_3->p_type == VAR_0)
   break;

      if (VAR_3 == ((void*)0))
 {
   VAR_3 = FUNC_0 (VAR_1, VAR_4);
   VAR_3->next = FUNC_3 (VAR_1)->segment_map;
   FUNC_3 (VAR_1)->segment_map = VAR_3;
 }
    }


  return FUNC_2 (VAR_1, VAR_2);
}
