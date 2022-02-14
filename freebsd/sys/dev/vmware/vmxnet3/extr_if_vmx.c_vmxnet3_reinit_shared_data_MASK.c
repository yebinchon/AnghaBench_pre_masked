
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int idi_paddr; } ;
struct vmxnet3_softc {int vmx_flags; TYPE_1__ vmx_ds_dma; TYPE_2__* vmx_scctx; struct vmxnet3_driver_shared* vmx_ds; struct ifnet* vmx_ifp; } ;
struct vmxnet3_driver_shared {int upt_features; int nrxqueue; int ntxqueue; int mtu; } ;
struct ifnet {int if_capenable; int if_mtu; } ;
typedef TYPE_2__* if_softc_ctx_t ;
struct TYPE_4__ {int isc_nrxqsets; int isc_ntxqsets; } ;


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
 int FUNC_0 (struct vmxnet3_softc*) ;
 int FUNC_1 (struct vmxnet3_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct vmxnet3_softc *VAR_11)
{
 struct ifnet *VAR_12;
 struct vmxnet3_driver_shared *VAR_13;
 if_softc_ctx_t VAR_14;

 VAR_12 = VAR_11->vmx_ifp;
 VAR_13 = VAR_11->vmx_ds;
 VAR_14 = VAR_11->vmx_scctx;

 VAR_13->mtu = VAR_12->if_mtu;
 VAR_13->ntxqueue = VAR_14->isc_ntxqsets;
 VAR_13->nrxqueue = VAR_14->isc_nrxqsets;

 VAR_13->upt_features = 0;
 if (VAR_12->if_capenable & (VAR_1 | VAR_2))
  VAR_13->upt_features |= VAR_4;
 if (VAR_12->if_capenable & VAR_3)
  VAR_13->upt_features |= VAR_7;
 if (VAR_12->if_capenable & VAR_0)
  VAR_13->upt_features |= VAR_5;

 if (VAR_11->vmx_flags & VAR_10) {
  VAR_13->upt_features |= VAR_6;
  FUNC_0(VAR_11);
 }

 FUNC_1(VAR_11, VAR_9, VAR_11->vmx_ds_dma.idi_paddr);
 FUNC_1(VAR_11, VAR_8,
     (uint64_t) VAR_11->vmx_ds_dma.idi_paddr >> 32);
}
