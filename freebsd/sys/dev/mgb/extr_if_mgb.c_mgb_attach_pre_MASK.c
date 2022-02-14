
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mii_data {int mii_media; } ;
struct mgb_softc {int dev; int * pba; int miibus; int ctx; } ;
struct mgb_ring_desc {int dummy; } ;
struct ether_addr {int octet; } ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_3__ {int* isc_txqsizes; int* isc_ntxd; int* isc_rxqsizes; int* isc_nrxd; int isc_nrxqsets; int isc_ntxqsets; int isc_capabilities; int isc_capenable; int isc_msix_bar; int * isc_media; scalar_t__ isc_tx_csum_flags; int isc_tx_nsegments; int * isc_txrx; } ;


 int VAR_0 ;
 int FUNC_0 (struct mgb_softc*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * FUNC_4 (int ,int ,int*,int ) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,struct ether_addr*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct mgb_softc* FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct mgb_softc*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct mgb_softc*,struct ether_addr*) ;
 int FUNC_16 (struct mgb_softc*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_17 (struct mgb_softc*) ;
 int VAR_26 ;
 int FUNC_18 (int ,int *,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int
FUNC_22(if_ctx_t VAR_27)
{
 struct mgb_softc *VAR_28;
 if_softc_ctx_t VAR_29;
 int VAR_30, VAR_31, VAR_32;
 struct ether_addr VAR_33;
 struct mii_data *VAR_34;

 VAR_28 = FUNC_10(VAR_27);
 VAR_28->ctx = VAR_27;
 VAR_28->dev = FUNC_8(VAR_27);
 VAR_29 = FUNC_11(VAR_27);


 VAR_29->isc_txrx = &VAR_26;
 VAR_29->isc_tx_nsegments = VAR_15;

 VAR_29->isc_txqsizes[0] = sizeof(struct mgb_ring_desc) *
     VAR_29->isc_ntxd[0];
 VAR_29->isc_rxqsizes[0] = sizeof(struct mgb_ring_desc) *
     VAR_29->isc_nrxd[0];


 VAR_29->isc_txqsizes[1] = sizeof(uint32_t) * VAR_29->isc_ntxd[1];
 VAR_29->isc_rxqsizes[1] = sizeof(uint32_t) * VAR_29->isc_nrxd[1];


 VAR_29->isc_nrxqsets = 1;
 VAR_29->isc_ntxqsets = 1;



 VAR_29->isc_tx_csum_flags = 0;
 VAR_29->isc_capabilities = VAR_29->isc_capenable = 0;
 VAR_30 = FUNC_13(VAR_28);
 if (VAR_30 != 0) {
  FUNC_6(VAR_28->dev,
      "Unable to allocate bus resource: registers.\n");
  goto fail;
 }

 VAR_30 = FUNC_17(VAR_28);
 if (VAR_30 != 0)
  goto fail;

 VAR_30 = FUNC_16(VAR_28);
 if (VAR_30 != 0) {
  FUNC_6(VAR_28->dev,
      "MGB device init failed. (err: %d)\n", VAR_30);
  goto fail;
 }

 switch (FUNC_19(VAR_28->dev))
 {
 case 129:
  VAR_31 = 1;
  break;
 case 128:
 default:
  VAR_31 = VAR_21;
  break;
 }


 VAR_30 = FUNC_18(VAR_28->dev, &VAR_28->miibus, FUNC_9(VAR_27),
     VAR_24, VAR_25,
     VAR_0, VAR_31, VAR_20, VAR_19);
 if (VAR_30 != 0) {
  FUNC_6(VAR_28->dev, "Failed to attach MII interface\n");
  goto fail;
 }

 VAR_34 = FUNC_5(VAR_28->miibus);
 VAR_29->isc_media = &VAR_34->mii_media;

 VAR_29->isc_msix_bar = FUNC_21(VAR_28->dev);

 VAR_32 = FUNC_20(VAR_28->dev);
 if (VAR_32 != VAR_29->isc_msix_bar) {
  VAR_28->pba = FUNC_4(VAR_28->dev, VAR_23,
      &VAR_32, VAR_22);
  if (VAR_28->pba == ((void*)0)) {
   VAR_30 = VAR_1;
   FUNC_6(VAR_28->dev, "Failed to setup PBA BAR\n");
   goto fail;
  }
 }

 FUNC_15(VAR_28, &VAR_33);
 if (FUNC_1(VAR_33.octet) ||
     FUNC_2(VAR_33.octet) ||
     FUNC_3(VAR_33.octet))
  FUNC_7(FUNC_9(VAR_27), &VAR_33);





 FUNC_12(VAR_27, VAR_33.octet);


 FUNC_0(VAR_28, VAR_17, 0);
 FUNC_0(VAR_28, VAR_18, 0);
 FUNC_0(VAR_28, VAR_16, 0);

 return (0);

fail:
 FUNC_14(VAR_27);
 return (VAR_30);
}
