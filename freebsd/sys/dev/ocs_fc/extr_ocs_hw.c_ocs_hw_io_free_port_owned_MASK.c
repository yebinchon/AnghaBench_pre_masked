
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int io_lock; int io_port_dnrx; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_8__ {int ref; scalar_t__ auto_xfer_rdy_dnrx; TYPE_1__* hw; } ;
typedef TYPE_2__ ocs_hw_io_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void (*) (void*),TYPE_2__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 ocs_hw_io_t *VAR_1 = (ocs_hw_io_t *)VAR_0;
 ocs_hw_t *VAR_2 = VAR_1->hw;





 if (VAR_1->auto_xfer_rdy_dnrx) {
  FUNC_2(&VAR_2->io_lock);

   FUNC_3(&VAR_1->ref, FUNC_5, VAR_1);
   FUNC_1(&VAR_2->io_port_dnrx, VAR_1);
  FUNC_4(&VAR_2->io_lock);
 }


 FUNC_0(VAR_2, VAR_1);
}
