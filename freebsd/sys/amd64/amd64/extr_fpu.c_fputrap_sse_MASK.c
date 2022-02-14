
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {TYPE_2__* pcb_save; } ;
struct TYPE_4__ {int en_mxcsr; } ;
struct TYPE_5__ {TYPE_1__ sv_env; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_3 (int*) ;

int
FUNC_4(void)
{
 u_int VAR_4;

 FUNC_1();
 if (FUNC_0(VAR_2) != VAR_1)
  VAR_4 = VAR_0->pcb_save->sv_env.en_mxcsr;
 else
  FUNC_3(&VAR_4);
 FUNC_2();
 return (VAR_3[(VAR_4 & (~VAR_4 >> 7)) & 0x3f]);
}
