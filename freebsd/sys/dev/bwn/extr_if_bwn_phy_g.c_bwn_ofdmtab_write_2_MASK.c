
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwn_phy_g {scalar_t__ pg_ofdmtab_dir; int pg_ofdmtab_addr; } ;
struct TYPE_2__ {struct bwn_phy_g phy_g; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_3, uint16_t VAR_4, uint16_t VAR_5,
    uint16_t VAR_6)
{
 struct bwn_phy_g *VAR_7 = &VAR_3->mac_phy.phy_g;
 uint16_t VAR_8;

 VAR_8 = VAR_4 + VAR_5;
 if ((VAR_7->pg_ofdmtab_dir != VAR_0) ||
     (VAR_8 - 1 != VAR_7->pg_ofdmtab_addr)) {
  FUNC_0(VAR_3, VAR_1, VAR_8);
  VAR_7->pg_ofdmtab_dir = VAR_0;
 }
 VAR_7->pg_ofdmtab_addr = VAR_8;
 FUNC_0(VAR_3, VAR_2, VAR_6);
}
