
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gem_softc {scalar_t__ sc_rxptr; int sc_dev; struct gem_rxsoft* sc_rxsoft; scalar_t__ sc_txwin; scalar_t__ sc_txnext; int sc_txfree; TYPE_1__* sc_txdescs; } ;
struct gem_rxsoft {int * rxs_mbuf; } ;
struct TYPE_2__ {scalar_t__ gd_addr; scalar_t__ gd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gem_softc*,int) ;
 int FUNC_1 (struct gem_softc*,int) ;
 int FUNC_2 (struct gem_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct gem_softc*,int) ;
 int FUNC_5 (struct gem_softc*) ;

__attribute__((used)) static int
FUNC_6(struct gem_softc *VAR_6)
{
 struct gem_rxsoft *VAR_7;
 int VAR_8, VAR_9;

 FUNC_2(VAR_6, VAR_5);




 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_6->sc_txdescs[VAR_9].gd_flags = 0;
  VAR_6->sc_txdescs[VAR_9].gd_addr = 0;
 }
 VAR_6->sc_txfree = VAR_2;
 VAR_6->sc_txnext = 0;
 VAR_6->sc_txwin = 0;





 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7 = &VAR_6->sc_rxsoft[VAR_9];
  if (VAR_7->rxs_mbuf == ((void*)0)) {
   if ((VAR_8 = FUNC_4(VAR_6, VAR_9)) != 0) {
    FUNC_3(VAR_6->sc_dev,
        "unable to allocate or map RX buffer %d, "
        "error = %d\n", VAR_9, VAR_8);




    FUNC_5(VAR_6);
    return (1);
   }
  } else
   FUNC_1(VAR_6, VAR_9);
 }
 VAR_6->sc_rxptr = 0;

 FUNC_0(VAR_6, VAR_0 | VAR_1);

 return (0);
}
