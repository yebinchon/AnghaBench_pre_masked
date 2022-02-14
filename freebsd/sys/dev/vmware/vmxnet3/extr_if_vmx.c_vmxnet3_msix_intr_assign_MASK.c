
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {int vmx_event_intr_irq; int vxrxq_irq; struct vmxnet3_softc* vmx_rxq; TYPE_1__* vmx_scctx; } ;
struct vmxnet3_rxqueue {int vmx_event_intr_irq; int vxrxq_irq; struct vmxnet3_rxqueue* vmx_rxq; TYPE_1__* vmx_scctx; } ;
typedef int irq_name ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_2__ {int isc_nrxqsets; int isc_ntxqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 struct vmxnet3_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int ,int ,struct vmxnet3_softc*,int,char*) ;
 int FUNC_4 (int ,int *,int ,int *,int,char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(if_ctx_t VAR_5, int VAR_6)
{
 struct vmxnet3_softc *VAR_7;
 if_softc_ctx_t VAR_8;
 struct vmxnet3_rxqueue *VAR_9;
 int VAR_10;
 int VAR_11;
 char VAR_12[16];

 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = VAR_7->vmx_scctx;

 for (VAR_11 = 0; VAR_11 < VAR_8->isc_nrxqsets; VAR_11++) {
  FUNC_5(VAR_12, sizeof(VAR_12), "rxq%d", VAR_11);

  VAR_9 = &VAR_7->vmx_rxq[VAR_11];
  VAR_10 = FUNC_3(VAR_5, &VAR_9->vxrxq_irq, VAR_11 + 1,
      VAR_1, VAR_4, VAR_9, VAR_11, VAR_12);
  if (VAR_10) {
   FUNC_0(FUNC_1(VAR_5),
       "Failed to register rxq %d interrupt handler\n", VAR_11);
   return (VAR_10);
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->isc_ntxqsets; VAR_11++) {
  FUNC_5(VAR_12, sizeof(VAR_12), "txq%d", VAR_11);
  FUNC_4(VAR_5, ((void*)0), VAR_2, ((void*)0), VAR_11,
      VAR_12);
 }

 VAR_10 = FUNC_3(VAR_5, &VAR_7->vmx_event_intr_irq,
     VAR_8->isc_nrxqsets + 1, VAR_0, VAR_3, VAR_7, 0,
     "event");
 if (VAR_10) {
  FUNC_0(FUNC_1(VAR_5),
      "Failed to register event interrupt handler\n");
  return (VAR_10);
 }

 return (0);
}
