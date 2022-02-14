
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu_reset; } ;
struct TYPE_4__ {int dw0; TYPE_1__ bits; } ;
typedef TYPE_2__ mpu_ep_control_t ;
typedef int POCE_SOFTC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

int
FUNC_4(POCE_SOFTC VAR_2)
{
 int VAR_3;
 mpu_ep_control_t VAR_4;

 VAR_4.dw0 = FUNC_1(VAR_2, VAR_1, VAR_0);
 VAR_4.bits.cpu_reset = 1;
 FUNC_2(VAR_2, VAR_1, VAR_0, VAR_4.dw0);
 FUNC_0(50);
 VAR_3=FUNC_3(VAR_2);

 return VAR_3;
}
