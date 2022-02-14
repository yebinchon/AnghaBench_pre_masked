
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section_table {int endaddr; int addr; int the_bfd_section; } ;
typedef int flagword ;
typedef scalar_t__ bfd_signed_vma ;
struct TYPE_2__ {struct section_table* to_sections_end; struct section_table* to_sections; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

void
FUNC_1 (bfd_signed_vma VAR_6, bfd_signed_vma VAR_7,
     bfd_signed_vma VAR_8)
{
  struct section_table *VAR_9;

  for (VAR_9 = VAR_5.to_sections;
       VAR_9 < VAR_5.to_sections_end;
       VAR_9++)
    {
      flagword VAR_10;

      VAR_10 = FUNC_0 (VAR_4, VAR_9->the_bfd_section);

      if (VAR_10 & VAR_1)
 {
   VAR_9->addr += VAR_6;
   VAR_9->endaddr += VAR_6;
 }
      else if (VAR_10 & (VAR_2 | VAR_3))
 {
   VAR_9->addr += VAR_7;
   VAR_9->endaddr += VAR_7;
 }
      else if (VAR_10 & VAR_0)
 {
   VAR_9->addr += VAR_8;
   VAR_9->endaddr += VAR_8;
 }
    }
}
