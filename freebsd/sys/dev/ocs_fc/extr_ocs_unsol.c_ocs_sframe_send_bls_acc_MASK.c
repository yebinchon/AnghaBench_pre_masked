
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ocs_node_t ;
struct TYPE_11__ {TYPE_2__* header; } ;
typedef TYPE_3__ ocs_hw_sequence_t ;
typedef int int32_t ;
struct TYPE_12__ {int rx_id; int ox_id; } ;
typedef TYPE_4__ fc_header_t ;
struct TYPE_13__ {void* high_seq_cnt; void* low_seq_cnt; void* rx_id; void* ox_id; int member_0; } ;
typedef TYPE_5__ fc_ba_acc_payload_t ;
typedef int acc ;
struct TYPE_9__ {TYPE_4__* virt; } ;
struct TYPE_10__ {TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*,int ,int ,int,int ,TYPE_5__*,int) ;

int32_t
FUNC_3(ocs_node_t *VAR_7, ocs_hw_sequence_t *VAR_8)
{
 fc_header_t *VAR_9 = VAR_8->header->dma.virt;
 uint16_t VAR_10 = FUNC_0(VAR_9->ox_id);
 uint16_t VAR_11 = FUNC_0(VAR_9->rx_id);
 fc_ba_acc_payload_t VAR_12 = {0};

 VAR_12.ox_id = FUNC_1(VAR_10);
 VAR_12.rx_id = FUNC_1(VAR_11);
 VAR_12.low_seq_cnt = VAR_6;
 VAR_12.high_seq_cnt = VAR_6;

 return FUNC_2(VAR_7, VAR_8,
          VAR_3,
          VAR_4,
          VAR_1 |
           VAR_2 |
           VAR_0,
          VAR_5,
          &VAR_12, sizeof(VAR_12));
}
