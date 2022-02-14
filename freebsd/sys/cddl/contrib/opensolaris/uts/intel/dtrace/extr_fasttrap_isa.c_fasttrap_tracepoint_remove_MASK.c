
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int proc_t ;
struct TYPE_3__ {int ftt_pc; int * ftt_instr; } ;
typedef TYPE_1__ fasttrap_tracepoint_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*,int,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int,int ) ;

int
FUNC_2(proc_t *VAR_1, fasttrap_tracepoint_t *VAR_2)
{
 uint8_t VAR_3;





 if (FUNC_0(VAR_1, &VAR_3, 1, VAR_2->ftt_pc) != 0)
  return (0);
 if (VAR_3 != VAR_0)
  return (0);
 if (FUNC_1(VAR_1, &VAR_2->ftt_instr[0], 1, VAR_2->ftt_pc) != 0)
  return (-1);

 return (0);
}
