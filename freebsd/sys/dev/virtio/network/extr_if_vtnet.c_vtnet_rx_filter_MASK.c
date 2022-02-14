
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {struct ifnet* vtnet_ifp; int vtnet_dev; } ;
struct ifnet {int if_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (struct vtnet_softc*,int) ;
 scalar_t__ FUNC_3 (struct vtnet_softc*,int) ;

__attribute__((used)) static void
FUNC_4(struct vtnet_softc *VAR_2)
{
 device_t VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = VAR_2->vtnet_dev;
 VAR_4 = VAR_2->vtnet_ifp;

 FUNC_0(VAR_2);

 if (FUNC_3(VAR_2, VAR_4->if_flags & VAR_1) != 0)
  FUNC_1(VAR_3, "cannot %s promiscuous mode\n",
      VAR_4->if_flags & VAR_1 ? "enable" : "disable");

 if (FUNC_2(VAR_2, VAR_4->if_flags & VAR_0) != 0)
  FUNC_1(VAR_3, "cannot %s all-multicast mode\n",
      VAR_4->if_flags & VAR_0 ? "enable" : "disable");
}
