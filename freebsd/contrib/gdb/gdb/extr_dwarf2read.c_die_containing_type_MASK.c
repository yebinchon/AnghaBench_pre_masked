
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct dwarf2_cu {TYPE_1__* objfile; } ;
struct die_info {int dummy; } ;
struct attribute {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct die_info*) ;
 struct attribute* FUNC_1 (struct die_info*,int ,struct dwarf2_cu*) ;
 unsigned int FUNC_2 (struct attribute*,struct dwarf2_cu*) ;
 int FUNC_3 (char*,...) ;
 struct die_info* FUNC_4 (unsigned int) ;
 struct type* FUNC_5 (struct die_info*,struct dwarf2_cu*) ;

__attribute__((used)) static struct type *
FUNC_6 (struct die_info *VAR_1, struct dwarf2_cu *VAR_2)
{
  struct type *VAR_3 = ((void*)0);
  struct attribute *VAR_4;
  struct die_info *VAR_5 = ((void*)0);
  unsigned int VAR_6;

  VAR_4 = FUNC_1 (VAR_1, VAR_0, VAR_2);
  if (VAR_4)
    {
      VAR_6 = FUNC_2 (VAR_4, VAR_2);
      VAR_5 = FUNC_4 (VAR_6);
      if (!VAR_5)
 {
   FUNC_3 ("Dwarf Error: Cannot find referent at offset %d [in module %s]", VAR_6,
     VAR_2->objfile->name);
   return ((void*)0);
 }
      VAR_3 = FUNC_5 (VAR_5, VAR_2);
    }
  if (!VAR_3)
    {
      if (VAR_5)
 FUNC_0 (VAR_5);
      FUNC_3 ("Dwarf Error: Problem turning containing type into gdb type [in module %s]",
        VAR_2->objfile->name);
    }
  return VAR_3;
}
