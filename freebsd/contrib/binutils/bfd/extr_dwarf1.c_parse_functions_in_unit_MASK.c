
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf1_unit {char* first_child; } ;
struct dwarf1_func {int high_pc; int low_pc; int name; } ;
struct dwarf1_debug {char* debug_section_end; char* debug_section; int abfd; } ;
struct die_info {scalar_t__ tag; int sibling; int high_pc; int low_pc; int name; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct dwarf1_func* FUNC_0 (struct dwarf1_debug*,struct dwarf1_unit*) ;
 int FUNC_1 (int ,struct die_info*,char*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct dwarf1_debug* VAR_6, struct dwarf1_unit* VAR_7)
{
  char* VAR_8;

  if (VAR_7->first_child)
    for (VAR_8 = VAR_7->first_child;
   VAR_8 < VAR_6->debug_section_end;
  )
      {
 struct die_info VAR_9;

 if (! FUNC_1 (VAR_6->abfd, &VAR_9, VAR_8,
    VAR_6->debug_section_end))
   return VAR_0;

 if (VAR_9.tag == VAR_2
     || VAR_9.tag == VAR_4
     || VAR_9.tag == VAR_3
     || VAR_9.tag == VAR_1)
   {
     struct dwarf1_func* VAR_10 = FUNC_0 (VAR_6,VAR_7);

     VAR_10->name = VAR_9.name;
     VAR_10->low_pc = VAR_9.low_pc;
     VAR_10->high_pc = VAR_9.high_pc;
   }


 if (VAR_9.sibling)
   VAR_8 = VAR_6->debug_section + VAR_9.sibling;
 else
   break;
      }

  return VAR_5;
}
