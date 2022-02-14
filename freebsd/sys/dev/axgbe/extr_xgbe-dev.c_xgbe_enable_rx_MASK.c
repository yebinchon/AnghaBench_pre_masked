
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; unsigned int rx_q_count; struct xgbe_channel* channel; } ;
struct xgbe_channel {int rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct xgbe_channel*,int ,int ,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_8)
{
 struct xgbe_channel *VAR_9;
 unsigned int VAR_10, VAR_11;


 VAR_9 = VAR_8->channel;
 for (VAR_11 = 0; VAR_11 < VAR_8->channel_count; VAR_11++, VAR_9++) {
  if (!VAR_9->rx_ring)
   break;

  FUNC_0(VAR_9, VAR_3, VAR_7, 1);
 }


 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8->rx_q_count; VAR_11++)
  VAR_10 |= (0x02 << (VAR_11 << 1));
 FUNC_1(VAR_8, VAR_5, VAR_10);


 FUNC_2(VAR_8, VAR_4, VAR_2, 1);
 FUNC_2(VAR_8, VAR_4, VAR_1, 1);
 FUNC_2(VAR_8, VAR_4, VAR_0, 1);
 FUNC_2(VAR_8, VAR_4, VAR_6, 1);
}
