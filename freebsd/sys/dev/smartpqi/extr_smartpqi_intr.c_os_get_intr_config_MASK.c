
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* msi_enabled; int pqi_dev; } ;
struct TYPE_5__ {int num_cpus_online; int intr_count; scalar_t__ intr_type; TYPE_1__ os_specific; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(pqisrc_softstate_t *VAR_7)
{
 device_t VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = VAR_5;
 VAR_8 = VAR_7->os_specific.pqi_dev;

 FUNC_0("IN\n");

 VAR_9 = FUNC_4(VAR_8);

 if (VAR_9 > VAR_7->num_cpus_online)
  VAR_9 = VAR_7->num_cpus_online;
 if (VAR_9 > VAR_3)
  VAR_9 = VAR_3;
 if (VAR_9 == 0 || (VAR_10 = FUNC_3(VAR_8, &VAR_9)) != 0) {
  FUNC_1(VAR_8, "alloc msix failed - msi_count=%d, err=%d; "
                                   "will try MSI\n", VAR_9, VAR_10);
  FUNC_5(VAR_8);
 } else {
  VAR_7->intr_count = VAR_9;
  VAR_7->intr_type = VAR_2;
  VAR_7->os_specific.msi_enabled = VAR_6;
  FUNC_1(VAR_8, "using MSI-X interrupts (%d vectors)\n",
   VAR_9);
 }
 if (!VAR_7->intr_type) {
  VAR_9 = 1;
  if ((VAR_10 = FUNC_2(VAR_8, &VAR_9)) != 0) {
   FUNC_1(VAR_8, "alloc msi failed - err=%d; "
    "will use INTx\n", VAR_10);
   FUNC_5(VAR_8);
  } else {
   VAR_7->os_specific.msi_enabled = VAR_6;
   VAR_7->intr_count = VAR_9;
   VAR_7->intr_type = VAR_1;
   FUNC_1(VAR_8, "using MSI interrupts\n");
  }
 }

 if (!VAR_7->intr_type) {
  FUNC_1(VAR_8, "using legacy interrupts\n");
  VAR_7->intr_type = VAR_0;
  VAR_7->intr_count = 1;
 }

 if(!VAR_7->intr_type) {
  FUNC_0("OUT failed\n");
  VAR_11 = VAR_4;
  return VAR_11;
 }
 FUNC_0("OUT\n");
 return VAR_11;
}
