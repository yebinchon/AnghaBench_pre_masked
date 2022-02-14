
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* phy_n; } ;
struct bwn_mac {TYPE_2__ mac_phy; } ;
typedef scalar_t__ bwn_band_t ;
struct TYPE_3__ {scalar_t__ ipa5g_on; scalar_t__ ipa2g_on; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bwn_mac*) ;

__attribute__((used)) static inline bool FUNC_1(struct bwn_mac *VAR_2)
{
 bwn_band_t VAR_3 = FUNC_0(VAR_2);
 return ((VAR_2->mac_phy.phy_n->ipa2g_on && VAR_3 == VAR_0) ||
  (VAR_2->mac_phy.phy_n->ipa5g_on && VAR_3 == VAR_1));
}
