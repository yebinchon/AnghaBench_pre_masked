
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vmxnet3_txdesc {int dummy; } ;
struct vmxnet3_txcompdesc {int dummy; } ;
struct vmxnet3_softc {int vmx_intr_mask_mode; int vmx_lladdr; TYPE_1__* vmx_scctx; int vmx_media; int vmx_ifp; int vmx_sctx; int vmx_ctx; int vmx_dev; } ;
struct vmxnet3_rxdesc {int dummy; } ;
struct vmxnet3_rxcompdesc {int dummy; } ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef int device_t ;
struct TYPE_3__ {scalar_t__ isc_nrxqsets; scalar_t__ isc_ntxqsets; int* isc_ntxd; int* isc_txqsizes; int* isc_nrxd; int* isc_rxqsizes; int isc_msix_bar; int isc_disable_msix; int isc_capabilities; int isc_capenable; int isc_tx_csum_flags; int isc_rss_table_size; void* isc_ntxqsets_max; void* isc_nrxqsets_max; int * isc_txrx; int isc_tx_tso_segsize_max; int isc_tx_tso_size_max; void* isc_tx_tso_segments_max; void* isc_tx_nsegments; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;




 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct vmxnet3_softc* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 void* FUNC_7 (int ,int ) ;
 int VAR_23 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct vmxnet3_softc*) ;
 int FUNC_10 (struct vmxnet3_softc*) ;
 int FUNC_11 (struct vmxnet3_softc*) ;
 int FUNC_12 (struct vmxnet3_softc*) ;
 int FUNC_13 (struct vmxnet3_softc*,int ) ;
 int VAR_24 ;

__attribute__((used)) static int
FUNC_14(if_ctx_t VAR_25)
{
 device_t VAR_26;
 if_softc_ctx_t VAR_27;
 struct vmxnet3_softc *VAR_28;
 uint32_t VAR_29;
 int VAR_30;

 VAR_26 = FUNC_0(VAR_25);
 VAR_28 = FUNC_4(VAR_25);
 VAR_28->vmx_dev = VAR_26;
 VAR_28->vmx_ctx = VAR_25;
 VAR_28->vmx_sctx = FUNC_3(VAR_25);
 VAR_28->vmx_scctx = FUNC_5(VAR_25);
 VAR_28->vmx_ifp = FUNC_1(VAR_25);
 VAR_28->vmx_media = FUNC_2(VAR_25);
 VAR_27 = VAR_28->vmx_scctx;

 VAR_27->isc_tx_nsegments = VAR_21;
 VAR_27->isc_tx_tso_segments_max = VAR_21;

 VAR_27->isc_tx_tso_size_max = VAR_20;
 VAR_27->isc_tx_tso_segsize_max = VAR_22;
 VAR_27->isc_txrx = &VAR_24;


 if (VAR_27->isc_nrxqsets == 0)
  VAR_27->isc_nrxqsets = VAR_16;
 VAR_27->isc_nrxqsets_max = FUNC_7(VAR_18, VAR_23);


 if (VAR_27->isc_ntxqsets == 0)
  VAR_27->isc_ntxqsets = VAR_17;
 VAR_27->isc_ntxqsets_max = FUNC_7(VAR_19, VAR_23);





 VAR_27->isc_ntxd[0] = VAR_27->isc_ntxd[1];
 VAR_27->isc_txqsizes[0] =
     sizeof(struct vmxnet3_txcompdesc) * VAR_27->isc_ntxd[0];
 VAR_27->isc_txqsizes[1] =
     sizeof(struct vmxnet3_txdesc) * VAR_27->isc_ntxd[1];







 VAR_27->isc_nrxd[2] = VAR_27->isc_nrxd[1];
 VAR_27->isc_nrxd[0] = VAR_27->isc_nrxd[1] + VAR_27->isc_nrxd[2];
 VAR_27->isc_rxqsizes[0] =
     sizeof(struct vmxnet3_rxcompdesc) * VAR_27->isc_nrxd[0];
 VAR_27->isc_rxqsizes[1] =
     sizeof(struct vmxnet3_rxdesc) * VAR_27->isc_nrxd[1];
 VAR_27->isc_rxqsizes[2] =
     sizeof(struct vmxnet3_rxdesc) * VAR_27->isc_nrxd[2];

 VAR_27->isc_rss_table_size = VAR_13;


 VAR_30 = FUNC_9(VAR_28);
 if (VAR_30)
  goto fail;


 VAR_30 = FUNC_10(VAR_28);
 if (VAR_30)
  goto fail;





 VAR_29 = FUNC_13(VAR_28, VAR_14);
 VAR_28->vmx_intr_mask_mode = (VAR_29 >> 2) & 0x03;







 switch (VAR_29 & 0x03) {
 case 131:
 case 128:
  VAR_27->isc_msix_bar = FUNC_8(VAR_26);
  break;
 case 129:
  VAR_27->isc_msix_bar = -1;
  VAR_27->isc_disable_msix = 1;
  break;
 case 130:
  VAR_27->isc_msix_bar = 0;
  break;
 }

 VAR_27->isc_tx_csum_flags = VAR_15;
 VAR_27->isc_capabilities = VAR_27->isc_capenable =
     VAR_6 | VAR_7 |
     VAR_4 | VAR_5 |
     VAR_2 | VAR_3 |
     VAR_12 | VAR_10 |
     VAR_8 | VAR_11 |
     VAR_0;


 VAR_27->isc_capabilities |= VAR_1 | VAR_9;

 FUNC_12(VAR_28);
 FUNC_6(VAR_25, VAR_28->vmx_lladdr);

 return (0);
fail:





 FUNC_11(VAR_28);

 return (VAR_30);
}
