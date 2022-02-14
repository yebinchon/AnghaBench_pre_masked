
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_ring_data {int rdata_paddr; } ;
struct TYPE_2__ {scalar_t__ xmit_more; } ;
struct xgbe_ring {TYPE_1__ tx; int cur; } ;
struct xgbe_channel {int dummy; } ;


 int VAR_0 ;
 struct xgbe_ring_data* FUNC_0 (struct xgbe_ring*,int ) ;
 int FUNC_1 (struct xgbe_channel*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_channel *VAR_1,
          struct xgbe_ring *VAR_2)
{
 struct xgbe_ring_data *VAR_3;



 VAR_3 = FUNC_0(VAR_2, VAR_2->cur);
 FUNC_1(VAR_1, VAR_0,
     FUNC_2(VAR_3->rdata_paddr));

 VAR_2->tx.xmit_more = 0;
}
