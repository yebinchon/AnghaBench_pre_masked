
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; struct xgbe_channel* channel; } ;
struct xgbe_channel {int tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xgbe_channel*,int ,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_2 (struct xgbe_prv_data*,struct xgbe_channel*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_4)
{
 struct xgbe_channel *VAR_5;
 unsigned int VAR_6;


 VAR_5 = VAR_4->channel;
 for (VAR_6 = 0; VAR_6 < VAR_4->channel_count; VAR_6++, VAR_5++) {
  if (!VAR_5->tx_ring)
   break;

  FUNC_2(VAR_4, VAR_5);
 }


 FUNC_1(VAR_4, VAR_1, VAR_3, 0);


 VAR_5 = VAR_4->channel;
 for (VAR_6 = 0; VAR_6 < VAR_4->channel_count; VAR_6++, VAR_5++) {
  if (!VAR_5->tx_ring)
   break;

  FUNC_0(VAR_5, VAR_0, VAR_2, 0);
 }
}
