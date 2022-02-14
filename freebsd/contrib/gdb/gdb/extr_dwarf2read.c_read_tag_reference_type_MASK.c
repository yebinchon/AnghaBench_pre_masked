
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct comp_unit_head {int addr_size; } ;
struct dwarf2_cu {struct comp_unit_head header; } ;
struct die_info {struct type* type; } ;
struct attribute {int dummy; } ;
typedef int TYPE_LENGTH ;


 int VAR_0 ;
 int FUNC_0 (struct attribute*) ;
 int FUNC_1 (struct die_info*,struct dwarf2_cu*) ;
 struct attribute* FUNC_2 (struct die_info*,int ,struct dwarf2_cu*) ;
 struct type* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct die_info *VAR_1, struct dwarf2_cu *VAR_2)
{
  struct comp_unit_head *VAR_3 = &VAR_2->header;
  struct type *VAR_4;
  struct attribute *VAR_5;

  if (VAR_1->type)
    {
      return;
    }

  VAR_4 = FUNC_3 (FUNC_1 (VAR_1, VAR_2));
  VAR_5 = FUNC_2 (VAR_1, VAR_0, VAR_2);
  if (VAR_5)
    {
      TYPE_LENGTH (VAR_6) = FUNC_0 (VAR_5);
    }
  else
    {
      TYPE_LENGTH (VAR_7) = VAR_3->addr_size;
    }
  VAR_1->type = VAR_4;
}
