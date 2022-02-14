
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int io_pending_count; int io_total_pending; int io_pending_lock; int io_pending_list; } ;
typedef TYPE_1__ ocs_xport_t ;
struct TYPE_10__ {int hw; TYPE_1__* xport; } ;
typedef TYPE_2__ ocs_t ;
struct TYPE_11__ {scalar_t__ io_type; TYPE_2__* ocs; scalar_t__ low_latency; int * hio; void* hw_cb; scalar_t__ cmd_ini; scalar_t__ cmd_tgt; } ;
typedef TYPE_3__ ocs_io_t ;
typedef int ocs_hw_io_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (int *) ;

int32_t
FUNC_10(ocs_io_t *VAR_1, void *VAR_2)
{
 ocs_hw_io_t *VAR_3;
 ocs_t *VAR_4 = VAR_1->ocs;
 ocs_xport_t *VAR_5 = VAR_4->xport;

 FUNC_0(VAR_1->cmd_tgt || VAR_1->cmd_ini, -1);
 FUNC_0((VAR_1->io_type != VAR_0), -1);
 VAR_1->hw_cb = VAR_2;





 if (VAR_1->hio != ((void*)0)) {
  return FUNC_8(VAR_1, VAR_1->hio);
 }






 FUNC_6(&VAR_5->io_pending_lock);
  if (!FUNC_5(&VAR_5->io_pending_list)) {




   if (VAR_1->low_latency) {
    FUNC_3(&VAR_5->io_pending_list, VAR_1);
   } else {
    FUNC_4(&VAR_5->io_pending_list, VAR_1);
   }
   FUNC_9(&VAR_5->io_pending_lock);
   FUNC_1(&VAR_5->io_pending_count, 1);
   FUNC_1(&VAR_5->io_total_pending, 1);


   FUNC_7(VAR_4);
   return 0;
  }
 FUNC_9(&VAR_5->io_pending_lock);





 VAR_3 = FUNC_2(&VAR_1->ocs->hw);
 if (VAR_3 == ((void*)0)) {


  FUNC_6(&VAR_5->io_pending_lock);
   FUNC_4(&VAR_5->io_pending_list, VAR_1);
  FUNC_9(&VAR_5->io_pending_lock);

  FUNC_1(&VAR_5->io_total_pending, 1);
  FUNC_1(&VAR_5->io_pending_count, 1);
  return 0;
 }


 return FUNC_8(VAR_1, VAR_3);
}
