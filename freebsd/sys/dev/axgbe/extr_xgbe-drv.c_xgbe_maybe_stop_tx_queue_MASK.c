
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ xmit_more; } ;
struct xgbe_ring {TYPE_1__ tx; } ;
struct TYPE_4__ {int (* tx_start_xmit ) (struct xgbe_channel*,struct xgbe_ring*) ;} ;
struct xgbe_prv_data {TYPE_2__ hw_if; } ;
struct xgbe_channel {struct xgbe_prv_data* pdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_channel*,struct xgbe_ring*) ;
 unsigned int FUNC_1 (struct xgbe_ring*) ;

__attribute__((used)) static int FUNC_2(struct xgbe_channel *VAR_1,
        struct xgbe_ring *VAR_2, unsigned int VAR_3)
{
 struct xgbe_prv_data *VAR_4 = VAR_1->pdata;

 if (VAR_3 > FUNC_1(VAR_2)) {



  if (VAR_2->tx.xmit_more)
   VAR_4->hw_if.tx_start_xmit(VAR_1, VAR_2);

  return VAR_0;
 }

 return 0;
}
