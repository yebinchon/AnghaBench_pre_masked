
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct vmxnet3_softc {int vmx_flags; TYPE_1__ vmx_rss_dma; struct vmxnet3_rss_shared* vmx_rss; int vmx_ctx; TYPE_1__ vmx_ds_dma; struct vmxnet3_driver_shared* vmx_ds; int vmx_dev; } ;
struct vmxnet3_rss_shared {int dummy; } ;
struct vmxnet3_driver_shared {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,size_t,int,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(struct vmxnet3_softc *VAR_1)
{
 device_t VAR_2;
 size_t VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->vmx_dev;


 VAR_3 = sizeof(struct vmxnet3_driver_shared);
 VAR_4 = FUNC_1(VAR_1->vmx_ctx, VAR_3, 1, &VAR_1->vmx_ds_dma, 0);
 if (VAR_4) {
  FUNC_0(VAR_2, "cannot alloc shared memory\n");
  return (VAR_4);
 }
 VAR_1->vmx_ds = (struct vmxnet3_driver_shared *) VAR_1->vmx_ds_dma.idi_vaddr;


 if (VAR_1->vmx_flags & VAR_0) {
  VAR_3 = sizeof(struct vmxnet3_rss_shared);
  VAR_4 = FUNC_1(VAR_1->vmx_ctx, VAR_3, 128,
      &VAR_1->vmx_rss_dma, 0);
  if (VAR_4) {
   FUNC_0(VAR_2, "cannot alloc rss shared memory\n");
   return (VAR_4);
  }
  VAR_1->vmx_rss =
      (struct vmxnet3_rss_shared *) VAR_1->vmx_rss_dma.idi_vaddr;
 }

 return (0);
}
