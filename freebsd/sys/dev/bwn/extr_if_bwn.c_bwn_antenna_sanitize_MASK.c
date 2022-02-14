
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct bwn_softc {int sc_ant2g; int sc_ant5g; } ;
struct TYPE_2__ {scalar_t__ gmode; } ;
struct bwn_mac {TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;



__attribute__((used)) static uint8_t
FUNC_0(struct bwn_mac *VAR_0, uint8_t VAR_1)
{
 struct bwn_softc *VAR_2 = VAR_0->mac_sc;
 uint8_t VAR_3;

 if (VAR_1 == 0)
  return (0);
 if (VAR_0->mac_phy.gmode)
  VAR_3 = VAR_2->sc_ant2g;
 else
  VAR_3 = VAR_2->sc_ant5g;
 if (!(VAR_3 & (1 << (VAR_1 - 1))))
  return (0);
 return (VAR_1);
}
