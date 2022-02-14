
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msi_enabled; int pqi_dev; } ;
struct TYPE_5__ {TYPE_1__ os_specific; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(pqisrc_softstate_t *VAR_1)
{
 device_t VAR_2;
 VAR_2 = VAR_1->os_specific.pqi_dev;

 FUNC_0("IN\n");

        if (VAR_1->os_specific.msi_enabled) {
                FUNC_1(VAR_2);
                VAR_1->os_specific.msi_enabled = VAR_0;
        }

 FUNC_0("OUT\n");
}
