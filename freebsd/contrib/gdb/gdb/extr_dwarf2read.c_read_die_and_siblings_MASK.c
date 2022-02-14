
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {scalar_t__ tag; struct die_info* sibling; } ;
typedef int bfd ;


 struct die_info* FUNC_0 (char*,int *,struct dwarf2_cu*,char**,struct die_info*) ;

__attribute__((used)) static struct die_info *
FUNC_1 (char *VAR_0, bfd *VAR_1,
         struct dwarf2_cu *VAR_2,
         char **VAR_3,
         struct die_info *VAR_4)
{
  struct die_info *VAR_5, *VAR_6;
  char *VAR_7;

  VAR_7 = VAR_0;
  VAR_5 = VAR_6 = ((void*)0);

  while (1)
    {
      struct die_info *VAR_8
 = FUNC_0 (VAR_7, VAR_1, VAR_2, &VAR_7, VAR_4);

      if (!VAR_5)
 {
   VAR_5 = VAR_8;
 }
      else
 {
   VAR_6->sibling = VAR_8;
 }

      if (VAR_8->tag == 0)
 {
   *VAR_3 = VAR_7;
   return VAR_5;
 }
      else
 {
   VAR_6 = VAR_8;
 }
    }
}
