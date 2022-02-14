
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int f_TxConf; int dataMemAttributes; int dataMemId; int liodnOffset; int h_FmMuram; } ;
struct TYPE_6__ {TYPE_3__ imRxTxParams; } ;
struct TYPE_7__ {int portId; TYPE_1__ specificParams; struct dtsec_softc* h_App; int f_Exception; int liodnBase; int independentModeEnable; int portType; int h_Fm; scalar_t__ baseAddr; } ;
typedef TYPE_2__ t_FmPortParams ;
typedef TYPE_3__ t_FmPortImRxTxParams ;
typedef scalar_t__ t_Error ;
struct dtsec_softc {scalar_t__ sc_port_tx_hw_id; int sc_dev; int * sc_txph; int sc_muramh; int sc_eth_dev_type; int sc_fmh; scalar_t__ sc_fm_base; } ;
typedef int params ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

int
FUNC_6(struct dtsec_softc *VAR_10, int VAR_11)
{
 t_FmPortParams VAR_12;
 t_FmPortImRxTxParams *VAR_13;
 t_Error VAR_14;

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));

 VAR_12.baseAddr = VAR_10->sc_fm_base + VAR_10->sc_port_tx_hw_id;
 VAR_12.h_Fm = VAR_10->sc_fmh;
 VAR_12.portType = FUNC_4(VAR_10->sc_eth_dev_type);
 VAR_12.portId = VAR_11;
 VAR_12.independentModeEnable = VAR_6;
 VAR_12.liodnBase = VAR_2;
 VAR_12.f_Exception = VAR_8;
 VAR_12.h_App = VAR_10;

 VAR_13 = &VAR_12.specificParams.imRxTxParams;
 VAR_13->h_FmMuram = VAR_10->sc_muramh;
 VAR_13->liodnOffset = VAR_3;
 VAR_13->dataMemId = VAR_5;
 VAR_13->dataMemAttributes = VAR_4;
 VAR_13->f_TxConf = VAR_9;

 VAR_10->sc_txph = FUNC_0(&VAR_12);
 if (VAR_10->sc_txph == ((void*)0)) {
  FUNC_3(VAR_10->sc_dev, "couldn't configure FM Port TX.\n");
  return (VAR_0);
 }

 VAR_14 = FUNC_2(VAR_10->sc_txph);
 if (VAR_14 != VAR_1) {
  FUNC_3(VAR_10->sc_dev, "couldn't initialize FM Port TX.\n");
  FUNC_1(VAR_10->sc_txph);
  return (VAR_0);
 }

 if (VAR_7)
  FUNC_3(VAR_10->sc_dev, "TX hw port 0x%02x initialized.\n",
      VAR_10->sc_port_tx_hw_id);

 return (0);
}
