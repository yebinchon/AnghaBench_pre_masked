
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ena_eth_io_rx_cdesc_base {int status; } ;
struct ena_com_io_cq {int cur_rx_pkt_cdesc_start_idx; int cur_rx_pkt_cdesc_count; int head; int q_depth; int qid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ena_com_io_cq*) ;
 struct ena_eth_io_rx_cdesc_base* FUNC_2 (struct ena_com_io_cq*) ;
 int FUNC_3 (char*,int ,int,int) ;

__attribute__((used)) static inline u16 FUNC_4(struct ena_com_io_cq *VAR_2,
        u16 *VAR_3)
{
 struct ena_eth_io_rx_cdesc_base *VAR_4;
 u16 VAR_5 = 0, VAR_6;
 u32 VAR_7 = 0;

 do {
  VAR_4 = FUNC_2(VAR_2);
  if (!VAR_4)
   break;

  FUNC_1(VAR_2);
  VAR_5++;
  VAR_7 = (FUNC_0(VAR_4->status) & VAR_0) >>
   VAR_1;
 } while (!VAR_7);

 if (VAR_7) {
  *VAR_3 = VAR_2->cur_rx_pkt_cdesc_start_idx;
  VAR_5 += VAR_2->cur_rx_pkt_cdesc_count;

  VAR_6 = VAR_2->head & (VAR_2->q_depth - 1);

  VAR_2->cur_rx_pkt_cdesc_count = 0;
  VAR_2->cur_rx_pkt_cdesc_start_idx = VAR_6;

  FUNC_3("ena q_id: %d packets were completed. first desc idx %u descs# %d\n",
       VAR_2->qid, *VAR_3, VAR_5);
 } else {
  VAR_2->cur_rx_pkt_cdesc_count += VAR_5;
  VAR_5 = 0;
 }

 return VAR_5;
}
