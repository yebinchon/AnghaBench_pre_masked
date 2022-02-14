
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modifies_mem {struct modifies_mem* next; int insn; } ;
typedef int rtx ;


 struct modifies_mem* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1 (rtx VAR_2)
{
  struct modifies_mem *VAR_3;

  VAR_3 = (struct modifies_mem *) FUNC_0 (&VAR_1,
            sizeof (struct modifies_mem));
  VAR_3->insn = VAR_2;
  VAR_3->next = VAR_0;
  VAR_0 = VAR_3;
}
