
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int io_pending_lock; int io_total_pending; int io_pending_count; int io_pending_list; } ;
typedef TYPE_1__ ocs_xport_t ;
struct TYPE_9__ {TYPE_1__* xport; } ;
typedef TYPE_2__ ocs_t ;
struct TYPE_10__ {scalar_t__ io_type; void* hw_cb; TYPE_2__* ocs; } ;
typedef TYPE_3__ ocs_io_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;

int32_t
FUNC_8(ocs_io_t *VAR_1, void *VAR_2)
{
 ocs_t *VAR_3 = VAR_1->ocs;
 ocs_xport_t *VAR_4 = VAR_3->xport;

 FUNC_0((VAR_1->io_type == VAR_0), -1);
 VAR_1->hw_cb = VAR_2;






 FUNC_4(&VAR_4->io_pending_lock);
  if (!FUNC_3(&VAR_4->io_pending_list)) {
   FUNC_2(&VAR_4->io_pending_list, VAR_1);
   FUNC_7(&VAR_4->io_pending_lock);
   FUNC_1(&VAR_4->io_pending_count, 1);
   FUNC_1(&VAR_4->io_total_pending, 1);


   FUNC_5(VAR_3);
   return 0;
  }
 FUNC_7(&VAR_4->io_pending_lock);


 return FUNC_6(VAR_1);

}
