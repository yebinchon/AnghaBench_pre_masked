
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmbus_softc {int vmbus_version; } ;
typedef int device_t ;


 struct vmbus_softc* FUNC_0 (int ) ;

__attribute__((used)) static uint32_t
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct vmbus_softc *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->vmbus_version;
}
