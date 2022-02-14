
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {scalar_t__ tx_run; int * curr_tx_desc; int * curr_rx_desc; scalar_t__ rx_run; } ;


 int FUNC_0 (struct sport_device*) ;
 int FUNC_1 (struct sport_device*) ;

int FUNC_2(struct sport_device *VAR_0)
{
 if (!VAR_0->tx_run)
  return 0;
 if (VAR_0->rx_run) {

  FUNC_0(VAR_0);
 } else {

  FUNC_1(VAR_0);
  VAR_0->curr_rx_desc = ((void*)0);
  VAR_0->curr_tx_desc = ((void*)0);
 }

 VAR_0->tx_run = 0;

 return 0;
}
