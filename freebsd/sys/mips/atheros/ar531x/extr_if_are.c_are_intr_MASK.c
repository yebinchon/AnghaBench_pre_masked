
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int dummy; } ;
struct are_softc {int sc_rxint_mask; int sc_txint_mask; struct ifnet* are_ifp; } ;


 int FUNC_0 (struct are_softc*) ;
 int FUNC_1 (struct are_softc*) ;
 int FUNC_2 (struct are_softc*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct are_softc*,int ,int) ;
 int FUNC_4 (struct are_softc*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct are_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct are_softc *VAR_2 = VAR_1;
 uint32_t VAR_3;
 struct ifnet *VAR_4 = VAR_2->are_ifp;

 FUNC_0(VAR_2);



 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3) {
  FUNC_3(VAR_2, VAR_0, VAR_3);
 }
 if (VAR_3 & VAR_2->sc_rxint_mask) {
  FUNC_4(VAR_2);
 }
 if (VAR_3 & VAR_2->sc_txint_mask) {
  FUNC_6(VAR_2);
 }


 FUNC_5(VAR_4);

 FUNC_1(VAR_2);
}
