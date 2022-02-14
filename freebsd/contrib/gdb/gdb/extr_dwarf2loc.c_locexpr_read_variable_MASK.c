
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct symbol {int dummy; } ;
struct frame_info {int dummy; } ;
struct dwarf2_locexpr_baton {int objfile; int size; int data; } ;


 struct dwarf2_locexpr_baton* FUNC_0 (struct symbol*) ;
 struct value* FUNC_1 (struct symbol*,struct frame_info*,int ,int ,int ) ;

__attribute__((used)) static struct value *
FUNC_2 (struct symbol *VAR_0, struct frame_info *VAR_1)
{
  struct dwarf2_locexpr_baton *VAR_2 = FUNC_0 (VAR_0);
  struct value *VAR_3;
  VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2->data, VAR_2->size,
      VAR_2->objfile);

  return VAR_3;
}
