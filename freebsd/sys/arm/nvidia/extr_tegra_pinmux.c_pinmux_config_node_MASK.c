
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_mux {int gpio_num; } ;
struct tegra_grp {int dummy; } ;
struct pinmux_softc {int dev; int mipi_mem_res; } ;
struct pincfg {char* function; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct pinmux_softc*,char*,struct tegra_grp const*,struct pincfg*) ;
 int FUNC_4 (struct pinmux_softc*,char*,struct tegra_mux const*,struct pincfg*) ;
 struct tegra_grp* FUNC_5 (char*) ;
 struct tegra_mux* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(struct pinmux_softc *VAR_1, char *VAR_2, struct pincfg *VAR_3)
{
 const struct tegra_mux *VAR_4;
 const struct tegra_grp *VAR_5;
 uint32_t VAR_6;
 int VAR_7;


 if (FUNC_7(VAR_2, "dsi_b") == 0) {
  if (VAR_3->function == ((void*)0)) {

   return (0);
  }
  VAR_6 = FUNC_0(VAR_1->mipi_mem_res, 0);
  if (FUNC_7(VAR_3->function, "csi") == 0)
   VAR_6 &= ~(1 << 1);
  else if (FUNC_7(VAR_3->function, "dsi_b") == 0)
   VAR_6 |= (1 << 1);
  FUNC_1(VAR_1->mipi_mem_res, 0, VAR_6);
 }


 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 != ((void*)0)) {
  if (VAR_4->gpio_num != -1) {

  }
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_4, VAR_3);
  return (VAR_7);
 }


 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5 != ((void*)0)) {
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_5, VAR_3);
  return (VAR_7);
 }

 FUNC_2(VAR_1->dev, "Unknown pin: %s\n", VAR_2);
 return (VAR_0);
}
