
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_service_registry {int dummy; } ;
struct bcm_platform {struct bhnd_service_registry services; } ;
typedef int device_t ;


 struct bcm_platform* FUNC_0 () ;

__attribute__((used)) static struct bhnd_service_registry *
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct bcm_platform *VAR_2 = FUNC_0();
 return (&VAR_2->services);
}
