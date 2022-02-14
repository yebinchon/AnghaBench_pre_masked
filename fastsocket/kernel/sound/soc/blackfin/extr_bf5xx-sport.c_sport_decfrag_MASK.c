
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {int tx_frags; int rx_frags; } ;



void FUNC_0(struct sport_device *VAR_0, int *VAR_1, int VAR_2)
{
 --(*VAR_1);
 if (VAR_2 == 1 && *VAR_1 == 0)
  *VAR_1 = VAR_0->tx_frags;

 if (VAR_2 == 0 && *VAR_1 == 0)
  *VAR_1 = VAR_0->rx_frags;
}
