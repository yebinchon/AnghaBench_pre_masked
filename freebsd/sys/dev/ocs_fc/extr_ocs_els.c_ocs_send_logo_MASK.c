
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef void* uint32_t ;
typedef int ocs_t ;
struct TYPE_21__ {TYPE_3__* sport; } ;
struct TYPE_24__ {TYPE_4__ rnode; TYPE_1__* sport; int * ocs; } ;
typedef TYPE_7__ ocs_node_t ;
struct TYPE_22__ {void* timeout; } ;
struct TYPE_23__ {TYPE_5__ els; } ;
struct TYPE_19__ {TYPE_10__* virt; } ;
struct TYPE_25__ {char* display_name; TYPE_6__ iparam; int hio_type; TYPE_2__ els_req; void* els_callback_arg; int els_callback; void* els_retries_remaining; void* els_timeout_sec; } ;
typedef TYPE_8__ ocs_io_t ;
struct TYPE_26__ {int port_name_lo; int port_name_hi; } ;
typedef TYPE_9__ fc_plogi_payload_t ;
struct TYPE_17__ {int port_name_lo; int port_name_hi; int port_id; scalar_t__ resv1; int command_code; } ;
typedef TYPE_10__ fc_logo_payload_t ;
typedef int els_cb_t ;
struct TYPE_20__ {int fc_id; } ;
struct TYPE_18__ {scalar_t__ service_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_8__* FUNC_2 (TYPE_7__*,int,int ) ;
 int FUNC_3 (TYPE_8__*,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_10__*,int ,int) ;

ocs_io_t *
FUNC_6(ocs_node_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
 els_cb_t VAR_7, void *VAR_8)
{
 ocs_io_t *VAR_9;
 ocs_t *VAR_10;
 fc_logo_payload_t *VAR_11;
 fc_plogi_payload_t *VAR_12;


 VAR_10 = VAR_4->ocs;

 FUNC_1();

 VAR_12 = (fc_plogi_payload_t*) VAR_4->sport->service_params;

 VAR_9 = FUNC_2(VAR_4, sizeof(*VAR_11), VAR_1);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_10, "IO alloc failed\n");
 } else {
  VAR_9->els_timeout_sec = VAR_5;
  VAR_9->els_retries_remaining = VAR_6;
  VAR_9->els_callback = VAR_7;
  VAR_9->els_callback_arg = VAR_8;
  VAR_9->display_name = "logo";



  VAR_11 = VAR_9->els_req.virt;

  FUNC_5(VAR_11, 0, sizeof(*VAR_11));
  VAR_11->command_code = VAR_0;
  VAR_11->resv1 = 0;
  VAR_11->port_id = FUNC_0(VAR_4->rnode.sport->fc_id);
  VAR_11->port_name_hi = VAR_12->port_name_hi;
  VAR_11->port_name_lo = VAR_12->port_name_lo;

  VAR_9->hio_type = VAR_2;
  VAR_9->iparam.els.timeout = VAR_5;
  FUNC_3(VAR_9, VAR_3, ((void*)0));
 }
 return VAR_9;
}
