
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_fde {int next; } ;
struct comp_unit {int objfile; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,struct dwarf2_fde*) ;

__attribute__((used)) static void
FUNC_2 (struct comp_unit *VAR_1, struct dwarf2_fde *VAR_2)
{
  VAR_2->next = FUNC_0 (VAR_1->objfile, VAR_0);
  FUNC_1 (VAR_1->objfile, VAR_0, VAR_2);
}
