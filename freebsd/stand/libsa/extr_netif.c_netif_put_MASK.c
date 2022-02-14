
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif_driver {char* netif_bname; scalar_t__ (* netif_put ) (struct iodesc*,void*,size_t) ;} ;
struct netif {int nif_unit; struct netif_driver* nif_driver; } ;
struct iodesc {struct netif* io_netif; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int,...) ;
 scalar_t__ FUNC_2 (struct iodesc*,void*,size_t) ;

ssize_t
FUNC_3(struct iodesc *VAR_1, void *VAR_2, size_t VAR_3)
{



 struct netif_driver *VAR_4 = VAR_1->io_netif->nif_driver;
 ssize_t VAR_5;
 VAR_5 = VAR_4->netif_put(VAR_1, VAR_2, VAR_3);





 return (VAR_5);
}
