
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int io_alloc_failed_count; } ;
typedef TYPE_1__ ocs_xport_t ;
struct TYPE_11__ {char* display_name; int ref; void* abort_cb_arg; int abort_cb; int send_abts; struct TYPE_11__* io_to_abort; int io_type; struct TYPE_11__* node; int cmd_tgt; int * hio; TYPE_1__* xport; struct TYPE_11__* ocs; } ;
typedef TYPE_2__ ocs_t ;
typedef int ocs_scsi_io_cb_t ;
typedef TYPE_2__ ocs_io_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*,char*) ;

int32_t
FUNC_7(ocs_io_t *VAR_4, ocs_scsi_io_cb_t VAR_5, void *VAR_6)
{
 ocs_t *VAR_7;
 ocs_xport_t *VAR_8;
 int32_t VAR_9;

 ocs_io_t *VAR_10 = ((void*)0);
 FUNC_0(VAR_4, -1);
 FUNC_0(VAR_4->node, -1);
 FUNC_0(VAR_4->ocs, -1);

 VAR_7 = VAR_4->ocs;
 VAR_8 = VAR_7->xport;


 if ((FUNC_3(&VAR_4->ref) == 0)) {

  FUNC_6(VAR_4, "command no longer active\n");
  return -1;
 }






 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(&VAR_8->io_alloc_failed_count, 1);
  FUNC_4(&VAR_4->ref);
  return -1;
 }


 FUNC_0(VAR_10->hio == ((void*)0), -1);


 VAR_10->cmd_tgt = VAR_2;
 VAR_10->node = VAR_4->node;


 VAR_10->io_type = VAR_1;
 VAR_10->display_name = "tgt_abort";
 VAR_10->io_to_abort = VAR_4;
 VAR_10->send_abts = VAR_0;
 VAR_10->abort_cb = VAR_5;
 VAR_10->abort_cb_arg = VAR_6;


 VAR_9 = FUNC_5(VAR_10, VAR_3);
 if (VAR_9) {
  FUNC_4(&VAR_4->ref);
 }
 return VAR_9;
}
