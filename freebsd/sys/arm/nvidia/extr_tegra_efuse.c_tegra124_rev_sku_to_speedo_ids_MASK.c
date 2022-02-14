
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sku_info {int cpu_speedo_id; int soc_speedo_id; int gpu_speedo_id; int sku_id; } ;
struct tegra_efuse_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct tegra_efuse_softc *VAR_2,
    struct tegra_sku_info *VAR_3, int *VAR_4)
{


 VAR_3->cpu_speedo_id = 0;
 VAR_3->soc_speedo_id = 0;
 VAR_3->gpu_speedo_id = 0;
 *VAR_4 = VAR_0;

 switch (VAR_3->sku_id) {
 case 0x00:
 case 0x0F:
 case 0x23:

  break;
 case 0x83:
  VAR_3->cpu_speedo_id = 2;
  break;

 case 0x1F:
 case 0x87:
 case 0x27:
  VAR_3->cpu_speedo_id = 2;
  VAR_3->soc_speedo_id = 0;
  VAR_3->gpu_speedo_id = 1;
  *VAR_4 = VAR_0;
  break;
 case 0x81:
 case 0x21:
 case 0x07:
  VAR_3->cpu_speedo_id = 1;
  VAR_3->soc_speedo_id = 1;
  VAR_3->gpu_speedo_id = 1;
  *VAR_4 = VAR_1;
  break;
 case 0x49:
 case 0x4A:
 case 0x48:
  VAR_3->cpu_speedo_id = 4;
  VAR_3->soc_speedo_id = 2;
  VAR_3->gpu_speedo_id = 3;
  *VAR_4 = VAR_1;
  break;
 default:
  FUNC_0(VAR_2->dev, " Unknown SKU ID %d\n", VAR_3->sku_id);
  break;
 }
}
