
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwn_phy_n {int rfctrl_intc1_save; int rfctrl_intc2_save; } ;
struct TYPE_2__ {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;
typedef scalar_t__ bwn_band_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 scalar_t__ FUNC_2 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_3(struct bwn_mac *VAR_3, bool VAR_4)
{
 struct bwn_phy_n *VAR_5 = VAR_3->mac_phy.phy_n;
 bwn_band_t VAR_6;
 uint16_t VAR_7;

 if (!VAR_4) {
  VAR_5->rfctrl_intc1_save = FUNC_0(VAR_3,
             VAR_1);
  VAR_5->rfctrl_intc2_save = FUNC_0(VAR_3,
             VAR_2);
  VAR_6 = FUNC_2(VAR_3);
  if (VAR_3->mac_phy.rev >= 7) {
   VAR_7 = 0x1480;
  } else if (VAR_3->mac_phy.rev >= 3) {
   if (VAR_6 == VAR_0)
    VAR_7 = 0x600;
   else
    VAR_7 = 0x480;
  } else {
   if (VAR_6 == VAR_0)
    VAR_7 = 0x180;
   else
    VAR_7 = 0x120;
  }
  FUNC_1(VAR_3, VAR_1, VAR_7);
  FUNC_1(VAR_3, VAR_2, VAR_7);
 } else {
  FUNC_1(VAR_3, VAR_1,
    VAR_5->rfctrl_intc1_save);
  FUNC_1(VAR_3, VAR_2,
    VAR_5->rfctrl_intc2_save);
 }
}
