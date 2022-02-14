
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int proc_t ;
struct TYPE_3__ {int ftt_pc; } ;
typedef TYPE_1__ fasttrap_tracepoint_t ;
typedef int fasttrap_instr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int,int ) ;

int
FUNC_1(proc_t *VAR_1, fasttrap_tracepoint_t *VAR_2)
{
 fasttrap_instr_t VAR_3 = VAR_0;

 if (FUNC_0(VAR_1, &VAR_3, 4, VAR_2->ftt_pc) != 0)
  return (-1);

 return (0);
}
