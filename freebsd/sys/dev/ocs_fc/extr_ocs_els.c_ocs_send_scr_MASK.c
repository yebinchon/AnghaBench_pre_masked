
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
struct TYPE_18__ {int function; int command_code; } ;
typedef TYPE_6__ fc_scr_payload_t ;
typedef int els_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_6__*,int ,int) ;

ocs_io_t *
FUNC_5(ocs_node_t *VAR_5, uint32_t VAR_6, uint32_t VAR_7,
 els_cb_t VAR_8, void *VAR_9)
{
 ocs_io_t *VAR_10;
 ocs_t *VAR_11 = VAR_5->ocs;
 fc_scr_payload_t *VAR_12;

 FUNC_0();

 VAR_10 = FUNC_1(VAR_5, sizeof(*VAR_12), VAR_2);
 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_11, "IO alloc failed\n");
 } else {
  VAR_10->els_timeout_sec = VAR_6;
  VAR_10->els_retries_remaining = VAR_7;
  VAR_10->els_callback = VAR_8;
  VAR_10->els_callback_arg = VAR_9;
  VAR_10->display_name = "scr";

  VAR_12 = VAR_10->els_req.virt;

  FUNC_4(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->command_code = VAR_0;
  VAR_12->function = VAR_1;

  VAR_10->hio_type = VAR_3;
  VAR_10->iparam.els.timeout = VAR_6;
  FUNC_2(VAR_10, VAR_4, ((void*)0));
 }
 return VAR_10;
}
