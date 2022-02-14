
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vmxnet3_txq_shared {scalar_t__ stopped; int error; } ;
struct vmxnet3_softc {TYPE_3__* vmx_rxq; TYPE_2__* vmx_txq; TYPE_1__* vmx_ds; int vmx_dev; } ;
struct vmxnet3_rxq_shared {scalar_t__ stopped; int error; } ;
typedef int device_t ;
struct TYPE_6__ {struct vmxnet3_rxq_shared* vxrxq_rs; } ;
struct TYPE_5__ {struct vmxnet3_txq_shared* vxtxq_ts; } ;
struct TYPE_4__ {int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct vmxnet3_softc*) ;
 int FUNC_2 (struct vmxnet3_softc*,int ) ;
 int FUNC_3 (struct vmxnet3_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct vmxnet3_softc *VAR_7)
{
 device_t VAR_8;
 struct vmxnet3_txq_shared *VAR_9;
 struct vmxnet3_rxq_shared *VAR_10;
 uint32_t VAR_11;

 VAR_8 = VAR_7->vmx_dev;


 VAR_11 = VAR_7->vmx_ds->event;
 FUNC_3(VAR_7, VAR_0, VAR_11);

 if (VAR_11 & VAR_4)
  FUNC_1(VAR_7);

 if (VAR_11 & (VAR_6 | VAR_5)) {
  FUNC_2(VAR_7, VAR_1);
  VAR_9 = VAR_7->vmx_txq[0].vxtxq_ts;
  if (VAR_9->stopped != 0)
   FUNC_0(VAR_8, "Tx queue error %#x\n", VAR_9->error);
  VAR_10 = VAR_7->vmx_rxq[0].vxrxq_rs;
  if (VAR_10->stopped != 0)
   FUNC_0(VAR_8, "Rx queue error %#x\n", VAR_10->error);


  FUNC_0(VAR_8, "Rx/Tx queue error event ... "
      "waiting for iflib watchdog reset\n");
 }

 if (VAR_11 & VAR_3)
  FUNC_0(VAR_8, "device implementation change event\n");
 if (VAR_11 & VAR_2)
  FUNC_0(VAR_8, "debug event\n");
}
