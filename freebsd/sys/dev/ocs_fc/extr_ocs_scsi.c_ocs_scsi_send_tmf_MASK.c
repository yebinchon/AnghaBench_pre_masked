
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ ocs_scsi_tmf_cmd_e ;
typedef int ocs_scsi_sgl_t ;
typedef int ocs_scsi_rsp_io_cb_t ;
typedef int ocs_node_t ;
struct TYPE_8__ {char* display_name; int ref; void* scsi_ini_cb_arg; int scsi_ini_cb; int send_abts; struct TYPE_8__* io_to_abort; int io_type; } ;
typedef TYPE_1__ ocs_io_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int *,TYPE_1__*,int ,scalar_t__,int *,int ,int *,int *,int ,int ,int ,int ,void*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

int32_t
FUNC_6(ocs_node_t *VAR_5, ocs_io_t *VAR_6, ocs_io_t *VAR_7, uint64_t VAR_8, ocs_scsi_tmf_cmd_e VAR_9,
 ocs_scsi_sgl_t *VAR_10, uint32_t VAR_11, uint32_t VAR_12, ocs_scsi_rsp_io_cb_t VAR_13, void *VAR_14)
{
 int32_t VAR_15;
 FUNC_0(VAR_6, -1);

 if (VAR_9 == VAR_2) {
  FUNC_0(VAR_7, -1);


  if ((FUNC_1(&VAR_7->ref) == 0)) {

   FUNC_5(VAR_6, "command no longer active\n");
   return -1;
  }



  VAR_6->io_type = VAR_1;
  VAR_6->display_name = "abort_task";
  VAR_6->io_to_abort = VAR_7;
  VAR_6->send_abts = VAR_3;
  VAR_6->scsi_ini_cb = VAR_13;
  VAR_6->scsi_ini_cb_arg = VAR_14;


  VAR_15 = FUNC_3(VAR_6, VAR_4);
  if (VAR_15) {
   FUNC_5(VAR_6, "Failed to dispatch abort\n");
   FUNC_2(&VAR_6->ref);
  }
 } else {
  VAR_6->display_name = "tmf";
  VAR_15 = FUNC_4(VAR_0, VAR_5, VAR_6, VAR_8, VAR_9, ((void*)0), 0, ((void*)0),
          VAR_10, VAR_11, VAR_12, 0, VAR_13, VAR_14);
 }

 return VAR_15;
}
