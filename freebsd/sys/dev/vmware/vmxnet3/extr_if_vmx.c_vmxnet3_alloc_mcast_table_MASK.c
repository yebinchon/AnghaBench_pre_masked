
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idi_vaddr; } ;
struct vmxnet3_softc {TYPE_1__ vmx_mcast_dma; int vmx_mcast; int vmx_dev; int vmx_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(struct vmxnet3_softc *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_2->vmx_ctx,
     VAR_1 * VAR_0, 32, &VAR_2->vmx_mcast_dma, 0);
 if (VAR_3)
  FUNC_0(VAR_2->vmx_dev, "unable to alloc multicast table\n");
 else
  VAR_2->vmx_mcast = VAR_2->vmx_mcast_dma.idi_vaddr;

 return (VAR_3);
}
