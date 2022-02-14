
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_phy_g {scalar_t__ pg_ofdmtab_dir; int pg_ofdmtab_addr; } ;
struct TYPE_2__ {struct bwn_phy_g phy_g; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_4, uint16_t VAR_5, uint16_t VAR_6,
    uint32_t VAR_7)
{
 struct bwn_phy_g *VAR_8 = &VAR_4->mac_phy.phy_g;
 uint16_t VAR_9;

 VAR_9 = VAR_5 + VAR_6;
 if ((VAR_8->pg_ofdmtab_dir != VAR_0) ||
     (VAR_9 - 1 != VAR_8->pg_ofdmtab_addr)) {
  FUNC_0(VAR_4, VAR_1, VAR_9);
  VAR_8->pg_ofdmtab_dir = VAR_0;
 }
 VAR_8->pg_ofdmtab_addr = VAR_9;

 FUNC_0(VAR_4, VAR_2, VAR_7);
 FUNC_0(VAR_4, VAR_3, (VAR_7 >> 16));
}
