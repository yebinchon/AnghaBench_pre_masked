
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {int dummy; } ;
struct attribute {int dummy; } ;


 int VAR_0 ;
 struct attribute* FUNC_0 (struct die_info*,int ,struct dwarf2_cu*) ;
 unsigned int FUNC_1 (struct attribute*,struct dwarf2_cu*) ;
 int FUNC_2 (char*,unsigned int) ;
 struct die_info* FUNC_3 (unsigned int) ;

__attribute__((used)) static struct die_info *
FUNC_4 (struct die_info *VAR_1, struct dwarf2_cu *VAR_2)
{
  struct attribute *VAR_3;
  struct die_info *VAR_4;
  unsigned int VAR_5;

  VAR_3 = FUNC_0 (VAR_1, VAR_0, VAR_2);
  if (VAR_3 == ((void*)0))
    return ((void*)0);

  VAR_5 = FUNC_1 (VAR_3, VAR_2);
  VAR_4 = FUNC_3 (VAR_5);
  if (!VAR_4)
    {
      FUNC_2 ("Dwarf Error: Cannot find referent at offset %d.", VAR_5);
    }

  return VAR_4;
}
