
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_fifo_size; } ;
struct xgbe_prv_data {unsigned int rx_q_count; TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,int ,int ,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_1(VAR_2->hw_feat.rx_fifo_size,
        VAR_2->rx_q_count);

 for (VAR_4 = 0; VAR_4 < VAR_2->rx_q_count; VAR_4++)
  FUNC_0(VAR_2, VAR_4, VAR_0, VAR_1, VAR_3);
}
