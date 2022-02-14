
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwn_rfatt {int att; scalar_t__ padmix; int member_1; int member_0; } ;
struct bwn_phy_g {scalar_t__ pg_max_lb_gain; } ;
struct bwn_phy {int chan; struct bwn_phy_g phy_g; } ;
struct bwn_mac {TYPE_1__* mac_sc; struct bwn_phy mac_phy; } ;
typedef struct bwn_loctl {int att; scalar_t__ padmix; int member_1; int member_0; } const bwn_loctl ;
struct bwn_lo_g_value {int old_channel; int member_0; } ;
struct bwn_lo_calib {int calib_time; int ctl; int rfatt; int bbatt; } ;
struct bwn_bbatt {int att; scalar_t__ padmix; int member_1; int member_0; } ;
typedef int loctl ;
struct TYPE_2__ {int sc_dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bwn_phy*) ;
 int FUNC_2 (struct bwn_mac*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bwn_mac*,int,scalar_t__) ;
 int FUNC_4 (struct bwn_mac*,struct bwn_rfatt const*,int*) ;
 int FUNC_5 (struct bwn_mac*,struct bwn_lo_g_value*) ;
 int FUNC_6 (struct bwn_mac*,struct bwn_lo_g_value*) ;
 int FUNC_7 (struct bwn_mac*,int*,int*) ;
 int FUNC_8 (struct bwn_mac*) ;
 int FUNC_9 (struct bwn_mac*) ;
 int FUNC_10 (struct bwn_mac*,int) ;
 int FUNC_11 (int ,char*) ;
 struct bwn_lo_calib* FUNC_12 (int,int ,int) ;
 int FUNC_13 (int *,struct bwn_rfatt const*,int) ;

__attribute__((used)) static struct bwn_lo_calib *
FUNC_14(struct bwn_mac *VAR_3,
    const struct bwn_bbatt *VAR_4, const struct bwn_rfatt *VAR_5)
{
 struct bwn_phy *VAR_6 = &VAR_3->mac_phy;
 struct bwn_phy_g *VAR_7 = &VAR_6->phy_g;
 struct bwn_loctl VAR_8 = { 0, 0 };
 struct bwn_lo_calib *VAR_9;
 struct bwn_lo_g_value VAR_10 = { 0 };
 int VAR_11;
 uint16_t VAR_12, VAR_13, VAR_14;

 VAR_10.old_channel = VAR_6->chan;
 FUNC_9(VAR_3);
 FUNC_6(VAR_3, &VAR_10);

 VAR_13 = FUNC_7(VAR_3, &VAR_14, &VAR_12);
 FUNC_2(VAR_3, 0x43, 0xfff0, VAR_5->att);
 FUNC_2(VAR_3, VAR_13, ~VAR_14, (VAR_5->padmix ? VAR_14 :0));

 VAR_11 = (VAR_5->att * 2) + (VAR_4->att / 2);
 if (VAR_5->padmix)
  VAR_11 -= VAR_12;
 if (FUNC_1(VAR_6))
  VAR_11 += VAR_7->pg_max_lb_gain;
 FUNC_3(VAR_3, VAR_11, FUNC_1(VAR_6));
 FUNC_10(VAR_3, VAR_4->att);
 FUNC_4(VAR_3, &VAR_8, &VAR_11);

 FUNC_5(VAR_3, &VAR_10);
 FUNC_8(VAR_3);

 VAR_9 = FUNC_12(sizeof(*VAR_9), VAR_0, VAR_1 | VAR_2);
 if (!VAR_9) {
  FUNC_11(VAR_3->mac_sc->sc_dev, "out of memory\n");
  return (((void*)0));
 }
 FUNC_13(&VAR_9->bbatt, VAR_4, sizeof(*VAR_4));
 FUNC_13(&VAR_9->rfatt, VAR_5, sizeof(*VAR_5));
 FUNC_13(&VAR_9->ctl, &VAR_8, sizeof(VAR_8));

 FUNC_0(VAR_9->calib_time);

 return (VAR_9);
}
