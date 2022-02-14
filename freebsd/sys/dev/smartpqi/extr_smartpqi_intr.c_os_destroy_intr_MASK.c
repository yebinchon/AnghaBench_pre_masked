
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ msi_enabled; int pqi_dev; } ;
struct TYPE_7__ {scalar_t__ intr_type; TYPE_1__ os_specific; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

int FUNC_4(pqisrc_softstate_t *VAR_4)
{
 device_t VAR_5;
 VAR_5 = VAR_4->os_specific.pqi_dev;

 FUNC_0("IN\n");

 if (VAR_4->intr_type == VAR_1) {
  FUNC_1(VAR_4);
 } else if (VAR_4->intr_type == VAR_2) {
  FUNC_2(VAR_4);
 }
 if (VAR_4->os_specific.msi_enabled) {
  FUNC_3(VAR_5);
  VAR_4->os_specific.msi_enabled = VAR_0;
 }

 FUNC_0("OUT\n");

 return VAR_3;
}
