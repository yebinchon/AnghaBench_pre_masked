
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_t ;
struct TYPE_19__ {TYPE_4__* sport; } ;
struct TYPE_20__ {TYPE_5__ rnode; int * ocs; } ;
typedef TYPE_6__ ocs_node_t ;
struct TYPE_17__ {TYPE_8__* virt; } ;
struct TYPE_15__ {int timeout; scalar_t__ df_ctl; int type; int r_ctl; } ;
struct TYPE_16__ {TYPE_1__ fc_ct; } ;
struct TYPE_21__ {char* display_name; int hio_type; TYPE_3__ els_req; void* els_callback_arg; int els_callback; TYPE_2__ iparam; } ;
typedef TYPE_7__ ocs_io_t ;
struct TYPE_22__ {void** fc4_types; void* port_id; int hdr; } ;
typedef TYPE_8__ fcct_rftid_req_t ;
typedef int els_cb_t ;
struct TYPE_18__ {int fc_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 () ;
 TYPE_7__* FUNC_4 (TYPE_6__*,int,int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_7__*,int ,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (TYPE_8__*,int ,int) ;

ocs_io_t *
FUNC_9(ocs_node_t *VAR_8, uint32_t VAR_9, uint32_t VAR_10,
 els_cb_t VAR_11, void *VAR_12)
{
 ocs_io_t *VAR_13;
 ocs_t *VAR_14 = VAR_8->ocs;
 fcct_rftid_req_t *VAR_15;

 FUNC_3();

 VAR_13 = FUNC_4(VAR_8, sizeof(*VAR_15), VAR_4);
 if (VAR_13 == ((void*)0)) {
  FUNC_7(VAR_14, "IO alloc failed\n");
 } else {

  VAR_13->iparam.fc_ct.r_ctl = VAR_1;
  VAR_13->iparam.fc_ct.type = VAR_3;
  VAR_13->iparam.fc_ct.df_ctl = 0;
  VAR_13->iparam.fc_ct.timeout = VAR_9;

  VAR_13->els_callback = VAR_11;
  VAR_13->els_callback_arg = VAR_12;
  VAR_13->display_name = "rftid";

  VAR_15 = VAR_13->els_req.virt;

  FUNC_8(VAR_15, 0, sizeof(*VAR_15));
  FUNC_2(&VAR_15->hdr, VAR_0, (VAR_5 - sizeof(VAR_15->hdr)));
  VAR_15->port_id = FUNC_5(VAR_8->rnode.sport->fc_id);
  VAR_15->fc4_types[FUNC_1(VAR_2)] = FUNC_5(1 << FUNC_0(VAR_2));

  VAR_13->hio_type = VAR_6;

  FUNC_6(VAR_13, VAR_7, ((void*)0));
 }
 return VAR_13;
}
