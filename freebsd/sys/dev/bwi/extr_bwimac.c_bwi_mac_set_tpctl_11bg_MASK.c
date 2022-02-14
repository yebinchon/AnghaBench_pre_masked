
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwi_tpctl {scalar_t__ bbp_atten; scalar_t__ rf_atten; scalar_t__ tp_ctrl1; } ;
struct bwi_rf {int rf_rev; scalar_t__ rf_type; } ;
struct TYPE_2__ {scalar_t__ phy_mode; } ;
struct bwi_mac {TYPE_1__ mac_phy; struct bwi_tpctl mac_tpctl; struct bwi_rf mac_rf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bwi_mac*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct bwi_mac*,int ,int ,int ) ;
 int FUNC_3 (struct bwi_mac*,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct bwi_mac*,scalar_t__) ;
 int FUNC_6 (struct bwi_mac*,struct bwi_tpctl*) ;

void
FUNC_7(struct bwi_mac *VAR_11, const struct bwi_tpctl *VAR_12)
{
 struct bwi_rf *VAR_13 = &VAR_11->mac_rf;
 struct bwi_tpctl *VAR_14 = &VAR_11->mac_tpctl;

 if (VAR_12 != ((void*)0)) {
  FUNC_0(VAR_12->bbp_atten <= VAR_0,
      ("bbp_atten %d", VAR_12->bbp_atten));
  FUNC_0(VAR_12->rf_atten <=
    (VAR_13->rf_rev < 6 ? VAR_6
       : VAR_7),
      ("rf_atten %d", VAR_12->rf_atten));
  FUNC_0(VAR_12->tp_ctrl1 <= VAR_9,
      ("tp_ctrl1 %d", VAR_12->tp_ctrl1));

  VAR_14->bbp_atten = VAR_12->bbp_atten;
  VAR_14->rf_atten = VAR_12->rf_atten;
  VAR_14->tp_ctrl1 = VAR_12->tp_ctrl1;
 }


 FUNC_5(VAR_11, VAR_14->bbp_atten);


 FUNC_3(VAR_11, VAR_3, VAR_14->rf_atten);
 FUNC_1(VAR_11, VAR_1, VAR_2,
       VAR_14->rf_atten);


 if (VAR_13->rf_type == VAR_8) {
  FUNC_2(VAR_11, VAR_4, ~VAR_5,
   FUNC_4(VAR_14->tp_ctrl1, VAR_5));
 }


 if (VAR_11->mac_phy.phy_mode == VAR_10)
  FUNC_6(VAR_11, VAR_14);
}
