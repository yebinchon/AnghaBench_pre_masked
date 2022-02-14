
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct virtchnl_rxq_info {int databuffer_size; scalar_t__ max_pkt_size; int hdr_size; int rx_split_pos; int dma_ring_addr; int queue_id; int ring_len; scalar_t__ splithdr_enabled; } ;
struct ixl_vf {int qtag; int vf_num; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int dev; struct i40e_hw hw; } ;
struct i40e_hmc_obj_rxq {int hsplit_0; int hbuff; int dtype; int base; int dbuff; int dsize; int crcstrip; int l2tsel; scalar_t__ rxmax; int tphrdesc_ena; int tphwdesc_ena; int tphdata_ena; int tphhead_ena; int lrxqthresh; int prefena; int qlen; } ;
typedef int rxq ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct i40e_hmc_obj_rxq*,int) ;
 int FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (struct i40e_hw*,int ,struct i40e_hmc_obj_rxq*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct ixl_pf *VAR_13, struct ixl_vf *VAR_14,
    struct virtchnl_rxq_info *VAR_15)
{
 struct i40e_hw *VAR_16;
 struct i40e_hmc_obj_rxq VAR_17;
 uint16_t VAR_18;
 enum i40e_status_code VAR_19;

 VAR_16 = &VAR_13->hw;
 VAR_18 = FUNC_4(&VAR_14->qtag, VAR_15->queue_id);
 FUNC_1(&VAR_17, sizeof(VAR_17));

 FUNC_0(VAR_13->dev, "VF %d: PF RX queue %d / VF RX queue %d\n",
     VAR_14->vf_num, VAR_18, VAR_15->queue_id);

 if (VAR_15->databuffer_size > VAR_10)
  return (VAR_0);

 if (VAR_15->max_pkt_size > VAR_11 ||
     VAR_15->max_pkt_size < VAR_1)
  return (VAR_0);

 if (VAR_15->splithdr_enabled) {
  if (VAR_15->hdr_size > VAR_12)
   return (VAR_0);

  VAR_17.hsplit_0 = VAR_15->rx_split_pos &
      (VAR_3 |
       VAR_2 |
       VAR_5 |
       VAR_4);
  VAR_17.hbuff = VAR_15->hdr_size >> VAR_7;

  VAR_17.dtype = 2;
 }

 VAR_19 = FUNC_2(VAR_16, VAR_18);
 if (VAR_19 != VAR_8)
  return (VAR_0);

 VAR_17.base = VAR_15->dma_ring_addr / VAR_9;
 VAR_17.qlen = VAR_15->ring_len;

 VAR_17.dbuff = VAR_15->databuffer_size >> VAR_6;

 VAR_17.dsize = 1;
 VAR_17.crcstrip = 1;
 VAR_17.l2tsel = 1;

 VAR_17.rxmax = VAR_15->max_pkt_size;
 VAR_17.tphrdesc_ena = 1;
 VAR_17.tphwdesc_ena = 1;
 VAR_17.tphdata_ena = 1;
 VAR_17.tphhead_ena = 1;
 VAR_17.lrxqthresh = 1;
 VAR_17.prefena = 1;

 VAR_19 = FUNC_3(VAR_16, VAR_18, &VAR_17);
 if (VAR_19 != VAR_8)
  return (VAR_0);

 FUNC_5(&VAR_14->qtag, VAR_15->queue_id, 0);

 return (0);
}
