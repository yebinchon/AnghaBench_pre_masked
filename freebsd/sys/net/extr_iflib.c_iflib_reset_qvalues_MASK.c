
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* if_softc_ctx_t ;
typedef TYPE_2__* if_shared_ctx_t ;
typedef TYPE_3__* if_ctx_t ;
typedef int device_t ;
struct TYPE_5__ {scalar_t__ isc_ntxqsets; scalar_t__ isc_nrxqsets; scalar_t__* isc_ntxd; scalar_t__* isc_nrxd; } ;
struct TYPE_7__ {scalar_t__ ifc_sysctl_ntxqs; scalar_t__ ifc_sysctl_nrxqs; scalar_t__* ifc_sysctl_ntxds; scalar_t__* ifc_sysctl_nrxds; int ifc_dev; TYPE_2__* ifc_sctx; TYPE_1__ ifc_softc_ctx; } ;
struct TYPE_6__ {int isc_ntxqs; scalar_t__* isc_ntxd_default; int isc_nrxqs; scalar_t__* isc_nrxd_default; scalar_t__* isc_nrxd_min; scalar_t__* isc_nrxd_max; scalar_t__* isc_ntxd_min; scalar_t__* isc_ntxd_max; } ;


 int FUNC_0 (int ,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_0)
{
 if_softc_ctx_t VAR_1 = &VAR_0->ifc_softc_ctx;
 if_shared_ctx_t VAR_2 = VAR_0->ifc_sctx;
 device_t VAR_3 = VAR_0->ifc_dev;
 int VAR_4;

 if (VAR_0->ifc_sysctl_ntxqs != 0)
  VAR_1->isc_ntxqsets = VAR_0->ifc_sysctl_ntxqs;
 if (VAR_0->ifc_sysctl_nrxqs != 0)
  VAR_1->isc_nrxqsets = VAR_0->ifc_sysctl_nrxqs;

 for (VAR_4 = 0; VAR_4 < VAR_2->isc_ntxqs; VAR_4++) {
  if (VAR_0->ifc_sysctl_ntxds[VAR_4] != 0)
   VAR_1->isc_ntxd[VAR_4] = VAR_0->ifc_sysctl_ntxds[VAR_4];
  else
   VAR_1->isc_ntxd[VAR_4] = VAR_2->isc_ntxd_default[VAR_4];
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->isc_nrxqs; VAR_4++) {
  if (VAR_0->ifc_sysctl_nrxds[VAR_4] != 0)
   VAR_1->isc_nrxd[VAR_4] = VAR_0->ifc_sysctl_nrxds[VAR_4];
  else
   VAR_1->isc_nrxd[VAR_4] = VAR_2->isc_nrxd_default[VAR_4];
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->isc_nrxqs; VAR_4++) {
  if (VAR_1->isc_nrxd[VAR_4] < VAR_2->isc_nrxd_min[VAR_4]) {
   FUNC_0(VAR_3, "nrxd%d: %d less than nrxd_min %d - resetting to min\n",
          VAR_4, VAR_1->isc_nrxd[VAR_4], VAR_2->isc_nrxd_min[VAR_4]);
   VAR_1->isc_nrxd[VAR_4] = VAR_2->isc_nrxd_min[VAR_4];
  }
  if (VAR_1->isc_nrxd[VAR_4] > VAR_2->isc_nrxd_max[VAR_4]) {
   FUNC_0(VAR_3, "nrxd%d: %d greater than nrxd_max %d - resetting to max\n",
          VAR_4, VAR_1->isc_nrxd[VAR_4], VAR_2->isc_nrxd_max[VAR_4]);
   VAR_1->isc_nrxd[VAR_4] = VAR_2->isc_nrxd_max[VAR_4];
  }
  if (!FUNC_1(VAR_1->isc_nrxd[VAR_4])) {
   FUNC_0(VAR_3, "nrxd%d: %d is not a power of 2 - using default value of %d\n",
          VAR_4, VAR_1->isc_nrxd[VAR_4], VAR_2->isc_nrxd_default[VAR_4]);
   VAR_1->isc_nrxd[VAR_4] = VAR_2->isc_nrxd_default[VAR_4];
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->isc_ntxqs; VAR_4++) {
  if (VAR_1->isc_ntxd[VAR_4] < VAR_2->isc_ntxd_min[VAR_4]) {
   FUNC_0(VAR_3, "ntxd%d: %d less than ntxd_min %d - resetting to min\n",
          VAR_4, VAR_1->isc_ntxd[VAR_4], VAR_2->isc_ntxd_min[VAR_4]);
   VAR_1->isc_ntxd[VAR_4] = VAR_2->isc_ntxd_min[VAR_4];
  }
  if (VAR_1->isc_ntxd[VAR_4] > VAR_2->isc_ntxd_max[VAR_4]) {
   FUNC_0(VAR_3, "ntxd%d: %d greater than ntxd_max %d - resetting to max\n",
          VAR_4, VAR_1->isc_ntxd[VAR_4], VAR_2->isc_ntxd_max[VAR_4]);
   VAR_1->isc_ntxd[VAR_4] = VAR_2->isc_ntxd_max[VAR_4];
  }
  if (!FUNC_1(VAR_1->isc_ntxd[VAR_4])) {
   FUNC_0(VAR_3, "ntxd%d: %d is not a power of 2 - using default value of %d\n",
          VAR_4, VAR_1->isc_ntxd[VAR_4], VAR_2->isc_ntxd_default[VAR_4]);
   VAR_1->isc_ntxd[VAR_4] = VAR_2->isc_ntxd_default[VAR_4];
  }
 }
}
