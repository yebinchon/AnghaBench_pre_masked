
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int phy_flags; } ;
struct bwi_mac {int mac_rf; TYPE_2__* mac_sc; TYPE_1__ mac_phy; } ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_4__ {int sc_card_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bwi_mac*,int ,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct bwi_mac*,int) ;

__attribute__((used)) static void
FUNC_4(struct bwi_mac *VAR_5)
{
 int32_t VAR_6, VAR_7;
 uint16_t VAR_8;




 if ((VAR_5->mac_phy.phy_flags & VAR_2) == 0 ||
     (VAR_5->mac_sc->sc_card_flags & VAR_0) == 0) {
      int16_t VAR_9;

  VAR_9 = FUNC_3(VAR_5, 0x20);
  if (VAR_9 >= 32)
   VAR_9 -= 64;

  if (VAR_9 < 3) {
   VAR_6 = 0x2b;
   VAR_7 = 0x27;
  } else {
   VAR_6 = 0x2d;
   VAR_7 = 0x2b;
  }
 } else {

  VAR_6 = FUNC_2(&VAR_5->mac_rf, 0x11);
  VAR_7 = FUNC_2(&VAR_5->mac_rf, 0xe);
 }




 VAR_8 = FUNC_1((uint32_t)VAR_6, FUNC_0(5, 0)) |
       FUNC_1((uint32_t)VAR_7, FUNC_0(11, 6));
 FUNC_0(VAR_5, VAR_1, 0xf000, VAR_8);



}
