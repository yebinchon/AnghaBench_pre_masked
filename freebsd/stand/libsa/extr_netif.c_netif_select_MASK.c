
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netif_driver {int netif_nifs; char* netif_bname; TYPE_1__* netif_ifs; } ;
struct netif {int nif_unit; int nif_sel; struct netif_driver* nif_driver; } ;
struct TYPE_2__ {int dif_nsel; int dif_used; } ;


 scalar_t__ VAR_0 ;
 struct netif_driver** VAR_1 ;
 int FUNC_0 (struct netif*,void*) ;
 int FUNC_1 (char*,...) ;

struct netif *
FUNC_2(void *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 struct netif_driver *VAR_7;
 struct netif VAR_8;
 static struct netif VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = 0;
 VAR_9.nif_driver = ((void*)0);

 for (VAR_3 = 0; VAR_1[VAR_3] != ((void*)0); VAR_3++) {
  VAR_8.nif_driver = VAR_1[VAR_3];
  VAR_7 = VAR_8.nif_driver;

  for (VAR_4 = 0; VAR_4 < VAR_7->netif_nifs; VAR_4++) {
   VAR_8.nif_unit = VAR_4;
   VAR_5 = 0;







   for (VAR_6 = 0; VAR_6 < VAR_7->netif_ifs[VAR_4].dif_nsel; VAR_6++) {
    VAR_8.nif_sel = VAR_6;

    if (VAR_7->netif_ifs[VAR_4].dif_used & (1 << VAR_6)) {




     continue;
    }

    VAR_11 = FUNC_0(&VAR_8, VAR_2);




    if (VAR_11 > VAR_10) {
     VAR_10 = VAR_11;
     VAR_9 = VAR_8;
    }
   }




  }
 }

 if (VAR_9.nif_driver == ((void*)0))
  return ((void*)0);

 VAR_9.nif_driver->
     netif_ifs[VAR_9.nif_unit].dif_used |= (1 << VAR_9.nif_sel);







 return &VAR_9;
}
