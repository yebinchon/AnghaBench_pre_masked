
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _arm_elf_section_data {int mapcount; int mapsize; TYPE_1__* map; } ;
typedef int elf32_arm_section_map ;
typedef int bfd_vma ;
typedef int asection ;
struct TYPE_4__ {char type; int vma; } ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;
 struct _arm_elf_section_data* FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (asection *VAR_0, char VAR_1, bfd_vma VAR_2)
{
  struct _arm_elf_section_data *VAR_3 = FUNC_2 (VAR_0);
  unsigned int VAR_4;

  if (VAR_3->map == ((void*)0))
    {
      VAR_3->map = FUNC_0 (sizeof (elf32_arm_section_map));
      VAR_3->mapcount = 0;
      VAR_3->mapsize = 1;
    }

  VAR_4 = VAR_3->mapcount++;

  if (VAR_3->mapcount > VAR_3->mapsize)
    {
      VAR_3->mapsize *= 2;
      VAR_3->map = FUNC_1 (VAR_3->map, VAR_3->mapsize
         * sizeof (elf32_arm_section_map));
    }

  VAR_3->map[VAR_4].vma = VAR_2;
  VAR_3->map[VAR_4].type = VAR_1;
}
