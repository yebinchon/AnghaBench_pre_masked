
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idi_size; } ;
struct vmxnet3_softc {int * vmx_txq; int * vmx_rxq; TYPE_1__ vmx_qs_dma; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct vmxnet3_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_1)
{
 struct vmxnet3_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);


 if (VAR_2->vmx_qs_dma.idi_size != 0) {
  FUNC_1(&VAR_2->vmx_qs_dma);
  VAR_2->vmx_qs_dma.idi_size = 0;
 }


 if (VAR_2->vmx_rxq != ((void*)0)) {
  FUNC_0(VAR_2->vmx_rxq, VAR_0);
  VAR_2->vmx_rxq = ((void*)0);
 }


 if (VAR_2->vmx_txq != ((void*)0)) {
  FUNC_0(VAR_2->vmx_txq, VAR_0);
  VAR_2->vmx_txq = ((void*)0);
 }
}
