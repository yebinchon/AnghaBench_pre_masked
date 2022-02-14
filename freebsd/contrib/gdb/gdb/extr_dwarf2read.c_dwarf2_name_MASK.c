
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {int dummy; } ;
struct attribute {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct attribute*) ;
 struct attribute* FUNC_1 (struct die_info*,int ,struct dwarf2_cu*) ;

__attribute__((used)) static char *
FUNC_2 (struct die_info *VAR_1, struct dwarf2_cu *VAR_2)
{
  struct attribute *VAR_3;

  VAR_3 = FUNC_1 (VAR_1, VAR_0, VAR_2);
  if (VAR_3 && FUNC_0 (VAR_3))
    return FUNC_0 (VAR_3);
  return ((void*)0);
}
