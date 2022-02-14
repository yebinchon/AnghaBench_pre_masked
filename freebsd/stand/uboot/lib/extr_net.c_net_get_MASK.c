
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct uboot_softc {int sc_rxbuf; int sc_handle; } ;
struct netif {struct uboot_softc* nif_devdata; } ;
struct iodesc {struct netif* io_netif; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,size_t,int*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct iodesc *VAR_1, void **VAR_2, time_t VAR_3)
{
 struct netif *VAR_4 = VAR_1->io_netif;
 struct uboot_softc *VAR_5 = VAR_4->nif_devdata;
 time_t VAR_6;
 int VAR_7, VAR_8;
 size_t VAR_9;
 char *VAR_10;




 VAR_6 = FUNC_0();
 VAR_9 = sizeof(VAR_5->sc_rxbuf);
 do {
  VAR_7 = FUNC_4(VAR_5->sc_handle, VAR_5->sc_rxbuf, VAR_9, &VAR_8);

  if (VAR_7 != 0) {
   FUNC_3("net_get: ub_dev_recv() failed, error=%d\n",
       VAR_7);
   VAR_8 = 0;
   break;
  }
 } while ((VAR_8 == -1 || VAR_8 == 0) && (FUNC_0() - VAR_6 < VAR_3));





 if (VAR_8 > 0) {
  VAR_10 = FUNC_1(VAR_8 + VAR_0);
  if (VAR_10 == ((void*)0))
   return (-1);
  FUNC_2(VAR_10 + VAR_0, VAR_5->sc_rxbuf, VAR_8);
  *VAR_2 = VAR_10;
  return ((ssize_t)VAR_8);
 }

 return (-1);
}
