
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct mem_address {int offset; int step; int index; int base; int symbol; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5 (tree VAR_0, struct mem_address *VAR_1)
{
  VAR_1->symbol = FUNC_4 (VAR_0);
  VAR_1->base = FUNC_0 (VAR_0);
  VAR_1->index = FUNC_1 (VAR_0);
  VAR_1->step = FUNC_3 (VAR_0);
  VAR_1->offset = FUNC_2 (VAR_0);
}
