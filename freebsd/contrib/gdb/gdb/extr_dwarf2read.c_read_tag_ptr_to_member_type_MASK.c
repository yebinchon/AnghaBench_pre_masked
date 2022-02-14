
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;
struct dwarf2_cu {struct objfile* objfile; } ;
struct die_info {struct type* type; } ;


 struct type* FUNC_0 (struct objfile*) ;
 struct type* FUNC_1 (struct die_info*,struct dwarf2_cu*) ;
 struct type* FUNC_2 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_3 (struct type*,struct type*,struct type*) ;

__attribute__((used)) static void
FUNC_4 (struct die_info *VAR_0, struct dwarf2_cu *VAR_1)
{
  struct objfile *VAR_2 = VAR_1->objfile;
  struct type *VAR_3;
  struct type *VAR_4;
  struct type *VAR_5;

  if (VAR_0->type)
    {
      return;
    }

  VAR_3 = FUNC_0 (VAR_2);
  VAR_4 = FUNC_2 (VAR_0, VAR_1);
  VAR_5 = FUNC_1 (VAR_0, VAR_1);
  FUNC_3 (VAR_3, VAR_5, VAR_4);

  VAR_0->type = VAR_3;
}
