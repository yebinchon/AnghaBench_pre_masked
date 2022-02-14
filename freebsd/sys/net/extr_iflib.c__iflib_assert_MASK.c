
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* if_shared_ctx_t ;
struct TYPE_3__ {int isc_tx_maxsize; int isc_tx_maxsegsize; int isc_rx_maxsize; int isc_rx_nsegments; int isc_rx_maxsegsize; int isc_nrxqs; int* isc_nrxd_min; int* isc_nrxd_max; int* isc_nrxd_default; int isc_ntxqs; int* isc_ntxd_min; int* isc_ntxd_max; int* isc_ntxd_default; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(if_shared_ctx_t VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->isc_tx_maxsize);
 FUNC_0(VAR_0->isc_tx_maxsegsize);

 FUNC_0(VAR_0->isc_rx_maxsize);
 FUNC_0(VAR_0->isc_rx_nsegments);
 FUNC_0(VAR_0->isc_rx_maxsegsize);

 FUNC_0(VAR_0->isc_nrxqs >= 1 && VAR_0->isc_nrxqs <= 8);
 for (VAR_1 = 0; VAR_1 < VAR_0->isc_nrxqs; VAR_1++) {
  FUNC_0(VAR_0->isc_nrxd_min[VAR_1]);
  FUNC_0(FUNC_1(VAR_0->isc_nrxd_min[VAR_1]));
  FUNC_0(VAR_0->isc_nrxd_max[VAR_1]);
  FUNC_0(FUNC_1(VAR_0->isc_nrxd_max[VAR_1]));
  FUNC_0(VAR_0->isc_nrxd_default[VAR_1]);
  FUNC_0(FUNC_1(VAR_0->isc_nrxd_default[VAR_1]));
 }

 FUNC_0(VAR_0->isc_ntxqs >= 1 && VAR_0->isc_ntxqs <= 8);
 for (VAR_1 = 0; VAR_1 < VAR_0->isc_ntxqs; VAR_1++) {
  FUNC_0(VAR_0->isc_ntxd_min[VAR_1]);
  FUNC_0(FUNC_1(VAR_0->isc_ntxd_min[VAR_1]));
  FUNC_0(VAR_0->isc_ntxd_max[VAR_1]);
  FUNC_0(FUNC_1(VAR_0->isc_ntxd_max[VAR_1]));
  FUNC_0(VAR_0->isc_ntxd_default[VAR_1]);
  FUNC_0(FUNC_1(VAR_0->isc_ntxd_default[VAR_1]));
 }
}
