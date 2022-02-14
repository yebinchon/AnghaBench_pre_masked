
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; unsigned int tx_q_count; struct xgbe_channel* channel; } ;
struct xgbe_channel {int tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct xgbe_channel*,int ,int ,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_2 (struct xgbe_prv_data*,unsigned int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_7)
{
 struct xgbe_channel *VAR_8;
 unsigned int VAR_9;


 VAR_8 = VAR_7->channel;
 for (VAR_9 = 0; VAR_9 < VAR_7->channel_count; VAR_9++, VAR_8++) {
  if (!VAR_8->tx_ring)
   break;

  FUNC_0(VAR_8, VAR_0, VAR_4, 1);
 }


 for (VAR_9 = 0; VAR_9 < VAR_7->tx_q_count; VAR_9++)
  FUNC_2(VAR_7, VAR_9, VAR_3, VAR_6,
           VAR_2);


 FUNC_1(VAR_7, VAR_1, VAR_5, 1);
}
