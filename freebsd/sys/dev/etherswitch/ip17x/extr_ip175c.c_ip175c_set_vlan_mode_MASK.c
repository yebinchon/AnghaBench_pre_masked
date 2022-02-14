
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ip17x_softc {int vlan_mode; int sc_dev; } ;




 int FUNC_0 (struct ip17x_softc*) ;
 int FUNC_1 (struct ip17x_softc*,int) ;
 int FUNC_2 (int ,int,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct ip17x_softc *VAR_0, uint32_t VAR_1)
{

 switch (VAR_1) {
 case 129:

  FUNC_2(VAR_0->sc_dev, 30, 9, 0x80, 0x80);
  VAR_0->vlan_mode = VAR_1;
  break;
 case 128:
 default:

  FUNC_2(VAR_0->sc_dev, 30, 9, 0x80, 0);
  VAR_0->vlan_mode = 128;
  break;
 }


 FUNC_1(VAR_0, VAR_0->vlan_mode);


 FUNC_0(VAR_0);

 return (0);
}
