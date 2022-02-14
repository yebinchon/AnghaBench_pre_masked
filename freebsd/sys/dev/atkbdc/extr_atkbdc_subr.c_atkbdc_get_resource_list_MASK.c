
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource_list {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct resource_list resources; } ;
typedef TYPE_1__ atkbdc_device_t ;


 scalar_t__ FUNC_0 (int ) ;

struct resource_list
*FUNC_1(device_t VAR_0, device_t VAR_1)
{
 atkbdc_device_t *VAR_2;

 VAR_2 = (atkbdc_device_t *)FUNC_0(VAR_1);
 return &VAR_2->resources;
}
