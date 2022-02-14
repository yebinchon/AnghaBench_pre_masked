
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_reserv {scalar_t__ name; int bypassed; struct insn_reserv* next; } ;
struct bypass_list {scalar_t__ insn; struct bypass_list* next; } ;


 struct bypass_list* VAR_0 ;
 struct insn_reserv* VAR_1 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  struct bypass_list *VAR_2;
  struct insn_reserv *VAR_3;



  for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next)
    for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
      if (VAR_3->name == VAR_2->insn)
 VAR_3->bypassed = 1;
}
