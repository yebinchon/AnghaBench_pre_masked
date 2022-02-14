
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modifies_mem {struct modifies_mem* next; int insn; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct modifies_mem* VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4 (int VAR_3, rtx VAR_4, bool VAR_5)
{
  struct modifies_mem *VAR_6 = VAR_2;

  while (VAR_6)
    {
      rtx VAR_7 = VAR_6->insn;


      if ((VAR_5
    && FUNC_1 (VAR_7) < VAR_3)
   || (! VAR_5
       && FUNC_1 (VAR_7) > VAR_3))
 {
   VAR_6 = VAR_6->next;
   continue;
 }




      if (FUNC_0 (VAR_7))
 return 1;





      VAR_1 = 0;
      FUNC_3 (FUNC_2 (VAR_7), VAR_0, VAR_4);
      if (VAR_1)
 return 1;

      VAR_6 = VAR_6->next;
    }
  return 0;
}
