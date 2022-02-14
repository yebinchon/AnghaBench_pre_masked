
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rman_res_t ;
typedef int device_t ;
struct TYPE_2__ {int rid; } ;
typedef TYPE_1__ atkbdc_device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int) ;

int
FUNC_6(device_t VAR_1, device_t VAR_2)
{
 atkbdc_device_t *VAR_3;
 rman_res_t VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 VAR_3 = (atkbdc_device_t *)FUNC_4(VAR_2);

 VAR_6 += FUNC_2(VAR_1, VAR_2);
 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 != 0)
  VAR_6 += FUNC_5(" flags 0x%x", VAR_5);
 VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_3->rid);
 if (VAR_4 != 0)
  VAR_6 += FUNC_5(" irq %jd", VAR_4);
 VAR_6 += FUNC_1(VAR_1, VAR_2);

 return (VAR_6);
}
