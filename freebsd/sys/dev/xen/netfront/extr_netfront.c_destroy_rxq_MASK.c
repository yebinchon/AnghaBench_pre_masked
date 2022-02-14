
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sring; } ;
struct netfront_rxq {TYPE_1__ ring; int rx_refill; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct netfront_rxq *VAR_1)
{

 FUNC_0(&VAR_1->rx_refill);
 FUNC_1(VAR_1->ring.sring, VAR_0);
}
