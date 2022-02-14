
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minor; } ;
struct TYPE_4__ {TYPE_1__ pm_qos_power_miscdev; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0;
  VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2 ==
   VAR_1[VAR_3]->pm_qos_power_miscdev.minor)
   return VAR_3;
 }
 return -1;
}
