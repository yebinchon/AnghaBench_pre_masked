
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vtnet_softc {int* vtnet_vlan_filter; int vtnet_dev; struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_capenable; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (struct vtnet_softc*) ;
 int FUNC_2 (int ,char*,char*,int,char*) ;
 scalar_t__ FUNC_3 (struct vtnet_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct vtnet_softc *VAR_2, int VAR_3, uint16_t VAR_4)
{
 struct ifnet *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_2->vtnet_ifp;
 VAR_6 = (VAR_4 >> 5) & 0x7F;
 VAR_7 = VAR_4 & 0x1F;

 if (VAR_4 == 0 || VAR_4 > 4095)
  return;

 FUNC_0(VAR_2);

 if (VAR_3)
  VAR_2->vtnet_vlan_filter[VAR_6] |= (1 << VAR_7);
 else
  VAR_2->vtnet_vlan_filter[VAR_6] &= ~(1 << VAR_7);

 if (VAR_5->if_capenable & VAR_0 &&
     VAR_5->if_drv_flags & VAR_1 &&
     FUNC_3(VAR_2, VAR_3, VAR_4) != 0) {
  FUNC_2(VAR_2->vtnet_dev,
      "cannot %s VLAN %d %s the host filter table\n",
      VAR_3 ? "add" : "remove", VAR_4, VAR_3 ? "to" : "from");
 }

 FUNC_1(VAR_2);
}
