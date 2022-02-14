
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netif_driver {int netif_nifs; TYPE_1__* netif_ifs; } ;
struct TYPE_2__ {scalar_t__ dif_used; } ;


 scalar_t__ VAR_0 ;
 struct netif_driver** VAR_1 ;
 int FUNC_0 (char*) ;

void
FUNC_1(void)
{
 struct netif_driver *VAR_2;
 int VAR_3, VAR_4;





 for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++) {
  VAR_2 = VAR_1[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_2->netif_nifs; VAR_4++)
   VAR_2->netif_ifs[VAR_4].dif_used = 0;
 }
}
