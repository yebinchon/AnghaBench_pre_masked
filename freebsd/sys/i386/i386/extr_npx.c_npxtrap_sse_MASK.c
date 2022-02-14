
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_13__ {TYPE_4__* td_pcb; } ;
struct TYPE_12__ {TYPE_3__* pcb_save; } ;
struct TYPE_9__ {int en_mxcsr; } ;
struct TYPE_10__ {TYPE_1__ sv_env; } ;
struct TYPE_11__ {TYPE_2__ sv_xmm; } ;


 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_5 (int*) ;

int
FUNC_6(void)
{
 u_int VAR_4;

 if (!VAR_3) {
  FUNC_4(
 "npxtrap_sse: fpcurthread = %p, curthread = %p, hw_float = %d\n",
         FUNC_0(VAR_1), VAR_0, VAR_3);
  FUNC_3("npxtrap from nowhere");
 }
 FUNC_1();
 if (FUNC_0(VAR_1) != VAR_0)
  VAR_4 = VAR_0->td_pcb->pcb_save->sv_xmm.sv_env.en_mxcsr;
 else
  FUNC_5(&VAR_4);
 FUNC_2();
 return (VAR_2[(VAR_4 & (~VAR_4 >> 7)) & 0x3f]);
}
