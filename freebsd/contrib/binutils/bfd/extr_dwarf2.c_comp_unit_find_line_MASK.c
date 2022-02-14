
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dwarf2_debug {int dummy; } ;
struct comp_unit {int error; scalar_t__ first_child_die_ptr; scalar_t__ end_ptr; scalar_t__ line_table; int stmtlist; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct comp_unit*,struct dwarf2_debug*) ;
 int FUNC_1 (struct comp_unit*,TYPE_1__*,int ,char const**,unsigned int*) ;
 int FUNC_2 (struct comp_unit*,TYPE_1__*,int ,char const**,unsigned int*) ;
 int FUNC_3 (struct comp_unit*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct comp_unit *VAR_2,
       asymbol *VAR_3,
       bfd_vma VAR_4,
       const char **VAR_5,
       unsigned int *VAR_6,
       struct dwarf2_debug *VAR_7)
{
  if (VAR_2->error)
    return VAR_1;

  if (! VAR_2->line_table)
    {
      if (! VAR_2->stmtlist)
 {
   VAR_2->error = 1;
   return VAR_1;
 }

      VAR_2->line_table = FUNC_0 (VAR_2, VAR_7);

      if (! VAR_2->line_table)
 {
   VAR_2->error = 1;
   return VAR_1;
 }

      if (VAR_2->first_child_die_ptr < VAR_2->end_ptr
   && ! FUNC_3 (VAR_2))
 {
   VAR_2->error = 1;
   return VAR_1;
 }
    }

  if (VAR_3->flags & VAR_0)
    return FUNC_1 (VAR_2, VAR_3, VAR_4,
         VAR_5,
         VAR_6);
  else
    return FUNC_2 (VAR_2, VAR_3, VAR_4,
         VAR_5,
         VAR_6);
}
