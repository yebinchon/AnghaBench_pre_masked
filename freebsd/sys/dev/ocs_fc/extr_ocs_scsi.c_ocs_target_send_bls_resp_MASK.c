
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ocs_scsi_io_cb_t ;
struct TYPE_8__ {int rx_id; int ox_id; TYPE_6__* payload; } ;
struct TYPE_11__ {TYPE_1__ bls; } ;
struct TYPE_9__ {char* display_name; void* bls_cb_arg; int bls_cb; int hio_type; int io_type; TYPE_6__ iparam; int abort_rx_id; int init_task_tag; } ;
typedef TYPE_2__ ocs_io_t ;
typedef int int32_t ;
struct TYPE_10__ {int high_seq_cnt; int rx_id; int ox_id; } ;
typedef TYPE_3__ fc_ba_acc_payload_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int32_t
FUNC_3(ocs_io_t *VAR_4, ocs_scsi_io_cb_t VAR_5, void *VAR_6)
{
 int32_t VAR_7;
 fc_ba_acc_payload_t *VAR_8;

 FUNC_0(VAR_4, -1);


 FUNC_1(&VAR_4->iparam, 0, sizeof(VAR_4->iparam));
 VAR_4->iparam.bls.ox_id = VAR_4->init_task_tag;
 VAR_4->iparam.bls.rx_id = VAR_4->abort_rx_id;

 VAR_8 = (void *)VAR_4->iparam.bls.payload;

 FUNC_1(VAR_4->iparam.bls.payload, 0, sizeof(VAR_4->iparam.bls.payload));
 VAR_8->ox_id = VAR_4->iparam.bls.ox_id;
 VAR_8->rx_id = VAR_4->iparam.bls.rx_id;
 VAR_8->high_seq_cnt = VAR_2;




 VAR_4->io_type = VAR_1;
 VAR_4->display_name = "bls_rsp";
 VAR_4->hio_type = VAR_0;
 VAR_4->bls_cb = VAR_5;
 VAR_4->bls_cb_arg = VAR_6;


 VAR_7 = FUNC_2(VAR_4, VAR_3);
 return VAR_7;
}
