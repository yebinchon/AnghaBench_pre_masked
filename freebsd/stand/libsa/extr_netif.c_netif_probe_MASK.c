
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif_driver {char* netif_bname; int (* netif_probe ) (struct netif*,void*) ;} ;
struct netif {int nif_unit; struct netif_driver* nif_driver; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (struct netif*,void*) ;

int
FUNC_2(struct netif *VAR_1, void *VAR_2)
{
 struct netif_driver *VAR_3 = VAR_1->nif_driver;





 return VAR_3->netif_probe(VAR_1, VAR_2);
}
