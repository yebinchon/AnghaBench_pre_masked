
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int ocs_t ;
struct TYPE_16__ {int * ocs; } ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_14__ {void* timeout; } ;
struct TYPE_15__ {TYPE_2__ els; } ;
struct TYPE_13__ {TYPE_6__* virt; } ;
struct TYPE_17__ {char* display_name; TYPE_3__ iparam; int hio_type; TYPE_1__ els_req; void* els_callback_arg; int els_callback; void* els_retries_remaining; void* els_timeout_sec; } ;
typedef TYPE_5__ ocs_io_t ;
struct TYPE_18__ {int page_length; scalar_t__ type_ext; int type; int payload_length; int command_code; } ;
typedef TYPE_6__ fc_prlo_payload_t ;
typedef int els_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;

ocs_io_t *
FUNC_6(ocs_node_t *VAR_5, uint32_t VAR_6, uint32_t VAR_7,
 els_cb_t VAR_8, void *VAR_9)
{
 ocs_t *VAR_10 = VAR_5->ocs;
 ocs_io_t *VAR_11;
 fc_prlo_payload_t *VAR_12;

 FUNC_0();

 VAR_11 = FUNC_1(VAR_5, sizeof(*VAR_12), VAR_2);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_10, "IO alloc failed\n");
 } else {
  VAR_11->els_timeout_sec = VAR_6;
  VAR_11->els_retries_remaining = VAR_7;
  VAR_11->els_callback = VAR_8;
  VAR_11->els_callback_arg = VAR_9;
  VAR_11->display_name = "prlo";


  VAR_12 = VAR_11->els_req.virt;

  FUNC_5(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->command_code = VAR_0;
  VAR_12->page_length = 16;
  VAR_12->payload_length = FUNC_2(sizeof(fc_prlo_payload_t));
  VAR_12->type = VAR_1;
  VAR_12->type_ext = 0;

  VAR_11->hio_type = VAR_3;
  VAR_11->iparam.els.timeout = VAR_6;
  FUNC_3(VAR_11, VAR_4, ((void*)0));
 }
 return VAR_11;
}
