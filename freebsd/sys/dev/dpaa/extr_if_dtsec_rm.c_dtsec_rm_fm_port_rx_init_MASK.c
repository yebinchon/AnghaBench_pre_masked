
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* extBufPool; int numOfPoolsUsed; } ;
struct TYPE_10__ {TYPE_5__ extBufPools; scalar_t__ liodnOffset; int dfltFqid; int errFqid; } ;
typedef TYPE_3__ t_FmPortRxParams ;
struct TYPE_8__ {TYPE_3__ rxParams; } ;
struct TYPE_11__ {int independentModeEnable; TYPE_1__ specificParams; struct dtsec_softc* h_App; int f_Exception; int liodnBase; int portId; int portType; int h_Fm; scalar_t__ baseAddr; } ;
typedef TYPE_4__ t_FmPortParams ;
typedef TYPE_5__ t_FmExtPools ;
typedef scalar_t__ t_Error ;
struct dtsec_softc {scalar_t__ sc_port_rx_hw_id; int sc_dev; int * sc_rxph; int sc_rx_bpid; int sc_rx_fqid; int sc_eth_id; int sc_eth_dev_type; int sc_fmh; scalar_t__ sc_fm_base; } ;
typedef int params ;
struct TYPE_9__ {int size; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;

int
FUNC_6(struct dtsec_softc *VAR_7, int VAR_8)
{
 t_FmPortParams VAR_9;
 t_FmPortRxParams *VAR_10;
 t_FmExtPools *VAR_11;
 t_Error VAR_12;

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.baseAddr = VAR_7->sc_fm_base + VAR_7->sc_port_rx_hw_id;
 VAR_9.h_Fm = VAR_7->sc_fmh;
 VAR_9.portType = FUNC_4(VAR_7->sc_eth_dev_type);
 VAR_9.portId = VAR_7->sc_eth_id;
 VAR_9.independentModeEnable = 0;
 VAR_9.liodnBase = VAR_4;
 VAR_9.f_Exception = VAR_6;
 VAR_9.h_App = VAR_7;

 VAR_10 = &VAR_9.specificParams.rxParams;
 VAR_10->errFqid = VAR_7->sc_rx_fqid;
 VAR_10->dfltFqid = VAR_7->sc_rx_fqid;
 VAR_10->liodnOffset = 0;

 VAR_11 = &VAR_10->extBufPools;
 VAR_11->numOfPoolsUsed = VAR_0;
 VAR_11->extBufPool->id = VAR_7->sc_rx_bpid;
 VAR_11->extBufPool->size = VAR_3;

 VAR_7->sc_rxph = FUNC_0(&VAR_9);
 if (VAR_7->sc_rxph == ((void*)0)) {
  FUNC_3(VAR_7->sc_dev, "couldn't configure FM Port RX.\n");
  return (VAR_1);
 }

 VAR_12 = FUNC_2(VAR_7->sc_rxph);
 if (VAR_12 != VAR_2) {
  FUNC_3(VAR_7->sc_dev, "couldn't initialize FM Port RX.\n");
  FUNC_1(VAR_7->sc_rxph);
  return (VAR_1);
 }

 if (VAR_5)
  FUNC_3(VAR_7->sc_dev, "RX hw port 0x%02x initialized.\n",
      VAR_7->sc_port_rx_hw_id);

 return (0);
}
