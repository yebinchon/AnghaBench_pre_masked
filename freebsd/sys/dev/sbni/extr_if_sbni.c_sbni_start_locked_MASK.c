
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbni_softc {scalar_t__ tx_frameno; } ;
struct ifnet {struct sbni_softc* if_softc; } ;


 int FUNC_0 (struct sbni_softc*) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_0)
{
 struct sbni_softc *VAR_1 = VAR_0->if_softc;

 if (VAR_1->tx_frameno == 0)
  FUNC_0(VAR_1);
}
