
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {unsigned int num_attrs; struct attribute* attrs; } ;
struct attribute {unsigned int name; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct attribute*,struct dwarf2_cu*) ;
 struct die_info* FUNC_1 (int ) ;

__attribute__((used)) static struct attribute *
FUNC_2 (struct die_info *VAR_2, unsigned int VAR_3, struct dwarf2_cu *VAR_4)
{
  unsigned int VAR_5;
  struct attribute *VAR_6 = ((void*)0);

  for (VAR_5 = 0; VAR_5 < VAR_2->num_attrs; ++VAR_5)
    {
      if (VAR_2->attrs[VAR_5].name == VAR_3)
 {
   return &VAR_2->attrs[VAR_5];
 }
      if (VAR_2->attrs[VAR_5].name == VAR_1
   || VAR_2->attrs[VAR_5].name == VAR_0)
 VAR_6 = &VAR_2->attrs[VAR_5];
    }
  if (VAR_6)
    {
      struct die_info *VAR_7 =
      FUNC_1 (FUNC_0 (VAR_6, VAR_4));

      if (VAR_7)
 return FUNC_2 (VAR_7, VAR_3, VAR_4);
    }

  return ((void*)0);
}
