
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; } ;
typedef TYPE_1__ xdma_transfer_status_t ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct atse_softc {int txcount; int xchan_tx; struct ifnet* atse_ifp; } ;


 int FUNC_0 (struct atse_softc*) ;
 int FUNC_1 (struct atse_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (int ,struct mbuf**,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2, xdma_transfer_status_t *VAR_3)
{
 xdma_transfer_status_t VAR_4;
 struct atse_softc *VAR_5;
 struct ifnet *VAR_6;
 struct mbuf *VAR_7;
 int VAR_8;

 VAR_5 = VAR_2;

 FUNC_0(VAR_5);

 VAR_6 = VAR_5->atse_ifp;

 for (;;) {
  VAR_8 = FUNC_4(VAR_5->xchan_tx, &VAR_7, &VAR_4);
  if (VAR_8 != 0) {
   break;
  }

  if (VAR_4.error != 0) {
   FUNC_2(VAR_6, VAR_0, 1);
  }

  FUNC_3(VAR_7);
  VAR_5->txcount--;
 }

 VAR_6->if_drv_flags &= ~VAR_1;

 FUNC_1(VAR_5);

 return (0);
}
