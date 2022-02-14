
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snps_dwc3_softc {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snps_dwc3_softc*,int ) ;
 int FUNC_2 (struct snps_dwc3_softc*,int ,int) ;
 int FUNC_3 (int ,char*,void**) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct snps_dwc3_softc *VAR_4)
{
 char *VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_5 = ((void*)0);
 VAR_7 = FUNC_3(VAR_4->node, "phy_type", (void **)&VAR_5);
 if (VAR_7 <= 0)
  return;

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (FUNC_4(VAR_5, "utmi_wide", 9) == 0) {
  VAR_6 &= ~(VAR_1 | FUNC_0(0xf));
  VAR_6 |= VAR_1 |
   FUNC_0(VAR_2);
 } else {
  VAR_6 &= ~(VAR_1 | FUNC_0(0xf));
  VAR_6 |= VAR_1 |
   FUNC_0(VAR_3);
 }
 FUNC_2(VAR_4, VAR_0, VAR_6);
}
