
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct print_context {int reg; scalar_t__ started; int * fp; } ;
typedef TYPE_1__* conflict_graph ;
struct TYPE_4__ {int num_regs; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*,int,int *,struct print_context*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char,int *) ;
 int VAR_0 ;

void
FUNC_3 (conflict_graph VAR_1, FILE *VAR_2)
{
  int VAR_3;
  struct print_context VAR_4;

  VAR_4.fp = VAR_2;
  FUNC_1 (VAR_2, "Conflicts:\n");


  for (VAR_3 = 0; VAR_3 < VAR_1->num_regs; ++VAR_3)
    {
      VAR_4.reg = VAR_3;
      VAR_4.started = 0;





      FUNC_0 (VAR_1, VAR_3, &VAR_0, &VAR_4);


      if (VAR_4.started)
 FUNC_2 ('\n', VAR_2);
    }
}
