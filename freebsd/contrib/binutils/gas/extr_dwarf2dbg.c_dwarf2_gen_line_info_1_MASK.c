
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
struct line_subseg {struct line_entry** ptail; } ;
struct dwarf2_line_info {int dummy; } ;
struct line_entry {struct line_entry* next; struct dwarf2_line_info loc; int * label; } ;


 struct line_subseg* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (symbolS *VAR_2, struct dwarf2_line_info *VAR_3)
{
  struct line_subseg *VAR_4;
  struct line_entry *VAR_5;

  VAR_5 = (struct line_entry *) FUNC_1 (sizeof (*VAR_5));
  VAR_5->next = ((void*)0);
  VAR_5->label = VAR_2;
  VAR_5->loc = *VAR_3;

  VAR_4 = FUNC_0 (VAR_0, VAR_1);
  *VAR_4->ptail = VAR_5;
  VAR_4->ptail = &VAR_5->next;
}
