
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; struct xgbe_channel* channel; } ;
struct xgbe_channel {int rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xgbe_channel*,int ,int ,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_5)
{
 struct xgbe_channel *VAR_6;
 unsigned int VAR_7;

 VAR_6 = VAR_5->channel;
 for (VAR_7 = 0; VAR_7 < VAR_5->channel_count; VAR_7++, VAR_6++) {
  if (!VAR_6->rx_ring)
   break;

  FUNC_0(VAR_6, VAR_0, VAR_3, 1);
 }

 FUNC_1(VAR_5, VAR_2, VAR_1, VAR_4);
}
