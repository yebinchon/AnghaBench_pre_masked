
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_chain {struct insn_chain* next_need_reload; } ;


 int FUNC_0 (struct insn_chain*) ;
 struct insn_chain* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct insn_chain *VAR_1;


  for (VAR_1 = VAR_0; VAR_1 != 0;
       VAR_1 = VAR_1->next_need_reload)
    FUNC_0 (VAR_1);
}
