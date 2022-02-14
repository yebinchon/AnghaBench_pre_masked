
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_xname; int if_vnet; struct bridge_softc* if_bridge; } ;
struct bridge_softc {TYPE_1__* sc_ifp; } ;
struct TYPE_2__ {int if_xname; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_2, int VAR_3)
{
 struct bridge_softc *VAR_4 = VAR_2->if_bridge;
 static const char *VAR_5[] = {
  "disabled",
  "listening",
  "learning",
  "forwarding",
  "blocking",
  "discarding"
 };

 FUNC_1(VAR_2->if_vnet);
 if (VAR_1)
  FUNC_2(VAR_0, "%s: state changed to %s on %s\n",
      VAR_4->sc_ifp->if_xname, VAR_5[VAR_3], VAR_2->if_xname);
 FUNC_0();
}
