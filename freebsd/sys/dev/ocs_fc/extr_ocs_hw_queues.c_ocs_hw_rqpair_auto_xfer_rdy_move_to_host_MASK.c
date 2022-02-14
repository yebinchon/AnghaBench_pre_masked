
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int io_lock; int auto_xfer_rdy_buf_pool; int io_port_dnrx; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_10__ {int * axr_buf; scalar_t__ auto_xfer_rdy_dnrx; int dnrx_link; } ;
typedef TYPE_2__ ocs_hw_io_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(ocs_hw_t *VAR_0, ocs_hw_io_t *VAR_1)
{
 if (VAR_1->axr_buf != ((void*)0)) {
  FUNC_4(&VAR_0->io_lock);

   if (FUNC_2(&VAR_1->dnrx_link)) {
    FUNC_3(&VAR_0->io_port_dnrx, VAR_1);
    VAR_1->auto_xfer_rdy_dnrx = 0;


    FUNC_0(VAR_0, VAR_1);
   }

   FUNC_5(VAR_0->auto_xfer_rdy_buf_pool, VAR_1->axr_buf);
   VAR_1->axr_buf = ((void*)0);
  FUNC_6(&VAR_0->io_lock);

  FUNC_1(VAR_0);
 }
 return;
}
