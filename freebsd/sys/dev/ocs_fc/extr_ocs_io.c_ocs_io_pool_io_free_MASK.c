
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* xport; int hw; } ;
typedef TYPE_2__ ocs_t ;
struct TYPE_11__ {int io_free; int * hio; } ;
typedef TYPE_3__ ocs_io_t ;
struct TYPE_12__ {int lock; int pool; TYPE_2__* ocs; } ;
typedef TYPE_4__ ocs_io_pool_t ;
typedef int ocs_hw_io_t ;
struct TYPE_9__ {int io_total_free; int io_active_count; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int *) ;

void
FUNC_7(ocs_io_pool_t *VAR_0, ocs_io_t *VAR_1)
{
 ocs_t *VAR_2;
 ocs_hw_io_t *VAR_3 = ((void*)0);

 FUNC_0(VAR_0);

 VAR_2 = VAR_0->ocs;

 FUNC_4(&VAR_0->lock);
  VAR_3 = VAR_1->hio;
  VAR_1->hio = ((void*)0);
  FUNC_5(VAR_0->pool, VAR_1);
 FUNC_6(&VAR_0->lock);

 if (VAR_3) {
  FUNC_3(&VAR_2->hw, VAR_3);
 }
 VAR_1->io_free = 1;
 FUNC_2(&VAR_2->xport->io_active_count, 1);
 FUNC_1(&VAR_2->xport->io_total_free, 1);
}
