
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


typedef int uint32_t ;
typedef int ocs_t ;
struct TYPE_16__ {int * ocs; } ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_15__ {TYPE_6__* virt; } ;
struct TYPE_13__ {int timeout; scalar_t__ df_ctl; int type; int r_ctl; } ;
struct TYPE_14__ {TYPE_1__ fc_ct; } ;
struct TYPE_17__ {char* display_name; int hio_type; TYPE_3__ els_req; void* els_callback_arg; int els_callback; TYPE_2__ iparam; } ;
typedef TYPE_5__ ocs_io_t ;
struct TYPE_18__ {int port_type; scalar_t__ area_id_scope; scalar_t__ domain_id_scope; int hdr; } ;
typedef TYPE_6__ fcct_gidpt_req_t ;
typedef int els_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 () ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int,scalar_t__,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;

ocs_io_t *
FUNC_6(ocs_node_t *VAR_7, uint32_t VAR_8, uint32_t VAR_9,
 els_cb_t VAR_10, void *VAR_11)
{
 ocs_io_t *VAR_12;
 ocs_t *VAR_13 = VAR_7->ocs;
 fcct_gidpt_req_t *VAR_14;

 FUNC_1();

 VAR_12 = FUNC_2(VAR_7, sizeof(*VAR_14), VAR_3, VAR_4);
 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_13, "IO alloc failed\n");
 } else {

  VAR_12->iparam.fc_ct.r_ctl = VAR_1;
  VAR_12->iparam.fc_ct.type = VAR_2;
  VAR_12->iparam.fc_ct.df_ctl = 0;
  VAR_12->iparam.fc_ct.timeout = VAR_8;

  VAR_12->els_callback = VAR_10;
  VAR_12->els_callback_arg = VAR_11;
  VAR_12->display_name = "gidpt";

  VAR_14 = VAR_12->els_req.virt;

  FUNC_5(VAR_14, 0, sizeof(*VAR_14));
  FUNC_0(&VAR_14->hdr, VAR_0, (VAR_3 - sizeof(VAR_14->hdr)) );
  VAR_14->domain_id_scope = 0;
  VAR_14->area_id_scope = 0;
  VAR_14->port_type = 0x7f;

  VAR_12->hio_type = VAR_5;

  FUNC_3(VAR_12, VAR_6, ((void*)0));
 }
 return VAR_12;
}
