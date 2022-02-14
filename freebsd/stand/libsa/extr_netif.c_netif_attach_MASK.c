
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netif_stats {int dummy; } ;
struct netif_driver {char* netif_bname; TYPE_1__* netif_ifs; int (* netif_init ) (struct iodesc*,void*) ;} ;
struct netif {size_t nif_unit; struct netif_driver* nif_driver; } ;
struct iodesc {struct netif* io_netif; } ;
struct TYPE_2__ {int dif_stats; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (struct iodesc*,void*) ;

void
FUNC_4(struct netif *VAR_1, struct iodesc *VAR_2, void *VAR_3)
{
 struct netif_driver *VAR_4 = VAR_1->nif_driver;





 VAR_2->io_netif = VAR_1;





 VAR_4->netif_init(VAR_2, VAR_3);
 FUNC_0(VAR_4->netif_ifs[VAR_1->nif_unit].dif_stats,
     sizeof(struct netif_stats));
}
