
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atm_vcc {TYPE_1__* stats; } ;
struct TYPE_4__ {scalar_t__ sk_rcvbuf; int sk_rmem_alloc; } ;
struct TYPE_3__ {int rx_drop; } ;


 int FUNC_0 (struct atm_vcc*,int) ;
 int FUNC_1 (struct atm_vcc*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (struct atm_vcc*) ;

int FUNC_5(struct atm_vcc *VAR_0,int VAR_1)
{
 FUNC_0(VAR_0,VAR_1);
 if (FUNC_3(&FUNC_4(VAR_0)->sk_rmem_alloc) <= FUNC_4(VAR_0)->sk_rcvbuf)
  return 1;
 FUNC_1(VAR_0,VAR_1);
 FUNC_2(&VAR_0->stats->rx_drop);
 return 0;
}
