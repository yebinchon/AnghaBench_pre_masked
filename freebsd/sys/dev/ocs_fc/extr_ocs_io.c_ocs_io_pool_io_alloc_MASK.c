
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* xport; } ;
typedef TYPE_2__ ocs_t ;
struct TYPE_11__ {char* display_name; scalar_t__ io_free; int * mgmt_functions; scalar_t__ els_req_free; scalar_t__ seq_init; scalar_t__ hw_tag; scalar_t__ init_task_tag; scalar_t__ tgt_task_tag; scalar_t__ sgl_count; scalar_t__ timeout; TYPE_2__* ocs; scalar_t__ transferred; int * hio; int hio_type; int io_type; } ;
typedef TYPE_3__ ocs_io_t ;
struct TYPE_12__ {int lock; int pool; TYPE_2__* ocs; } ;
typedef TYPE_4__ ocs_io_pool_t ;
struct TYPE_9__ {int io_total_alloc; int io_active_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

ocs_io_t *
FUNC_5(ocs_io_pool_t *VAR_3)
{
 ocs_io_t *VAR_4 = ((void*)0);
 ocs_t *VAR_5;

 FUNC_0(VAR_3, ((void*)0));

 VAR_5 = VAR_3->ocs;

 FUNC_2(&VAR_3->lock);
 if ((VAR_4 = FUNC_3(VAR_3->pool)) != ((void*)0)) {
  FUNC_4(&VAR_3->lock);

  VAR_4->io_type = VAR_1;
  VAR_4->hio_type = VAR_0;
  VAR_4->hio = ((void*)0);
  VAR_4->transferred = 0;
  VAR_4->ocs = VAR_5;
  VAR_4->timeout = 0;
  VAR_4->sgl_count = 0;
  VAR_4->tgt_task_tag = 0;
  VAR_4->init_task_tag = 0;
  VAR_4->hw_tag = 0;
  VAR_4->display_name = "pending";
  VAR_4->seq_init = 0;
  VAR_4->els_req_free = 0;
  VAR_4->mgmt_functions = &VAR_2;
  VAR_4->io_free = 0;
  FUNC_1(&VAR_5->xport->io_active_count, 1);
  FUNC_1(&VAR_5->xport->io_total_alloc, 1);
 } else {
  FUNC_4(&VAR_3->lock);
 }
 return VAR_4;
}
