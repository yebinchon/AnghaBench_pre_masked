
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_softc {int * vmx_mcast; int vmx_mcast_dma; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_softc *VAR_0)
{


 if (VAR_0->vmx_mcast != ((void*)0)) {
  FUNC_0(&VAR_0->vmx_mcast_dma);
  VAR_0->vmx_mcast = ((void*)0);
 }
}
