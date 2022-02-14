
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {uintptr_t dt_cflags; TYPE_1__* dt_pcb; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_5__ {uintptr_t pcb_cflags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_1(dtrace_hdl_t *VAR_1, const char *VAR_2, uintptr_t VAR_3)
{
 if (VAR_2 != ((void*)0))
  return (FUNC_0(VAR_1, VAR_0));

 if (VAR_1->dt_pcb != ((void*)0))
  VAR_1->dt_pcb->pcb_cflags &= ~VAR_3;
 else
  VAR_1->dt_cflags &= ~VAR_3;

 return (0);
}
