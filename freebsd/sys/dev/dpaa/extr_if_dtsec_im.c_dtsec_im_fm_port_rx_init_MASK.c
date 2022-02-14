
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int bufferSize; int f_PutBuf; int f_GetBuf; struct dtsec_softc* h_BufferPool; } ;
struct TYPE_9__ {TYPE_4__ rxPoolParams; int f_RxStore; int dataMemAttributes; int dataMemId; int liodnOffset; int h_FmMuram; } ;
struct TYPE_7__ {TYPE_3__ imRxTxParams; } ;
struct TYPE_8__ {TYPE_1__ specificParams; struct dtsec_softc* h_App; int f_Exception; int liodnBase; int independentModeEnable; int portId; int portType; int h_Fm; scalar_t__ baseAddr; } ;
typedef TYPE_2__ t_FmPortParams ;
typedef TYPE_3__ t_FmPortImRxTxParams ;
typedef scalar_t__ t_Error ;
typedef TYPE_4__ t_BufferPoolInfo ;
struct dtsec_softc {scalar_t__ sc_port_rx_hw_id; int sc_dev; int * sc_rxph; int sc_muramh; int sc_eth_id; int sc_eth_dev_type; int sc_fmh; scalar_t__ sc_fm_base; } ;
typedef int params ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

int
FUNC_6(struct dtsec_softc *VAR_13, int VAR_14)
{
 t_FmPortParams VAR_15;
 t_BufferPoolInfo *VAR_16;
 t_FmPortImRxTxParams *VAR_17;
 t_Error VAR_18;

 FUNC_5(&VAR_15, 0, sizeof(VAR_15));

 VAR_15.baseAddr = VAR_13->sc_fm_base + VAR_13->sc_port_rx_hw_id;
 VAR_15.h_Fm = VAR_13->sc_fmh;
 VAR_15.portType = FUNC_4(VAR_13->sc_eth_dev_type);
 VAR_15.portId = VAR_13->sc_eth_id;
 VAR_15.independentModeEnable = VAR_7;
 VAR_15.liodnBase = VAR_3;
 VAR_15.f_Exception = VAR_9;
 VAR_15.h_App = VAR_13;

 VAR_17 = &VAR_15.specificParams.imRxTxParams;
 VAR_17->h_FmMuram = VAR_13->sc_muramh;
 VAR_17->liodnOffset = VAR_4;
 VAR_17->dataMemId = VAR_6;
 VAR_17->dataMemAttributes = VAR_5;
 VAR_17->f_RxStore = VAR_10;

 VAR_16 = &VAR_15.specificParams.imRxTxParams.rxPoolParams;
 VAR_16->h_BufferPool = VAR_13;
 VAR_16->f_GetBuf = VAR_11;
 VAR_16->f_PutBuf = VAR_12;
 VAR_16->bufferSize = VAR_2;

 VAR_13->sc_rxph = FUNC_0(&VAR_15);
 if (VAR_13->sc_rxph == ((void*)0)) {
  FUNC_3(VAR_13->sc_dev, "couldn't configure FM Port RX.\n");
  return (VAR_0);
 }

 VAR_18 = FUNC_2(VAR_13->sc_rxph);
 if (VAR_18 != VAR_1) {
  FUNC_3(VAR_13->sc_dev, "couldn't initialize FM Port RX.\n");
  FUNC_1(VAR_13->sc_rxph);
  return (VAR_0);
 }

 if (VAR_8)
  FUNC_3(VAR_13->sc_dev, "RX hw port 0x%02x initialized.\n",
      VAR_13->sc_port_rx_hw_id);

 return (0);
}
