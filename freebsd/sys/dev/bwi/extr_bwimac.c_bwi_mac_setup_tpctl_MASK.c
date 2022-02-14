
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_tpctl {int bbp_atten; int tp_ctrl1; int tp_ctrl2; int rf_atten; } ;
struct bwi_softc {int sc_pci_revid; int sc_bbp_id; } ;
struct bwi_rf {scalar_t__ rf_type; int rf_rev; } ;
struct bwi_phy {scalar_t__ phy_mode; } ;
struct bwi_mac {struct bwi_tpctl mac_tpctl; struct bwi_phy mac_phy; struct bwi_rf mac_rf; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bwi_softc*) ;
 int FUNC_1 (struct bwi_softc*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct bwi_softc*,int,char*,int,int,int,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct bwi_mac *VAR_8)
{
 struct bwi_softc *VAR_9 = VAR_8->mac_sc;
 struct bwi_rf *VAR_10 = &VAR_8->mac_rf;
 struct bwi_phy *VAR_11 = &VAR_8->mac_phy;
 struct bwi_tpctl *VAR_12 = &VAR_8->mac_tpctl;


 if (VAR_10->rf_type == VAR_4 && VAR_10->rf_rev < 6)
  VAR_12->bbp_atten = 0;
 else
  VAR_12->bbp_atten = 2;


 VAR_12->tp_ctrl1 = 0;
 if (VAR_10->rf_type == VAR_4) {
  if (VAR_10->rf_rev == 1)
   VAR_12->tp_ctrl1 = 3;
  else if (VAR_10->rf_rev < 6)
   VAR_12->tp_ctrl1 = 2;
  else if (VAR_10->rf_rev == 8)
   VAR_12->tp_ctrl1 = 1;
 }


 VAR_12->tp_ctrl2 = 0xffff;




 if (VAR_11->phy_mode == VAR_6) {
  VAR_12->rf_atten = 0x60;
  goto back;
 }

 if (FUNC_0(VAR_9) && VAR_9->sc_pci_revid < 0x51) {
  VAR_12->rf_atten = VAR_9->sc_pci_revid < 0x43 ? 2 : 3;
  goto back;
 }

 VAR_12->rf_atten = 5;

 if (VAR_10->rf_type != VAR_4) {
  if (VAR_10->rf_type == VAR_5 && VAR_10->rf_rev == 1)
   VAR_12->rf_atten = 6;
  goto back;
 }







 switch (VAR_10->rf_rev) {
 case 1:
  if (VAR_11->phy_mode == VAR_7) {
   if (FUNC_0(VAR_9) || FUNC_1(VAR_9))
    VAR_12->rf_atten = 3;
   else
    VAR_12->rf_atten = 1;
  } else {
   if (FUNC_0(VAR_9))
    VAR_12->rf_atten = 7;
   else
    VAR_12->rf_atten = 6;
  }
  break;
 case 2:
  if (VAR_11->phy_mode == VAR_7) {



   if (FUNC_0(VAR_9))
    VAR_12->rf_atten = 3;
   else if (FUNC_1(VAR_9))
    VAR_12->rf_atten = 5;
   else if (VAR_9->sc_bbp_id == VAR_0)
    VAR_12->rf_atten = 4;
   else
    VAR_12->rf_atten = 3;
  } else {
   VAR_12->rf_atten = 6;
  }
  break;
 case 4:
 case 5:
  VAR_12->rf_atten = 1;
  break;
 case 8:
  VAR_12->rf_atten = 0x1a;
  break;
 }
back:
 FUNC_2(VAR_9, VAR_2 | VAR_1 | VAR_3,
  "bbp atten: %u, rf atten: %u, ctrl1: %u, ctrl2: %u\n",
  VAR_12->bbp_atten, VAR_12->rf_atten,
  VAR_12->tp_ctrl1, VAR_12->tp_ctrl2);
}
