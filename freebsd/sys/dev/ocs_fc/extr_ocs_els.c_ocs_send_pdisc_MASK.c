
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int ocs_t ;
struct TYPE_18__ {TYPE_2__* sport; int * ocs; } ;
typedef TYPE_5__ ocs_node_t ;
struct TYPE_16__ {void* timeout; } ;
struct TYPE_17__ {TYPE_3__ els; } ;
struct TYPE_14__ {TYPE_7__* virt; } ;
struct TYPE_19__ {char* display_name; TYPE_4__ iparam; int hio_type; TYPE_1__ els_req; void* els_callback_arg; int els_callback; void* els_retries_remaining; void* els_timeout_sec; } ;
typedef TYPE_6__ ocs_io_t ;
struct TYPE_20__ {scalar_t__ resv1; int command_code; } ;
typedef TYPE_7__ fc_plogi_payload_t ;
typedef int els_cb_t ;
struct TYPE_15__ {int service_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int,int ) ;
 int FUNC_2 (TYPE_6__*,int ,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_7__*,int ,int) ;

ocs_io_t *
FUNC_5(ocs_node_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
 els_cb_t VAR_7, void *VAR_8)
{
 ocs_io_t *VAR_9;
 ocs_t *VAR_10 = VAR_4->ocs;
 fc_plogi_payload_t *VAR_11;

 FUNC_0();

 VAR_9 = FUNC_1(VAR_4, sizeof(*VAR_11), VAR_1);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_10, "IO alloc failed\n");
 } else {
  VAR_9->els_timeout_sec = VAR_5;
  VAR_9->els_retries_remaining = VAR_6;
  VAR_9->els_callback = VAR_7;
  VAR_9->els_callback_arg = VAR_8;
  VAR_9->display_name = "pdisc";

  VAR_11 = VAR_9->els_req.virt;

  FUNC_4(VAR_11, VAR_4->sport->service_params, sizeof(*VAR_11));

  VAR_11->command_code = VAR_0;
  VAR_11->resv1 = 0;

  VAR_9->hio_type = VAR_2;
  VAR_9->iparam.els.timeout = VAR_5;
  FUNC_2(VAR_9, VAR_3, ((void*)0));
 }
 return VAR_9;
}
