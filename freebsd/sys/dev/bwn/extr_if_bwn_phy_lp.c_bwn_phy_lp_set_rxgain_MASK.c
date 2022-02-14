
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211com {int ic_curchan; } ;
struct bwn_softc {struct ieee80211com sc_ic; } ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bwn_mac *VAR_6, uint32_t VAR_7)
{
 struct bwn_softc *VAR_8 = VAR_6->mac_sc;
 struct ieee80211com *VAR_9 = &VAR_8->sc_ic;
 uint16_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_6->mac_phy.rev < 2) {
  VAR_14 = VAR_7 & 0x1;
  VAR_12 = (VAR_7 & 0xfffc) | ((VAR_7 & 0xc) >> 2);
  VAR_10 = (VAR_7 & 2) >> 1;

  FUNC_2(VAR_6, VAR_4, 0xfffe, VAR_14);
  FUNC_2(VAR_6, VAR_3,
      0xfbff, VAR_10 << 10);
  FUNC_2(VAR_6, VAR_3,
      0xf7ff, VAR_10 << 11);
  FUNC_3(VAR_6, VAR_5, VAR_12);
 } else {
  VAR_13 = VAR_7 & 0xffff;
  VAR_11 = (VAR_7 >> 16) & 0xf;
  VAR_10 = (VAR_7 >> 21) & 0x1;
  VAR_14 = ~(VAR_7 >> 20) & 0x1;

  FUNC_2(VAR_6, VAR_4, 0xfffe, VAR_14);
  FUNC_2(VAR_6, VAR_3,
      0xfdff, VAR_10 << 9);
  FUNC_2(VAR_6, VAR_3,
      0xfbff, VAR_10 << 10);
  FUNC_3(VAR_6, VAR_5, VAR_13);
  FUNC_2(VAR_6, VAR_0, 0xfff0, VAR_11);
  if (FUNC_4(VAR_9->ic_curchan)) {
   VAR_15 = (VAR_7 >> 2) & 0x3;
   FUNC_2(VAR_6, VAR_3,
       0xe7ff, VAR_15<<11);
   FUNC_2(VAR_6, FUNC_0(0xe6), 0xffe7,
       VAR_15 << 3);
  }
 }

 FUNC_1(VAR_6, VAR_1, 0x1);
 FUNC_1(VAR_6, VAR_1, 0x10);
 FUNC_1(VAR_6, VAR_1, 0x40);
 if (VAR_6->mac_phy.rev >= 2) {
  FUNC_1(VAR_6, VAR_2, 0x100);
  if (FUNC_4(VAR_9->ic_curchan)) {
   FUNC_1(VAR_6, VAR_2, 0x400);
   FUNC_1(VAR_6, FUNC_0(0xe5), 0x8);
  }
  return;
 }
 FUNC_1(VAR_6, VAR_2, 0x200);
}
