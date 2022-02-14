
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snps_dwc3_softc {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snps_dwc3_softc*,int ) ;
 int FUNC_1 (struct snps_dwc3_softc*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct snps_dwc3_softc *VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_2);
 if (FUNC_2(VAR_8->node, "snps,dis-u2-freeclk-exists-quirk"))
  VAR_9 &= ~VAR_5;
 else
  VAR_9 |= VAR_5;
 if (FUNC_2(VAR_8->node, "snps,dis_u2_susphy_quirk"))
  VAR_9 &= ~VAR_4;
 else
  VAR_9 |= VAR_4;
 if (FUNC_2(VAR_8->node, "snps,dis_enblslpm_quirk"))
  VAR_9 &= ~VAR_3;
 else
  VAR_9 |= VAR_3;

 FUNC_1(VAR_8, VAR_2, VAR_9);

 VAR_9 = FUNC_0(VAR_8, VAR_0);
 if (FUNC_2(VAR_8->node, "snps,dis-tx-ipgap-linecheck-quirk"))
  VAR_9 |= VAR_1;
 FUNC_1(VAR_8, VAR_0, VAR_9);

 if (FUNC_2(VAR_8->node, "snps,dis-del-phy-power-chg-quirk")) {
  VAR_9 = FUNC_0(VAR_8, VAR_6);
  VAR_9 |= VAR_7;
  FUNC_1(VAR_8, VAR_6, VAR_9);
 }
}
