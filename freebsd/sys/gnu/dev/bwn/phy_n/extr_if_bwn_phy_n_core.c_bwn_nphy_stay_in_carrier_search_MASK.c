
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy_n {scalar_t__ deaf_count; int const* clip_state; int classifier_state; } ;
struct bwn_phy {struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int,int ) ;
 int FUNC_1 (struct bwn_mac*,int const*) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*,int const*) ;

__attribute__((used)) static void FUNC_4(struct bwn_mac *VAR_1, bool VAR_2)
{
 struct bwn_phy *VAR_3 = &VAR_1->mac_phy;
 struct bwn_phy_n *VAR_4 = VAR_3->phy_n;

 if (VAR_2) {
  static const uint16_t VAR_5[] = { 0xFFFF, 0xFFFF };
  if (VAR_4->deaf_count++ == 0) {
   VAR_4->classifier_state = FUNC_0(VAR_1, 0, 0);
   FUNC_0(VAR_1, 0x7,
         VAR_0);
   FUNC_1(VAR_1, VAR_4->clip_state);
   FUNC_3(VAR_1, VAR_5);
  }
  FUNC_2(VAR_1);
 } else {
  if (--VAR_4->deaf_count == 0) {
   FUNC_0(VAR_1, 0x7, VAR_4->classifier_state);
   FUNC_3(VAR_1, VAR_4->clip_state);
  }
 }
}
