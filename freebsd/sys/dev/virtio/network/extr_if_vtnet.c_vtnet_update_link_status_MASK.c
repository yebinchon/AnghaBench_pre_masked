
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_link_active; struct ifnet* vtnet_ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct vtnet_softc*) ;

__attribute__((used)) static void
FUNC_3(struct vtnet_softc *VAR_2)
{
 struct ifnet *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->vtnet_ifp;

 FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_2);


 if (VAR_4 != 0 && VAR_2->vtnet_link_active == 0) {
  VAR_2->vtnet_link_active = 1;
  FUNC_1(VAR_3, VAR_1);
 } else if (VAR_4 == 0 && VAR_2->vtnet_link_active != 0) {
  VAR_2->vtnet_link_active = 0;
  FUNC_1(VAR_3, VAR_0);
 }
}
