
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_t ;
struct TYPE_15__ {int * ocs; } ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_13__ {int timeout; } ;
struct TYPE_14__ {TYPE_2__ els; } ;
struct TYPE_12__ {TYPE_6__* virt; } ;
struct TYPE_16__ {int els_timeout_sec; int els_retries_remaining; char* display_name; TYPE_3__ iparam; int hio_type; TYPE_1__ els_req; void* els_callback_arg; int els_callback; } ;
typedef TYPE_5__ ocs_io_t ;
struct TYPE_17__ {int page_length; int port_list; int payload_length; int command_code; } ;
typedef TYPE_6__ fc_rscn_payload_t ;
typedef int fc_rscn_affected_port_id_page_t ;
typedef int els_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,void*,int) ;

ocs_io_t *
FUNC_6(ocs_node_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
 void *VAR_7, uint32_t VAR_8, els_cb_t VAR_9, void *VAR_10)
{
 ocs_io_t *VAR_11;
 ocs_t *VAR_12 = VAR_4->ocs;
 fc_rscn_payload_t *VAR_13;
 uint32_t VAR_14 = sizeof(fc_rscn_affected_port_id_page_t)*(VAR_8 - 1) +
  sizeof(fc_rscn_payload_t);

 FUNC_0();

 VAR_11 = FUNC_1(VAR_4, VAR_14, VAR_1);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_12, "IO alloc failed\n");
 } else {
  VAR_11->els_timeout_sec = VAR_5;
  VAR_11->els_retries_remaining = VAR_6;
  VAR_11->els_callback = VAR_9;
  VAR_11->els_callback_arg = VAR_10;
  VAR_11->display_name = "rscn";

  VAR_13 = VAR_11->els_req.virt;

  VAR_13->command_code = VAR_0;
  VAR_13->page_length = sizeof(fc_rscn_affected_port_id_page_t);
  VAR_13->payload_length = FUNC_2(sizeof(*VAR_13) +
   sizeof(fc_rscn_affected_port_id_page_t)*(VAR_8-1));

  VAR_11->hio_type = VAR_2;
  VAR_11->iparam.els.timeout = VAR_5;


  FUNC_5(VAR_13->port_list, VAR_7, VAR_8*sizeof(fc_rscn_affected_port_id_page_t));


  FUNC_3(VAR_11, VAR_3, ((void*)0));
 }
 return VAR_11;
}
