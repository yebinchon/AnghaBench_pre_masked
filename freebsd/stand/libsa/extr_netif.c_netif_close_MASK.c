
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netif {int dummy; } ;
struct TYPE_2__ {struct netif* io_netif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netif*) ;
 TYPE_1__* VAR_3 ;

int
FUNC_1(int VAR_4)
{
 if (VAR_4 >= VAR_1) {
  VAR_2 = VAR_0;
  return (-1);
 }
 FUNC_0(VAR_3[VAR_4].io_netif);
 VAR_3[VAR_4].io_netif = (struct netif *)0;

 return (0);
}
