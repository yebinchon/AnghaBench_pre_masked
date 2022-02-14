
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elf_segment_map {unsigned int count; scalar_t__ p_type; struct elf_segment_map* next; TYPE_1__** sections; } ;
struct elf_backend_data {int (* elf_backend_modify_segment_map ) (int *,struct bfd_link_info*) ;} ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {struct elf_segment_map* segment_map; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int *) ;
 struct elf_backend_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_5, struct bfd_link_info *VAR_6)
{
  struct elf_segment_map **VAR_7;
  const struct elf_backend_data *VAR_8;






  VAR_7 = &FUNC_0 (VAR_5)->segment_map;
  while (*VAR_7)
    {
      unsigned int VAR_9, VAR_10;

      for (VAR_10 = 0, VAR_9 = 0; VAR_9 < (*VAR_7)->count; VAR_9++)
 {
   if (((*VAR_7)->sections[VAR_9]->flags & VAR_3) == 0
       && (((*VAR_7)->sections[VAR_9]->flags & VAR_2) != 0
    || (*VAR_7)->p_type != VAR_1))
     {
       (*VAR_7)->sections[VAR_10] = (*VAR_7)->sections[VAR_9];
       VAR_10++;
     }
 }
      (*VAR_7)->count = VAR_10;

      if ((*VAR_7)->p_type == VAR_1 && (*VAR_7)->count == 0)
 *VAR_7 = (*VAR_7)->next;
      else
 VAR_7 = &(*VAR_7)->next;
    }

  VAR_8 = FUNC_1 (VAR_5);
  if (VAR_8->elf_backend_modify_segment_map != ((void*)0))
    {
      if (!(*VAR_8->elf_backend_modify_segment_map) (VAR_5, VAR_6))
 return VAR_0;
    }

  return VAR_4;
}
