
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_features {int dma_width; int hash_table_size; void* tc_cnt; void* tx_ch_cnt; void* rx_ch_cnt; void* tx_q_cnt; void* rx_q_cnt; void* aux_snap_num; void* pps_out_num; void* l3l4_filter_num; void* rss; void* dma_debug; void* tso; void* sph; void* dcb; void* adv_ts_hi; void* tx_fifo_size; void* rx_fifo_size; void* sa_vlan_ins; void* ts_src; void* addn_mac; void* rx_coe; void* tx_coe; void* eee; void* ts; void* aoe; void* mmc; void* mgk; void* rwk; void* sma; void* vlhash; void* gmii; void* version; } ;
struct xgbe_prv_data {struct xgbe_hw_features hw_feat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 void* FUNC_1 (unsigned int,int ,int ) ;
 void* FUNC_2 (struct xgbe_prv_data*,int ) ;
 int FUNC_3 (struct xgbe_hw_features*,int ,int) ;

void FUNC_4(struct xgbe_prv_data *VAR_36)
{
 unsigned int VAR_37, VAR_38, VAR_39;
 struct xgbe_hw_features *VAR_40 = &VAR_36->hw_feat;

 FUNC_0("-->xgbe_get_all_hw_features\n");

 VAR_37 = FUNC_2(VAR_36, VAR_11);
 VAR_38 = FUNC_2(VAR_36, VAR_12);
 VAR_39 = FUNC_2(VAR_36, VAR_13);

 FUNC_3(VAR_40, 0, sizeof(*VAR_40));

 VAR_40->version = FUNC_2(VAR_36, VAR_14);


 VAR_40->gmii = FUNC_1(VAR_37, VAR_11, VAR_8);
 VAR_40->vlhash = FUNC_1(VAR_37, VAR_11, VAR_35);
 VAR_40->sma = FUNC_1(VAR_37, VAR_11, VAR_26);
 VAR_40->rwk = FUNC_1(VAR_37, VAR_11, VAR_20);
 VAR_40->mgk = FUNC_1(VAR_37, VAR_11, VAR_15);
 VAR_40->mmc = FUNC_1(VAR_37, VAR_11, VAR_16);
 VAR_40->aoe = FUNC_1(VAR_37, VAR_11, VAR_3);
 VAR_40->ts = FUNC_1(VAR_37, VAR_11, VAR_29);
 VAR_40->eee = FUNC_1(VAR_37, VAR_11, VAR_7);
 VAR_40->tx_coe = FUNC_1(VAR_37, VAR_11, VAR_32);
 VAR_40->rx_coe = FUNC_1(VAR_37, VAR_11, VAR_22);
 VAR_40->addn_mac = FUNC_1(VAR_37, VAR_11,
           VAR_0);
 VAR_40->ts_src = FUNC_1(VAR_37, VAR_11, VAR_30);
 VAR_40->sa_vlan_ins = FUNC_1(VAR_37, VAR_11, VAR_25);


 VAR_40->rx_fifo_size = FUNC_1(VAR_38, VAR_12,
      VAR_23);
 VAR_40->tx_fifo_size = FUNC_1(VAR_38, VAR_12,
      VAR_33);
 VAR_40->adv_ts_hi = FUNC_1(VAR_38, VAR_12, VAR_2);
 VAR_40->dma_width = FUNC_1(VAR_38, VAR_12, VAR_1);
 VAR_40->dcb = FUNC_1(VAR_38, VAR_12, VAR_6);
 VAR_40->sph = FUNC_1(VAR_38, VAR_12, VAR_27);
 VAR_40->tso = FUNC_1(VAR_38, VAR_12, VAR_28);
 VAR_40->dma_debug = FUNC_1(VAR_38, VAR_12, VAR_5);
 VAR_40->rss = FUNC_1(VAR_38, VAR_12, VAR_19);
 VAR_40->tc_cnt = FUNC_1(VAR_38, VAR_12, VAR_17);
 VAR_40->hash_table_size = FUNC_1(VAR_38, VAR_12,
        VAR_9);
 VAR_40->l3l4_filter_num = FUNC_1(VAR_38, VAR_12,
        VAR_10);


 VAR_40->rx_q_cnt = FUNC_1(VAR_39, VAR_13, VAR_24);
 VAR_40->tx_q_cnt = FUNC_1(VAR_39, VAR_13, VAR_34);
 VAR_40->rx_ch_cnt = FUNC_1(VAR_39, VAR_13, VAR_21);
 VAR_40->tx_ch_cnt = FUNC_1(VAR_39, VAR_13, VAR_31);
 VAR_40->pps_out_num = FUNC_1(VAR_39, VAR_13, VAR_18);
 VAR_40->aux_snap_num = FUNC_1(VAR_39, VAR_13, VAR_4);


 switch (VAR_40->hash_table_size) {
 case 0:
  break;
 case 1:
  VAR_40->hash_table_size = 64;
  break;
 case 2:
  VAR_40->hash_table_size = 128;
  break;
 case 3:
  VAR_40->hash_table_size = 256;
  break;
 }


 switch (VAR_40->dma_width) {
 case 0:
  VAR_40->dma_width = 32;
  break;
 case 1:
  VAR_40->dma_width = 40;
  break;
 case 2:
  VAR_40->dma_width = 48;
  break;
 default:
  VAR_40->dma_width = 32;
 }




 VAR_40->rx_q_cnt++;
 VAR_40->tx_q_cnt++;
 VAR_40->rx_ch_cnt++;
 VAR_40->tx_ch_cnt++;
 VAR_40->tc_cnt++;

 FUNC_0("<--xgbe_get_all_hw_features\n");
}
