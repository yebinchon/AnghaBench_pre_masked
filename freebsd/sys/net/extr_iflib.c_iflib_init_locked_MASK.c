
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;


typedef TYPE_1__* iflib_txq_t ;
typedef TYPE_2__* iflib_rxq_t ;
typedef int iflib_fl_t ;
typedef int if_t ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef TYPE_4__* if_ctx_t ;
struct TYPE_22__ {int isc_tx_csum_flags; int isc_ntxqsets; int isc_nrxqsets; } ;
struct TYPE_23__ {TYPE_1__* ifc_txqs; int ifc_ifp; int ifc_dev; TYPE_2__* ifc_rxqs; TYPE_3__ ifc_softc_ctx; } ;
struct TYPE_21__ {int ifr_id; int ifr_nfl; int ifr_fl; } ;
struct TYPE_19__ {int c_cpu; } ;
struct TYPE_20__ {TYPE_11__ ift_timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_11__*,int,int ,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_16 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_17 (TYPE_4__*,TYPE_1__*) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_18(if_ctx_t VAR_18)
{
 if_softc_ctx_t VAR_19 = &VAR_18->ifc_softc_ctx;
 if_softc_ctx_t VAR_20 = &VAR_18->ifc_softc_ctx;
 if_t VAR_21 = VAR_18->ifc_ifp;
 iflib_fl_t VAR_22;
 iflib_txq_t VAR_23;
 iflib_rxq_t VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;

 FUNC_12(VAR_21, VAR_14, VAR_15);
 FUNC_3(VAR_18);

 VAR_27 = VAR_20->isc_tx_csum_flags & (VAR_0 | VAR_7 | VAR_8 | VAR_6);
 VAR_28 = VAR_20->isc_tx_csum_flags & (VAR_2 | VAR_4 | VAR_1);

 FUNC_9(VAR_21);
 if (FUNC_10(VAR_21) & VAR_12)
  FUNC_13(VAR_21, VAR_27, 0);
 if (FUNC_10(VAR_21) & VAR_13)
  FUNC_13(VAR_21, VAR_28, 0);
 if (FUNC_10(VAR_21) & VAR_10)
  FUNC_13(VAR_21, VAR_5, 0);
 if (FUNC_10(VAR_21) & VAR_11)
  FUNC_13(VAR_21, VAR_3, 0);

 for (VAR_25 = 0, VAR_23 = VAR_18->ifc_txqs; VAR_25 < VAR_19->isc_ntxqsets; VAR_25++, VAR_23++) {
  FUNC_0(VAR_23);
  FUNC_7(&VAR_23->ift_timer);
  FUNC_1(VAR_23);
  FUNC_17(VAR_18, VAR_23);
 }






 FUNC_14(VAR_18);




 FUNC_2(VAR_18);
 FUNC_5(FUNC_11(VAR_21) == VAR_25);
 for (VAR_25 = 0, VAR_24 = VAR_18->ifc_rxqs; VAR_25 < VAR_19->isc_nrxqsets; VAR_25++, VAR_24++) {

  if (FUNC_10(VAR_21) & VAR_9) {
   FUNC_5(VAR_24->ifr_id == VAR_25);
   FUNC_16(VAR_18, VAR_24);
   continue;
  }
  for (VAR_26 = 0, VAR_22 = VAR_24->ifr_fl; VAR_26 < VAR_24->ifr_nfl; VAR_26++, VAR_22++) {
   if (FUNC_15(VAR_22)) {
    FUNC_8(VAR_18->ifc_dev,
        "setting up free list %d failed - "
        "check cluster settings\n", VAR_26);
    goto done;
   }
  }
 }
done:
 FUNC_12(VAR_18->ifc_ifp, VAR_15, VAR_14);
 FUNC_4(VAR_18);
 VAR_23 = VAR_18->ifc_txqs;
 for (VAR_25 = 0; VAR_25 < VAR_19->isc_ntxqsets; VAR_25++, VAR_23++)
  FUNC_6(&VAR_23->ift_timer, VAR_16/2, VAR_17, VAR_23,
   VAR_23->ift_timer.c_cpu);
}
