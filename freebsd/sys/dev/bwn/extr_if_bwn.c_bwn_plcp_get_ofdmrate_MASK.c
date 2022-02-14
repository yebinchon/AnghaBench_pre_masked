
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct bwn_softc {int sc_dev; } ;
struct TYPE_2__ {int* raw; } ;
struct bwn_plcp6 {TYPE_1__ o; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct bwn_mac *VAR_8, struct bwn_plcp6 *VAR_9, uint8_t VAR_10)
{
 struct bwn_softc *VAR_11 = VAR_8->mac_sc;

 FUNC_0(VAR_10 == 0, ("not support APHY\n"));

 switch (VAR_9->o.raw[0] & 0xf) {
 case 0xb:
  return (VAR_6);
 case 0xf:
  return (VAR_7);
 case 0xa:
  return (VAR_0);
 case 0xe:
  return (VAR_1);
 case 0x9:
  return (VAR_2);
 case 0xd:
  return (VAR_3);
 case 0x8:
  return (VAR_4);
 case 0xc:
  return (VAR_5);
 }
 FUNC_1(VAR_11->sc_dev, "incorrect OFDM rate %d\n",
     VAR_9->o.raw[0] & 0xf);
 return (-1);
}
