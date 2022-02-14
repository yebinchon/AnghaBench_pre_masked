
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ phy_mode; } ;
struct bwi_mac {int mac_sc; TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct bwi_mac*,int ,int ,scalar_t__) ;

void
FUNC_2(struct bwi_mac *VAR_7, int VAR_8)
{
 uint16_t VAR_9;

 if (VAR_7->mac_phy.phy_mode == VAR_6)
  return;

 if (VAR_8)
  VAR_9 = VAR_4;
 else
  VAR_9 = VAR_5;

 FUNC_0(VAR_7->mac_sc, VAR_2,
      VAR_9 + VAR_3);
 FUNC_1(VAR_7, VAR_0, VAR_1, VAR_9);
}
