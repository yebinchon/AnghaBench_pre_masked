
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int used_commands; int free_cmd_list; int * staticcmd; int cmd_sema; } ;
typedef TYPE_1__ ips_softc_t ;
typedef int ips_command_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(ips_softc_t *VAR_2, ips_command_t *VAR_3)
{

 if (FUNC_2(&VAR_2->cmd_sema) != 0)
  FUNC_1("ips: command returned non-zero semaphore");

 if (VAR_3 != VAR_2->staticcmd) {
  FUNC_0(&VAR_2->free_cmd_list, VAR_3, VAR_1);
  (VAR_2->used_commands)--;
 } else {
  VAR_2->state &= ~VAR_0;
 }
}
