
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opcode; } ;


 int FUNC_0 () ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_3;



  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
      int VAR_4 = VAR_2[VAR_3].opcode;
      if (VAR_4 >= (1 << 11))
 FUNC_0 ();
      if (VAR_0[VAR_4] == 0)
 VAR_0[VAR_4] = &VAR_2[VAR_3];
    }
}
