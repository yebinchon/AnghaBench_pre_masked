
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_sport_list {int dummy; } ;
struct bcma_corecfg {struct bcma_sport_list wrapper_ports; struct bcma_sport_list bridge_ports; struct bcma_sport_list dev_ports; } ;
typedef int bhnd_port_type ;






struct bcma_sport_list *
FUNC_0(struct bcma_corecfg *VAR_0, bhnd_port_type VAR_1)
{
 switch (VAR_1) {
 case 128:
  return (&VAR_0->dev_ports);
  break;
 case 129:
  return (&VAR_0->bridge_ports);
  break;
 case 130:
  return (&VAR_0->wrapper_ports);
  break;
 default:
  return (((void*)0));
 }
}
