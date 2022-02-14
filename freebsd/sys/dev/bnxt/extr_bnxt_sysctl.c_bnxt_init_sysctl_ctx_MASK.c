
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_ctx_list {int dummy; } ;
struct bnxt_softc {int flow_ctrl_ctx; void* flow_ctrl_oid; int dev; int hw_lro_ctx; void* hw_lro_oid; TYPE_2__* nvm_info; TYPE_1__* ver_info; int hw_stats; void* hw_stats_oid; } ;
struct TYPE_4__ {int nvm_ctx; void* nvm_oid; } ;
struct TYPE_3__ {int ver_ctx; void* ver_oid; } ;


 scalar_t__ FUNC_0 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct bnxt_softc *VAR_3)
{
 struct sysctl_ctx_list *VAR_4;

 FUNC_6(&VAR_3->hw_stats);
 VAR_4 = FUNC_3(VAR_3->dev);
 VAR_3->hw_stats_oid = FUNC_1(VAR_4,
     FUNC_2(FUNC_4(VAR_3->dev)), VAR_2,
     "hwstats", VAR_0, 0, "hardware statistics");
 if (!VAR_3->hw_stats_oid) {
  FUNC_5(&VAR_3->hw_stats);
  return VAR_1;
 }

 FUNC_6(&VAR_3->ver_info->ver_ctx);
 VAR_4 = FUNC_3(VAR_3->dev);
 VAR_3->ver_info->ver_oid = FUNC_1(VAR_4,
     FUNC_2(FUNC_4(VAR_3->dev)), VAR_2,
     "ver", VAR_0, 0, "hardware/firmware version information");
 if (!VAR_3->ver_info->ver_oid) {
  FUNC_5(&VAR_3->ver_info->ver_ctx);
  return VAR_1;
 }

 if (FUNC_0(VAR_3)) {
  FUNC_6(&VAR_3->nvm_info->nvm_ctx);
  VAR_4 = FUNC_3(VAR_3->dev);
  VAR_3->nvm_info->nvm_oid = FUNC_1(VAR_4,
      FUNC_2(FUNC_4(VAR_3->dev)), VAR_2,
      "nvram", VAR_0, 0, "nvram information");
  if (!VAR_3->nvm_info->nvm_oid) {
   FUNC_5(&VAR_3->nvm_info->nvm_ctx);
   return VAR_1;
  }
 }

 FUNC_6(&VAR_3->hw_lro_ctx);
 VAR_4 = FUNC_3(VAR_3->dev);
 VAR_3->hw_lro_oid = FUNC_1(VAR_4,
     FUNC_2(FUNC_4(VAR_3->dev)), VAR_2,
     "hw_lro", VAR_0, 0, "hardware lro");
 if (!VAR_3->hw_lro_oid) {
  FUNC_5(&VAR_3->hw_lro_ctx);
  return VAR_1;
 }

 FUNC_6(&VAR_3->flow_ctrl_ctx);
 VAR_4 = FUNC_3(VAR_3->dev);
 VAR_3->flow_ctrl_oid = FUNC_1(VAR_4,
     FUNC_2(FUNC_4(VAR_3->dev)), VAR_2,
     "fc", VAR_0, 0, "flow ctrl");
 if (!VAR_3->flow_ctrl_oid) {
  FUNC_5(&VAR_3->flow_ctrl_ctx);
  return VAR_1;
 }

 return 0;
}
