
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct dwarf2_locexpr_baton {int size; int data; } ;


 struct dwarf2_locexpr_baton* FUNC_0 (struct symbol*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2 (struct symbol *VAR_0)
{
  struct dwarf2_locexpr_baton *VAR_1 = FUNC_0 (VAR_0);
  return FUNC_1 (VAR_1->data, VAR_1->size);
}
