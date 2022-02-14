
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int * auto_xfer_rdy_buf_pool; int io_lock; int os; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_6__ {int dma; } ;
struct TYPE_8__ {TYPE_1__ payload; } ;
typedef TYPE_3__ ocs_hw_auto_xfer_rdy_buffer_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ocs_hw_t *VAR_0)
{
 ocs_hw_auto_xfer_rdy_buffer_t *VAR_1;
 uint32_t VAR_2;

 if (VAR_0->auto_xfer_rdy_buf_pool != ((void*)0)) {
  FUNC_1(&VAR_0->io_lock);
   for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_0->auto_xfer_rdy_buf_pool); VAR_2++) {
    VAR_1 = FUNC_4(VAR_0->auto_xfer_rdy_buf_pool, VAR_2);
    if (VAR_1 != ((void*)0)) {
     FUNC_0(VAR_0->os, &VAR_1->payload.dma);
    }
   }
  FUNC_5(&VAR_0->io_lock);

  FUNC_2(VAR_0->auto_xfer_rdy_buf_pool);
  VAR_0->auto_xfer_rdy_buf_pool = ((void*)0);
 }
}
