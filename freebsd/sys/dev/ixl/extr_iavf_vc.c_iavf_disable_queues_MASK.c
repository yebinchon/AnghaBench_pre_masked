
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vqs ;
typedef int u8 ;
struct virtchnl_queue_select {int tx_queues; int rx_queues; int vsi_id; } ;
struct TYPE_4__ {int num_tx_queues; } ;
struct iavf_sc {TYPE_2__ vsi; TYPE_1__* vsi_res; } ;
struct TYPE_3__ {int vsi_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_sc*,int ,int *,int) ;

int
FUNC_1(struct iavf_sc *VAR_1)
{
 struct virtchnl_queue_select VAR_2;

 VAR_2.vsi_id = VAR_1->vsi_res->vsi_id;


 VAR_2.tx_queues = (1 << VAR_1->vsi.num_tx_queues) - 1;
 VAR_2.rx_queues = VAR_2.tx_queues;
 FUNC_0(VAR_1, VAR_0,
      (u8 *)&VAR_2, sizeof(VAR_2));
 return (0);
}
