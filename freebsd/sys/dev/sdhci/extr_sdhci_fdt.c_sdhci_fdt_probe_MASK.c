
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_fdt_softc {int quirks; int num_slots; int no_18v; int wp_inverted; void* max_clk; int sdma_boundary; } ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef int device_t ;
typedef int cid ;
struct TYPE_2__ {int ocd_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,void**,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sdhci_fdt_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7)
{
 struct sdhci_fdt_softc *VAR_8 = FUNC_2(VAR_7);
 phandle_t VAR_9;
 pcell_t VAR_10;

 VAR_8->quirks = 0;
 VAR_8->num_slots = 1;
 VAR_8->max_clk = 0;

 if (!FUNC_6(VAR_7))
  return (VAR_0);

 switch (FUNC_5(VAR_7, VAR_6)->ocd_data) {
 case 132:
  VAR_8->quirks = VAR_3;
  FUNC_3(VAR_7, "ARMADA38X SDHCI controller");
  break;
 case 131:
  FUNC_3(VAR_7, "generic fdt SDHCI controller");
  break;
 case 130:
  VAR_8->quirks = VAR_2 |
      VAR_4;
  VAR_8->sdma_boundary = VAR_1;
  FUNC_3(VAR_7, "Qualcomm FDT SDHCI controller");
  break;
 case 129:
  FUNC_3(VAR_7, "Rockchip RK3399 fdt SDHCI controller");
  break;
 case 128:
  VAR_8->quirks = VAR_5;
  FUNC_3(VAR_7, "Zynq-7000 generic fdt SDHCI controller");
  break;
 default:
  return (VAR_0);
 }

 VAR_9 = FUNC_4(VAR_7);


 if ((FUNC_0(VAR_9, "quirks", &VAR_10, sizeof(VAR_10))) > 0)
  VAR_8->quirks = VAR_10;
 if ((FUNC_0(VAR_9, "num-slots", &VAR_10, sizeof(VAR_10))) > 0)
  VAR_8->num_slots = VAR_10;
 if ((FUNC_0(VAR_9, "max-frequency", &VAR_10, sizeof(VAR_10))) > 0)
  VAR_8->max_clk = VAR_10;
 if (FUNC_1(VAR_9, "no-1-8-v"))
  VAR_8->no_18v = 1;
 if (FUNC_1(VAR_9, "wp-inverted"))
  VAR_8->wp_inverted = 1;

 return (0);
}
