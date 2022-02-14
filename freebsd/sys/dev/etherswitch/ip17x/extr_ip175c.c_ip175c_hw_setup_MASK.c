
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip17x_softc {int vlan_mode; } ;




 int FUNC_0 (struct ip17x_softc*) ;
 int FUNC_1 (struct ip17x_softc*) ;

__attribute__((used)) static int
FUNC_2(struct ip17x_softc *VAR_0)
{

 switch (VAR_0->vlan_mode) {
 case 128:
  return (FUNC_1(VAR_0));
  break;
 case 129:
  return (FUNC_0(VAR_0));
  break;
 }
 return (-1);
}
