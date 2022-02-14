
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct symbol {int dummy; } ;
struct dwarf2_locexpr_baton {int size; scalar_t__* data; TYPE_1__* objfile; } ;
struct TYPE_2__ {int name; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 struct dwarf2_locexpr_baton* FUNC_2 (struct symbol*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int*) ;
 int FUNC_4 (struct ui_file*,char*,...) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (struct symbol *VAR_4, struct ui_file *VAR_5)
{

  struct dwarf2_locexpr_baton *VAR_6 = FUNC_2 (VAR_4);

  if (VAR_6->size == 1
      && VAR_6->data[0] >= VAR_2
      && VAR_6->data[0] <= VAR_3)
    {
      int VAR_7 = FUNC_0 (VAR_6->data[0] - VAR_2);
      FUNC_4 (VAR_5,
   "a variable in register %s", FUNC_1 (VAR_7));
      return 1;
    }
  if (VAR_6->size > 1
      && VAR_6->data[VAR_6->size - 1] == VAR_0)
    if (VAR_6->data[0] == VAR_1)
      {
 int VAR_8;
 CORE_ADDR VAR_9 = FUNC_3 (&VAR_6->data[1],
      &VAR_6->data[VAR_6->size - 1],
      &VAR_8);
 FUNC_4 (VAR_5,
     "a thread-local variable at offset %s in the "
     "thread-local storage for `%s'",
     FUNC_5 (VAR_9), VAR_6->objfile->name);
 return 1;
      }


  FUNC_4 (VAR_5,
      "a variable with complex or multiple locations (DWARF2)");
  return 1;
}
