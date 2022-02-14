
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct dwarf2_cu {TYPE_1__* objfile; } ;
struct die_info {struct type* type; int tag; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (struct die_info*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (struct die_info*,struct dwarf2_cu*) ;

__attribute__((used)) static struct type *
FUNC_3 (struct die_info *VAR_0, struct dwarf2_cu *VAR_1)
{
  if (VAR_0->type)
    {
      return VAR_0->type;
    }
  else
    {
      FUNC_2 (VAR_0, VAR_1);
      if (!VAR_0->type)
 {
   FUNC_0 (VAR_0);
   FUNC_1 ("Dwarf Error: Cannot find type of die 0x%x [in module %s]",
     VAR_0->tag, VAR_1->objfile->name);
 }
      return VAR_0->type;
    }
}
