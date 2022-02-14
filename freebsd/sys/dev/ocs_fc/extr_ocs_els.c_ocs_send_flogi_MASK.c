
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_19__ {int display_name; int service_params; struct TYPE_19__* sport; struct TYPE_19__* ocs; } ;
typedef TYPE_4__ ocs_t ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_17__ {void* timeout; } ;
struct TYPE_18__ {TYPE_2__ els; } ;
struct TYPE_16__ {TYPE_7__* virt; } ;
struct TYPE_20__ {char* display_name; TYPE_3__ iparam; int hio_type; TYPE_1__ els_req; void* els_callback_arg; int els_callback; void* els_retries_remaining; void* els_timeout_sec; } ;
typedef TYPE_6__ ocs_io_t ;
struct TYPE_21__ {int * common_service_parameters; scalar_t__ resv1; int command_code; } ;
typedef TYPE_7__ fc_plogi_payload_t ;
typedef int els_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int ,char*,int ,int *,int *) ;
 TYPE_6__* FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (TYPE_6__*,int ,int *) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_7__*,int ,int) ;

ocs_io_t *
FUNC_8(ocs_node_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
 els_cb_t VAR_7, void *VAR_8)
{
 ocs_io_t *VAR_9;
 ocs_t *VAR_10;
 fc_plogi_payload_t *VAR_11;

 FUNC_1(VAR_4, ((void*)0));
 FUNC_1(VAR_4->ocs, ((void*)0));
 FUNC_1(VAR_4->sport, ((void*)0));
 VAR_10 = VAR_4->ocs;

 FUNC_0();

 VAR_9 = FUNC_3(VAR_4, sizeof(*VAR_11), VAR_1);
 if (VAR_9 == ((void*)0)) {
  FUNC_6(VAR_10, "IO alloc failed\n");
 } else {
  VAR_9->els_timeout_sec = VAR_5;
  VAR_9->els_retries_remaining = VAR_6;
  VAR_9->els_callback = VAR_7;
  VAR_9->els_callback_arg = VAR_8;
  VAR_9->display_name = "flogi";


  VAR_11 = VAR_9->els_req.virt;

  FUNC_7(VAR_11, VAR_4->sport->service_params, sizeof(*VAR_11));
  VAR_11->command_code = VAR_0;
  VAR_11->resv1 = 0;


  VAR_11->common_service_parameters[1] |= FUNC_4(1U << 23);

  FUNC_2(VAR_4->display_name, "flogi send req", 0, ((void*)0), VAR_11->common_service_parameters);

  VAR_9->hio_type = VAR_2;
  VAR_9->iparam.els.timeout = VAR_5;
  FUNC_5(VAR_9, VAR_3, ((void*)0));
 }
 return VAR_9;
}
