
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ phy_mode; } ;
struct bwi_mac {int mac_rev; int mac_regwin; int mac_sc; TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bwi_mac*) ;
 int FUNC_3 (struct bwi_mac*,int) ;
 int FUNC_4 (struct bwi_mac*) ;
 int FUNC_5 (struct bwi_mac*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct bwi_mac*) ;
 int FUNC_8 (struct bwi_mac*) ;
 int FUNC_9 (struct bwi_mac*) ;

int
FUNC_10(struct bwi_mac *VAR_4)
{
 int VAR_5;

 if (VAR_4->mac_rev >= 5)
  FUNC_0(VAR_4->mac_sc, VAR_2);

 FUNC_3(VAR_4, 1);

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5)
  return VAR_5;


 if (VAR_4->mac_phy.phy_mode == VAR_3)
  FUNC_3(VAR_4, 0);
 else
  FUNC_3(VAR_4, 1);

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_8(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_9(VAR_4);
 FUNC_1(VAR_4->mac_sc, VAR_0, VAR_1);
 FUNC_6(VAR_4->mac_sc, &VAR_4->mac_regwin, 0);

 return 0;
}
