
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_eth_io_tx_meta_desc {int len_ctrl; int word2; } ;
struct ena_com_tx_meta {int mss; int l3_hdr_len; int l3_hdr_offset; int l4_hdr_len; } ;
struct ena_com_tx_ctx {struct ena_com_tx_meta ena_meta; } ;
struct ena_com_io_sq {int phase; int cached_tx_meta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_0 (struct ena_com_io_sq*) ;
 struct ena_eth_io_tx_meta_desc* FUNC_1 (struct ena_com_io_sq*) ;
 int FUNC_2 (int *,struct ena_com_tx_meta*,int) ;
 int FUNC_3 (struct ena_eth_io_tx_meta_desc*,int,int) ;

__attribute__((used)) static inline int FUNC_4(struct ena_com_io_sq *VAR_16,
       struct ena_com_tx_ctx *VAR_17)
{
 struct ena_eth_io_tx_meta_desc *VAR_18 = ((void*)0);
 struct ena_com_tx_meta *VAR_19 = &VAR_17->ena_meta;

 VAR_18 = FUNC_1(VAR_16);
 FUNC_3(VAR_18, 0x0, sizeof(struct ena_eth_io_tx_meta_desc));

 VAR_18->len_ctrl |= VAR_8;

 VAR_18->len_ctrl |= VAR_1;


 VAR_18->word2 |= (VAR_19->mss <<
  VAR_13) &
  VAR_12;

 VAR_18->len_ctrl |= ((VAR_19->mss >> 10) <<
  VAR_11) &
  VAR_10;


 VAR_18->len_ctrl |= VAR_0;
 VAR_18->len_ctrl |= VAR_9;
 VAR_18->len_ctrl |= (VAR_16->phase <<
  VAR_15) &
  VAR_14;

 VAR_18->len_ctrl |= VAR_2;
 VAR_18->word2 |= VAR_19->l3_hdr_len &
  VAR_3;
 VAR_18->word2 |= (VAR_19->l3_hdr_offset <<
  VAR_5) &
  VAR_4;

 VAR_18->word2 |= (VAR_19->l4_hdr_len <<
  VAR_7) &
  VAR_6;

 VAR_18->len_ctrl |= VAR_9;


 FUNC_2(&VAR_16->cached_tx_meta, VAR_19,
        sizeof(struct ena_com_tx_meta));

 return FUNC_0(VAR_16);
}
