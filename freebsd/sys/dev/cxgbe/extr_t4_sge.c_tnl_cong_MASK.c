
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int rx_e_chan_map; } ;



int
FUNC_0(struct port_info *VAR_0, int VAR_1)
{

 if (VAR_1 == -1)
  return (-1);
 else if (VAR_1 == 1)
  return (0);
 else
  return (VAR_0->rx_e_chan_map);
}
