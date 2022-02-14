
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sku_info {scalar_t__ soc_speedo_value; scalar_t__ cpu_speedo_value; scalar_t__ gpu_speedo_value; int soc_process_id; int cpu_process_id; int gpu_process_id; void* gpu_iddq_value; void* cpu_iddq_value; void* soc_iddq_value; void* sku_id; } ;
struct tegra_efuse_softc {int dev; } ;


 void* FUNC_0 (struct tegra_efuse_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__** VAR_10 ;
 scalar_t__** VAR_11 ;
 int FUNC_2 (struct tegra_efuse_softc*,struct tegra_sku_info*,int*) ;
 scalar_t__** VAR_12 ;

__attribute__((used)) static void
FUNC_3(struct tegra_efuse_softc *VAR_13, struct tegra_sku_info *VAR_14)
{
 int VAR_15, VAR_16;

 VAR_14->sku_id = FUNC_0(VAR_13, VAR_5);
 VAR_14->soc_iddq_value = FUNC_0(VAR_13, VAR_6);
 VAR_14->cpu_iddq_value = FUNC_0(VAR_13, VAR_1);
 VAR_14->gpu_iddq_value = FUNC_0(VAR_13, VAR_4);
 VAR_14->soc_speedo_value = FUNC_0(VAR_13, VAR_7);
 VAR_14->cpu_speedo_value = FUNC_0(VAR_13, VAR_2);
 VAR_14->gpu_speedo_value = FUNC_0(VAR_13, VAR_3);

 if (VAR_14->cpu_speedo_value == 0) {
  FUNC_1(VAR_13->dev, "CPU Speedo value is not fused.\n");
  return;
 }

 FUNC_2(VAR_13, VAR_14, &VAR_16);

 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  if (VAR_14->soc_speedo_value <
   VAR_12[VAR_16][VAR_15])
   break;
 }
 VAR_14->soc_process_id = VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  if (VAR_14->cpu_speedo_value <
   VAR_10[VAR_16][VAR_15])
    break;
 }
 VAR_14->cpu_process_id = VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  if (VAR_14->gpu_speedo_value <
   VAR_11[VAR_16][VAR_15])
   break;
 }
 VAR_14->gpu_process_id = VAR_15;

}
