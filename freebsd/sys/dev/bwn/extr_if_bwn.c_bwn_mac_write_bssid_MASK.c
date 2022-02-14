
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int ic_macaddr; } ;
struct bwn_softc {int sc_bssid; TYPE_1__ sc_ic; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct bwn_mac*,int ,int ) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 int FUNC_3 (scalar_t__*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bwn_mac *VAR_2)
{
 struct bwn_softc *VAR_3 = VAR_2->mac_sc;
 uint32_t VAR_4;
 int VAR_5;
 uint8_t VAR_6[VAR_1 * 2];

 FUNC_1(VAR_2, VAR_0, VAR_3->sc_bssid);
 FUNC_3(VAR_6, VAR_3->sc_ic.ic_macaddr, VAR_1);
 FUNC_3(VAR_6 + VAR_1, VAR_3->sc_bssid,
     VAR_1);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_6); VAR_5 += sizeof(uint32_t)) {
  VAR_4 = (uint32_t) (VAR_6[VAR_5 + 0]);
  VAR_4 |= (uint32_t) (VAR_6[VAR_5 + 1]) << 8;
  VAR_4 |= (uint32_t) (VAR_6[VAR_5 + 2]) << 16;
  VAR_4 |= (uint32_t) (VAR_6[VAR_5 + 3]) << 24;
  FUNC_2(VAR_2, 0x20 + VAR_5, VAR_4);
 }
}
