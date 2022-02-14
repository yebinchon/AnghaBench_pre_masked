
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_softc {int * vmx_ds; int vmx_ds_dma; int * vmx_rss; int vmx_rss_dma; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_softc *VAR_0)
{


 if (VAR_0->vmx_rss != ((void*)0)) {
  FUNC_0(&VAR_0->vmx_rss_dma);
  VAR_0->vmx_rss = ((void*)0);
 }


 if (VAR_0->vmx_ds != ((void*)0)) {
  FUNC_0(&VAR_0->vmx_ds_dma);
  VAR_0->vmx_ds = ((void*)0);
 }
}
