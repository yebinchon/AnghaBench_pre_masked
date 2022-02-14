
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ opLiodnOffset; int qmChannel; int dfltFqid; int errFqid; } ;
struct TYPE_6__ {TYPE_3__ nonRxParams; } ;
struct TYPE_7__ {int independentModeEnable; TYPE_1__ specificParams; struct dtsec_softc* h_App; int f_Exception; int liodnBase; int portId; int portType; int h_Fm; scalar_t__ baseAddr; } ;
typedef TYPE_2__ t_FmPortParams ;
typedef TYPE_3__ t_FmPortNonRxParams ;
typedef scalar_t__ t_Error ;
struct dtsec_softc {scalar_t__ sc_port_tx_hw_id; int sc_dev; int * sc_txph; int sc_port_tx_qman_chan; int sc_tx_conf_fqid; int sc_eth_id; int sc_eth_dev_type; int sc_fmh; scalar_t__ sc_fm_base; } ;
typedef int params ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

int
FUNC_6(struct dtsec_softc *VAR_5, int VAR_6)
{
 t_FmPortParams VAR_7;
 t_FmPortNonRxParams *VAR_8;
 t_Error VAR_9;

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.baseAddr = VAR_5->sc_fm_base + VAR_5->sc_port_tx_hw_id;
 VAR_7.h_Fm = VAR_5->sc_fmh;
 VAR_7.portType = FUNC_4(VAR_5->sc_eth_dev_type);
 VAR_7.portId = VAR_5->sc_eth_id;
 VAR_7.independentModeEnable = 0;
 VAR_7.liodnBase = VAR_2;
 VAR_7.f_Exception = VAR_4;
 VAR_7.h_App = VAR_5;

 VAR_8 = &VAR_7.specificParams.nonRxParams;
 VAR_8->errFqid = VAR_5->sc_tx_conf_fqid;
 VAR_8->dfltFqid = VAR_5->sc_tx_conf_fqid;
 VAR_8->qmChannel = VAR_5->sc_port_tx_qman_chan;




 VAR_5->sc_txph = FUNC_0(&VAR_7);
 if (VAR_5->sc_txph == ((void*)0)) {
  FUNC_3(VAR_5->sc_dev, "couldn't configure FM Port TX.\n");
  return (VAR_0);
 }

 VAR_9 = FUNC_2(VAR_5->sc_txph);
 if (VAR_9 != VAR_1) {
  FUNC_3(VAR_5->sc_dev, "couldn't initialize FM Port TX.\n");
  FUNC_1(VAR_5->sc_txph);
  return (VAR_0);
 }

 if (VAR_3)
  FUNC_3(VAR_5->sc_dev, "TX hw port 0x%02x initialized.\n",
      VAR_5->sc_port_tx_hw_id);

 return (0);
}
