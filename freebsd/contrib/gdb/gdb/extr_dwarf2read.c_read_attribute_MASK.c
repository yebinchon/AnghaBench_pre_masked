
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct attribute {int name; } ;
struct attr_abbrev {int form; int name; } ;
typedef int bfd ;


 char* FUNC_0 (struct attribute*,int ,int *,char*,struct dwarf2_cu*) ;

__attribute__((used)) static char *
FUNC_1 (struct attribute *VAR_0, struct attr_abbrev *VAR_1,
  bfd *VAR_2, char *VAR_3, struct dwarf2_cu *VAR_4)
{
  VAR_0->name = VAR_1->name;
  return FUNC_0 (VAR_0, VAR_1->form, VAR_2, VAR_3, VAR_4);
}
