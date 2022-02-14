
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct tegra_xhci_softc {int dev; int clk_xusb_ss; int clk_xusb_falcon_src; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct tegra_xhci_softc *VAR_2, uint32_t VAR_3, uint32_t VAR_4,
    uint32_t *VAR_5, uint32_t *VAR_6)
{
 uint64_t VAR_7;
 int VAR_8;


 *VAR_6 = VAR_4;
 switch (VAR_3) {
 case 136:
 case 141:
  VAR_8 = FUNC_1(VAR_2->clk_xusb_falcon_src, VAR_4 * 1000ULL,
      0);
  if (VAR_8 == 0) {
   VAR_8 = FUNC_0(VAR_2->clk_xusb_falcon_src, &VAR_7);
   *VAR_6 = (uint32_t)(VAR_7 / 1000);
  }
  *VAR_5 = VAR_8 == 0 ? VAR_0: VAR_1;
  break;

 case 135:
 case 140:
  VAR_8 = FUNC_1(VAR_2->clk_xusb_ss, VAR_4 * 1000ULL,
      0);
  if (VAR_8 == 0) {
   VAR_8 = FUNC_0(VAR_2->clk_xusb_ss, &VAR_7);
   *VAR_6 = (uint32_t)(VAR_7 / 1000);
  }
  *VAR_5 = VAR_8 == 0 ? VAR_0: VAR_1;
  break;

 case 132:

  *VAR_5 = 0;
  break;

 case 131:
 case 130:
  *VAR_5 = VAR_1;
  break;

 case 133:

  *VAR_5 = VAR_0;
  break;


 case 129:
 case 128:

  *VAR_5 = VAR_1;
  break;

 case 139:
 case 138:

  *VAR_5 = VAR_1;
  break;

 case 143:
 case 144:
 case 142:
 case 137:
 case 134:
  FUNC_2(VAR_2->dev,
      "Received unused/unexpected command: %u\n", VAR_3);
  *VAR_5 = 0;
  break;

 default:
  FUNC_2(VAR_2->dev,
      "Received unknown command: %u\n", VAR_3);
 }
}
