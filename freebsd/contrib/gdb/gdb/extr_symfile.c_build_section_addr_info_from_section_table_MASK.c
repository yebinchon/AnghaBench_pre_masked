
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct section_table {TYPE_2__* the_bfd_section; int bfd; int addr; } ;
struct section_addr_info {TYPE_1__* other; } ;
struct TYPE_5__ {int index; } ;
struct TYPE_4__ {int sectindex; int name; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct section_addr_info* FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;

extern struct section_addr_info *
FUNC_4 (const struct section_table *VAR_2,
                                            const struct section_table *VAR_3)
{
  struct section_addr_info *VAR_4;
  const struct section_table *VAR_5;
  int VAR_6;

  VAR_4 = FUNC_0 (VAR_3 - VAR_2);

  for (VAR_5 = VAR_2, VAR_6 = 0; VAR_5 != VAR_3; VAR_5++)
    {
      if (FUNC_1 (VAR_5->bfd,
     VAR_5->the_bfd_section) & (VAR_0 | VAR_1)
   && VAR_6 < VAR_3 - VAR_2)
 {
   VAR_4->other[VAR_6].addr = VAR_5->addr;
   VAR_4->other[VAR_6].name
     = FUNC_3 (FUNC_2 (VAR_5->bfd, VAR_5->the_bfd_section));
   VAR_4->other[VAR_6].sectindex = VAR_5->the_bfd_section->index;
   VAR_6++;
 }
    }

  return VAR_4;
}
