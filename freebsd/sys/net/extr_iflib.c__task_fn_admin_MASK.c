
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_2__* iflib_txq_t ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef TYPE_4__* if_ctx_t ;
struct TYPE_26__ {int c_cpu; } ;
struct TYPE_24__ {int isc_ntxqsets; } ;
struct TYPE_25__ {int ifc_flags; TYPE_2__* ifc_txqs; int ifc_ifp; int ifc_watchdog_events; TYPE_1__* ifc_sctx; TYPE_3__ ifc_softc_ctx; } ;
struct TYPE_23__ {TYPE_9__ ift_timer; } ;
struct TYPE_22__ {int isc_flags; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_9__*,int,int ,TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_9__*) ;
 int VAR_8 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*,TYPE_2__*,int*) ;
 int VAR_9 ;
 int FUNC_16 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_17(void *VAR_10)
{
 if_ctx_t VAR_11 = VAR_10;
 if_softc_ctx_t VAR_12 = &VAR_11->ifc_softc_ctx;
 iflib_txq_t VAR_13;
 int VAR_14;
 bool VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 uint32_t VAR_20 = VAR_8 / 2;

 FUNC_8(VAR_11);
 VAR_16 = (FUNC_13(VAR_11->ifc_ifp) & VAR_5);
 VAR_15 = (FUNC_13(VAR_11->ifc_ifp) & VAR_4);
 VAR_17 = (VAR_11->ifc_flags & VAR_1);
 VAR_18 = (VAR_11->ifc_flags & VAR_2);
 VAR_19 = (VAR_11->ifc_flags & VAR_3);
 VAR_11->ifc_flags &= ~(VAR_1|VAR_2);
 FUNC_9(VAR_11);

 if ((!VAR_16 && !VAR_15) && !(VAR_11->ifc_sctx->isc_flags & VAR_6))
  return;
 if (VAR_19)
  return;

 FUNC_2(VAR_11);
 for (VAR_13 = VAR_11->ifc_txqs, VAR_14 = 0; VAR_14 < VAR_12->isc_ntxqsets; VAR_14++, VAR_13++) {
  FUNC_0(VAR_13);
  FUNC_11(&VAR_13->ift_timer);
  FUNC_1(VAR_13);
 }
 if (VAR_18) {
  VAR_11->ifc_watchdog_events++;
  FUNC_6(VAR_11);
 }
 FUNC_5(VAR_11);
 for (VAR_13 = VAR_11->ifc_txqs, VAR_14 = 0; VAR_14 < VAR_12->isc_ntxqsets; VAR_14++, VAR_13++) {





  FUNC_10(&VAR_13->ift_timer, VAR_20, VAR_9, VAR_13, VAR_13->ift_timer.c_cpu);
 }
 FUNC_4(VAR_11);
 if (VAR_17)
  FUNC_14(VAR_11);
 FUNC_3(VAR_11);

 if (FUNC_7(VAR_11) == 0)
  return;
 for (VAR_13 = VAR_11->ifc_txqs, VAR_14 = 0; VAR_14 < VAR_12->isc_ntxqsets; VAR_14++, VAR_13++)
  FUNC_16(VAR_13, VAR_7);
}
