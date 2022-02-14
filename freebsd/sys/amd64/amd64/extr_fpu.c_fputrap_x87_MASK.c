
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_3__ {int en_cw; int en_sw; } ;
struct savefpu {TYPE_1__ sv_env; } ;
struct TYPE_4__ {struct savefpu* pcb_save; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int VAR_2 ;
 int* VAR_3 ;

int
FUNC_5(void)
{
 struct savefpu *VAR_4;
 u_short VAR_5, VAR_6;

 FUNC_1();






 if (FUNC_0(VAR_2) != VAR_1) {
  VAR_4 = VAR_0->pcb_save;
  VAR_5 = VAR_4->sv_env.en_cw;
  VAR_6 = VAR_4->sv_env.en_sw;
 } else {
  FUNC_3(&VAR_5);
  FUNC_4(&VAR_6);
 }

 FUNC_2();
 return (VAR_3[VAR_6 & ((~VAR_5 & 0x3f) | 0x40)]);
}
