
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
 int VAR_1 ;
 int FUNC_0 (struct die_info*) ;
 struct attribute* FUNC_1 (struct die_info*,int ,struct dwarf2_cu*) ;
 struct type* FUNC_2 (TYPE_1__*,int ,struct dwarf2_cu*) ;
 unsigned int FUNC_3 (struct attribute*,struct dwarf2_cu*) ;
 int FUNC_4 (char*,...) ;
 struct die_info* FUNC_5 (unsigned int) ;
 struct type* FUNC_6 (struct die_info*,struct dwarf2_cu*) ;

__attribute__((used)) static struct type *
FUNC_7 (struct die_info *VAR_2, struct dwarf2_cu *VAR_3)
{
  struct type *VAR_4;
  struct attribute *VAR_5;
  struct die_info *VAR_6;
  unsigned int VAR_7;

  VAR_5 = FUNC_1 (VAR_2, VAR_0, VAR_3);
  if (!VAR_5)
    {

      return FUNC_2 (VAR_3->objfile, VAR_1, VAR_3);
    }
  else
    {
      VAR_7 = FUNC_3 (VAR_5, VAR_3);
      VAR_6 = FUNC_5 (VAR_7);
      if (!VAR_6)
 {
   FUNC_4 ("Dwarf Error: Cannot find referent at offset %d [in module %s]",
     VAR_7, VAR_3->objfile->name);
   return ((void*)0);
 }
    }
  VAR_4 = FUNC_6 (VAR_6, VAR_3);
  if (!VAR_4)
    {
      FUNC_0 (VAR_6);
      FUNC_4 ("Dwarf Error: Problem turning type die at offset into gdb type [in module %s]",
        VAR_3->objfile->name);
    }
  return VAR_4;
}
