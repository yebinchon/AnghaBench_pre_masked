
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
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
typedef void* uint16_t ;
struct TYPE_17__ {TYPE_1__* sport; } ;
struct TYPE_19__ {TYPE_2__ rnode; struct TYPE_19__* ocs; } ;
typedef TYPE_4__ ocs_t ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_18__ {void* rx_id; void* ox_id; TYPE_10__* payload; scalar_t__ s_id; } ;
struct TYPE_15__ {TYPE_3__ bls_sid; } ;
struct TYPE_20__ {char* display_name; TYPE_10__ iparam; void* init_task_tag; int hio_type; int io_type; int cmd_tgt; TYPE_4__* node; TYPE_4__* ocs; } ;
typedef TYPE_6__ ocs_io_t ;
typedef int int32_t ;
struct TYPE_21__ {int high_seq_cnt; void* rx_id; void* ox_id; } ;
typedef TYPE_7__ fc_ba_acc_payload_t ;
struct TYPE_16__ {scalar_t__ fc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,char*,int ) ;
 int FUNC_2 (TYPE_10__*,int ,int) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static ocs_io_t *
FUNC_5(ocs_io_t *VAR_6, uint32_t VAR_7, uint16_t VAR_8, uint16_t VAR_9)
{
 ocs_node_t *VAR_10 = VAR_6->node;
 int32_t VAR_11;
 fc_ba_acc_payload_t *VAR_12;
 ocs_t *VAR_13;

 FUNC_0(VAR_10, ((void*)0));
 FUNC_0(VAR_10->ocs, ((void*)0));
 VAR_13 = VAR_10->ocs;

 if (VAR_10->rnode.sport->fc_id == VAR_7) {
  VAR_7 = VAR_4;
 }


 VAR_6->ocs = VAR_13;
 VAR_6->node = VAR_10;
 VAR_6->cmd_tgt = VAR_2;


 VAR_6->io_type = VAR_1;
 VAR_6->display_name = "ba_acc";
 VAR_6->hio_type = VAR_0;
 VAR_6->init_task_tag = VAR_8;


 FUNC_2(&VAR_6->iparam, 0, sizeof(VAR_6->iparam));
 VAR_6->iparam.bls_sid.s_id = VAR_7;
 VAR_6->iparam.bls_sid.ox_id = VAR_8;
 VAR_6->iparam.bls_sid.rx_id = VAR_9;

 VAR_12 = (void *)VAR_6->iparam.bls_sid.payload;

 FUNC_2(VAR_6->iparam.bls_sid.payload, 0, sizeof(VAR_6->iparam.bls_sid.payload));
 VAR_12->ox_id = VAR_6->iparam.bls_sid.ox_id;
 VAR_12->rx_id = VAR_6->iparam.bls_sid.rx_id;
 VAR_12->high_seq_cnt = VAR_3;

 if ((VAR_11 = FUNC_3(VAR_6, VAR_5))) {
  FUNC_1(VAR_13, "ocs_scsi_io_dispatch() failed: %d\n", VAR_11);
  FUNC_4(VAR_6);
  VAR_6 = ((void*)0);
 }
 return VAR_6;
}
