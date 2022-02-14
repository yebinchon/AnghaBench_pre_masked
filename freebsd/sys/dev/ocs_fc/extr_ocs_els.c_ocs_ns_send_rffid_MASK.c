
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_t ;
struct TYPE_20__ {TYPE_4__* sport; } ;
struct TYPE_22__ {TYPE_6__* sport; TYPE_5__ rnode; int * ocs; } ;
typedef TYPE_7__ ocs_node_t ;
struct TYPE_18__ {TYPE_9__* virt; } ;
struct TYPE_16__ {int timeout; scalar_t__ df_ctl; int type; int r_ctl; } ;
struct TYPE_17__ {TYPE_1__ fc_ct; } ;
struct TYPE_23__ {char* display_name; int hio_type; TYPE_3__ els_req; void* els_callback_arg; int els_callback; TYPE_2__ iparam; } ;
typedef TYPE_8__ ocs_io_t ;
struct TYPE_24__ {int type; int fc4_feature_bits; int port_id; int hdr; } ;
typedef TYPE_9__ fcct_rffid_req_t ;
typedef int els_cb_t ;
struct TYPE_21__ {scalar_t__ enable_tgt; scalar_t__ enable_ini; } ;
struct TYPE_19__ {int fc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 () ;
 TYPE_8__* FUNC_2 (TYPE_7__*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_8__*,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_9__*,int ,int) ;

ocs_io_t *
FUNC_7(ocs_node_t *VAR_10, uint32_t VAR_11, uint32_t VAR_12,
 els_cb_t VAR_13, void *VAR_14)
{
 ocs_io_t *VAR_15;
 ocs_t *VAR_16 = VAR_10->ocs;
 fcct_rffid_req_t *VAR_17;

 FUNC_1();

 VAR_15 = FUNC_2(VAR_10, sizeof(*VAR_17), VAR_6);
 if (VAR_15 == ((void*)0)) {
  FUNC_5(VAR_16, "IO alloc failed\n");
 } else {

  VAR_15->iparam.fc_ct.r_ctl = VAR_3;
  VAR_15->iparam.fc_ct.type = VAR_5;
  VAR_15->iparam.fc_ct.df_ctl = 0;
  VAR_15->iparam.fc_ct.timeout = VAR_11;

  VAR_15->els_callback = VAR_13;
  VAR_15->els_callback_arg = VAR_14;
  VAR_15->display_name = "rffid";

  VAR_17 = VAR_15->els_req.virt;

  FUNC_6(VAR_17, 0, sizeof(*VAR_17));

  FUNC_0(&VAR_17->hdr, VAR_2, (VAR_7 - sizeof(VAR_17->hdr)));
  VAR_17->port_id = FUNC_3(VAR_10->rnode.sport->fc_id);
  if (VAR_10->sport->enable_ini) {
   VAR_17->fc4_feature_bits |= VAR_0;
  }
  if (VAR_10->sport->enable_tgt) {
   VAR_17->fc4_feature_bits |= VAR_1;
  }
  VAR_17->type = VAR_4;

  VAR_15->hio_type = VAR_8;

  FUNC_4(VAR_15, VAR_9, ((void*)0));
 }
 return VAR_15;
}
