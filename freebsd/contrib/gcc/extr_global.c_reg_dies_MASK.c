
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_chain {int dead_or_set; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int * VAR_1 ;
 int** VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static void
FUNC_2 (int VAR_5, enum machine_mode VAR_6, struct insn_chain *VAR_7)
{
  if (VAR_5 < VAR_0)
    {
      int VAR_8 = VAR_2[VAR_5][VAR_6];
      while (VAR_8-- > 0)
 {
   FUNC_0 (VAR_3, VAR_5);
   if (! VAR_1[VAR_5])
     FUNC_1 (&VAR_7->dead_or_set, VAR_5);
   VAR_5++;
 }
    }
  else
    {
      FUNC_0 (VAR_3, VAR_5);
      if (VAR_4[VAR_5] >= 0)
 FUNC_1 (&VAR_7->dead_or_set, VAR_5);
    }
}
