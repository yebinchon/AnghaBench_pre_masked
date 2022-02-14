
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_softc {int sc_dev; } ;
struct TYPE_2__ {int * raw; } ;
struct bwn_plcp6 {TYPE_1__ o; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_1(struct bwn_mac *VAR_4, struct bwn_plcp6 *VAR_5)
{
 struct bwn_softc *VAR_6 = VAR_4->mac_sc;

 switch (VAR_5->o.raw[0]) {
 case 0x0a:
  return (VAR_1);
 case 0x14:
  return (VAR_2);
 case 0x37:
  return (VAR_3);
 case 0x6e:
  return (VAR_0);
 }
 FUNC_0(VAR_6->sc_dev, "incorrect CCK rate %d\n", VAR_5->o.raw[0]);
 return (-1);
}
