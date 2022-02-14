
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int rx_q_count; unsigned int channel_count; struct xgbe_channel* channel; } ;
struct xgbe_channel {int rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct xgbe_channel*,int ,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_3 (struct xgbe_prv_data*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_8)
{
 struct xgbe_channel *VAR_9;
 unsigned int VAR_10;


 FUNC_2(VAR_8, VAR_4, VAR_2, 0);
 FUNC_2(VAR_8, VAR_4, VAR_1, 0);
 FUNC_2(VAR_8, VAR_4, VAR_0, 0);
 FUNC_2(VAR_8, VAR_4, VAR_6, 0);


 for (VAR_10 = 0; VAR_10 < VAR_8->rx_q_count; VAR_10++)
  FUNC_3(VAR_8, VAR_10);


 FUNC_1(VAR_8, VAR_5, 0);


 VAR_9 = VAR_8->channel;
 for (VAR_10 = 0; VAR_10 < VAR_8->channel_count; VAR_10++, VAR_9++) {
  if (!VAR_9->rx_ring)
   break;

  FUNC_0(VAR_9, VAR_3, VAR_7, 0);
 }
}
