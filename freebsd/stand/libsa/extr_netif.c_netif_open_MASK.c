
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netif {TYPE_1__* nif_driver; int nif_unit; } ;
struct iodesc {struct netif* io_netif; } ;
struct TYPE_2__ {char* netif_bname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iodesc*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct netif*,struct iodesc*,void*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct netif*,void*) ;
 struct netif* FUNC_4 (void*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int ) ;
 struct iodesc* VAR_4 ;

int
FUNC_7(void *VAR_5)
{
 int VAR_6;
 struct iodesc *VAR_7;
 struct netif *VAR_8;


 for (VAR_6 = 0, VAR_7 = VAR_4; VAR_6 < VAR_2; VAR_6++, VAR_7++)
  if (VAR_7->io_netif == (struct netif *)0)
   goto fnd;
 VAR_3 = VAR_1;
 return (-1);

fnd:
 FUNC_0(VAR_7, sizeof(*VAR_7));
 FUNC_2();
 VAR_8 = FUNC_4(VAR_5);
 if (!VAR_8)
  FUNC_5("netboot: no interfaces left untried");
 if (FUNC_3(VAR_8, VAR_5)) {
  FUNC_6("netboot: couldn't probe %s%d\n",
      VAR_8->nif_driver->netif_bname, VAR_8->nif_unit);
  VAR_3 = VAR_0;
  return (-1);
 }
 FUNC_1(VAR_8, VAR_7, VAR_5);

 return (VAR_6);
}
