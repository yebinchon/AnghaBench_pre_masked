
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_buffer_unavailable; } ;
struct xgbe_hw_if {int (* rx_mmc_int ) (struct xgbe_prv_data*) ;int (* tx_mmc_int ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {unsigned int channel_count; int restart_work; TYPE_1__ ext_stats; int per_channel_irq; struct xgbe_channel* channel; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {int dummy; } ;


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
 unsigned int FUNC_0 (struct xgbe_channel*,int ) ;
 int FUNC_1 (struct xgbe_channel*,int ,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int,int ,int ) ;
 unsigned int FUNC_3 (struct xgbe_prv_data*,int ) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_10 ;
 int FUNC_7 (struct xgbe_prv_data*,int) ;

__attribute__((used)) static void FUNC_8(void *VAR_11)
{
 struct xgbe_prv_data *VAR_12 = VAR_11;
 struct xgbe_hw_if *VAR_13 = &VAR_12->hw_if;
 struct xgbe_channel *VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;





 VAR_15 = FUNC_3(VAR_12, VAR_1);
 if (!VAR_15)
  return;

 for (VAR_18 = 0; VAR_18 < VAR_12->channel_count; VAR_18++) {
  if (!(VAR_15 & (1 << VAR_18)))
   continue;

  VAR_14 = VAR_12->channel + VAR_18;

  VAR_16 = FUNC_0(VAR_14, VAR_0);





  if (!VAR_12->per_channel_irq &&
      (FUNC_2(VAR_16, VAR_0, VAR_9) ||
       FUNC_2(VAR_16, VAR_0, VAR_8))) {
   FUNC_7(VAR_12, 16);
  }

  if (FUNC_2(VAR_16, VAR_0, VAR_7))
   VAR_12->ext_stats.rx_buffer_unavailable++;


  if (FUNC_2(VAR_16, VAR_0, VAR_2))
   FUNC_6(VAR_10,
       &VAR_12->restart_work);


  FUNC_1(VAR_14, VAR_0, VAR_16);
 }

 if (FUNC_2(VAR_15, VAR_1, VAR_3)) {
  VAR_17 = FUNC_3(VAR_12, VAR_4);

  if (FUNC_2(VAR_17, VAR_4, VAR_6))
   VAR_13->tx_mmc_int(VAR_12);

  if (FUNC_2(VAR_17, VAR_4, VAR_5))
   VAR_13->rx_mmc_int(VAR_12);
 }
}
