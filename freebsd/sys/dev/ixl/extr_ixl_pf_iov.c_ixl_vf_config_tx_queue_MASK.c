
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int txq ;
struct virtchnl_txq_info {int dma_ring_addr; int queue_id; int ring_len; int dma_headwb_addr; int headwb_enabled; } ;
struct TYPE_5__ {int * qs_handle; } ;
struct TYPE_6__ {TYPE_2__ info; } ;
struct ixl_vf {int vf_num; int qtag; TYPE_3__ vsi; } ;
struct TYPE_4__ {int vf_base_id; } ;
struct i40e_hw {int pf_id; TYPE_1__ func_caps; } ;
struct ixl_pf {int dev; struct i40e_hw hw; } ;
struct i40e_hmc_obj_txq {int base; scalar_t__ rdylist_act; int rdylist; int qlen; int head_wb_addr; int head_wb_ena; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ,char*,int,int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct i40e_hmc_obj_txq*,int) ;
 int FUNC_3 (struct i40e_hw*,int) ;
 int FUNC_4 (struct i40e_hw*,int,struct i40e_hmc_obj_txq*) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct ixl_pf *VAR_6, struct ixl_vf *VAR_7,
    struct virtchnl_txq_info *VAR_8)
{
 struct i40e_hw *VAR_9;
 struct i40e_hmc_obj_txq VAR_10;
 uint16_t VAR_11, VAR_12;
 enum i40e_status_code VAR_13;
 uint32_t VAR_14;

 VAR_9 = &VAR_6->hw;
 VAR_11 = FUNC_6(&VAR_7->qtag, VAR_8->queue_id);
 VAR_12 = VAR_9->func_caps.vf_base_id + VAR_7->vf_num;
 FUNC_2(&VAR_10, sizeof(VAR_10));

 FUNC_0(VAR_6->dev, "VF %d: PF TX queue %d / VF TX queue %d (Global VF %d)\n",
     VAR_7->vf_num, VAR_11, VAR_8->queue_id, VAR_12);

 VAR_13 = FUNC_3(VAR_9, VAR_11);
 if (VAR_13 != VAR_4)
  return (VAR_0);

 VAR_10.base = VAR_8->dma_ring_addr / VAR_5;

 VAR_10.head_wb_ena = VAR_8->headwb_enabled;
 VAR_10.head_wb_addr = VAR_8->dma_headwb_addr;
 VAR_10.qlen = VAR_8->ring_len;
 VAR_10.rdylist = FUNC_8(VAR_7->vsi.info.qs_handle[0]);
 VAR_10.rdylist_act = 0;

 VAR_13 = FUNC_4(VAR_9, VAR_11, &VAR_10);
 if (VAR_13 != VAR_4)
  return (VAR_0);

 VAR_14 = VAR_3 |
     (VAR_9->pf_id << VAR_1) |
     (VAR_12 << VAR_2);
 FUNC_9(VAR_9, FUNC_1(VAR_11), VAR_14);
 FUNC_5(VAR_9);

 FUNC_7(&VAR_7->qtag, VAR_8->queue_id, 1);

 return (0);
}
