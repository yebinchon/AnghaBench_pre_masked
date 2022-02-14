
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct so_list {int dummy; } ;
struct section_table {int endaddr; int addr; } ;


 scalar_t__ FUNC_0 (struct so_list*) ;

__attribute__((used)) static void
FUNC_1 (struct so_list *VAR_0,
                                 struct section_table *VAR_1)
{
  VAR_1->addr += FUNC_0 (VAR_0);
  VAR_1->endaddr += FUNC_0 (VAR_0);
}
