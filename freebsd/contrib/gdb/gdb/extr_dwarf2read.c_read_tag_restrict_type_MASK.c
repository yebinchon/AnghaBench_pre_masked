
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct dwarf2_cu {int dummy; } ;
struct die_info {int type; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_3 (int ,int ,int,struct type*,int ) ;

__attribute__((used)) static void
FUNC_4 (struct die_info *VAR_0, struct dwarf2_cu *VAR_1)
{
  struct type *VAR_2;

  if (VAR_0->type)
    {
      return;
    }

  VAR_2 = FUNC_2 (VAR_0, VAR_1);
  VAR_0->type = FUNC_3 (FUNC_0 (VAR_2), FUNC_1 (VAR_2),
                             1, VAR_2, 0);
}
