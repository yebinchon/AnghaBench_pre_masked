
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {int pqi_dev; } ;
struct pqisrc_softstate {void* func_id; void* device_id; void* bus_id; TYPE_1__ os_specific; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct pqisrc_softstate *VAR_0)
{
 device_t VAR_1 = VAR_0->os_specific.pqi_dev;

 VAR_0->bus_id = (uint32_t)FUNC_0(VAR_1);
 VAR_0->device_id = (uint32_t)FUNC_1(VAR_1);
 VAR_0->func_id = (uint32_t)FUNC_2(VAR_1);
}
