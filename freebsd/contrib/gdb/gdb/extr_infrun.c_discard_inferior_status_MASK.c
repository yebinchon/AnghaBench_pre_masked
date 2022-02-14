
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inferior_status {int stop_registers; int registers; int stop_bpstat; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inferior_status*) ;

void
FUNC_3 (struct inferior_status *VAR_0)
{

  FUNC_0 (&VAR_0->stop_bpstat);
  FUNC_1 (VAR_0->registers);
  FUNC_1 (VAR_0->stop_registers);
  FUNC_2 (VAR_0);
}
