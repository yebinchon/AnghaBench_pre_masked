
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int xr_num; int vmem; struct xdma_request* xr_mem; } ;
typedef TYPE_2__ xdma_channel_t ;
typedef scalar_t__ vm_size_t ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ paddr; scalar_t__ vaddr; } ;
struct xdma_request {TYPE_1__ buf; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(xdma_channel_t *VAR_0)
{
 struct xdma_request *VAR_1;
 vm_size_t VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->xr_num; VAR_3++) {
  VAR_1 = &VAR_0->xr_mem[VAR_3];
  VAR_2 = VAR_1->buf.size;
  if (VAR_1->buf.vaddr) {
   FUNC_1(VAR_1->buf.vaddr, VAR_2);
   FUNC_0(VAR_1->buf.vaddr, VAR_2);
   VAR_1->buf.vaddr = 0;
  }
  if (VAR_1->buf.paddr) {
   FUNC_2(VAR_0->vmem, VAR_1->buf.paddr, VAR_2);
   VAR_1->buf.paddr = 0;
  }
  VAR_1->buf.size = 0;
 }
}
