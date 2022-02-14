
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_5__ {int cclk; } ;
struct TYPE_6__ {TYPE_1__ vpd; int rev; } ;
struct TYPE_7__ {TYPE_2__ params; int tunq_coalesce; int port_types; int fw_version; int dev; } ;
typedef TYPE_3__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int ,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_4 (int ) ;
 int VAR_3 ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;

void
FUNC_7(adapter_t *VAR_5)
{
 struct sysctl_ctx_list *VAR_6;
 struct sysctl_oid_list *VAR_7;

 VAR_6 = FUNC_5(VAR_5->dev);
 VAR_7 = FUNC_4(FUNC_6(VAR_5->dev));


 FUNC_1(VAR_6, VAR_7, VAR_2,
     "firmware_version",
     VAR_0, VAR_5->fw_version,
     0, "firmware version");
 FUNC_2(VAR_6, VAR_7, VAR_2,
     "hw_revision",
     VAR_0, &VAR_5->params.rev,
     0, "chip model");
 FUNC_1(VAR_6, VAR_7, VAR_2,
     "port_types",
     VAR_0, VAR_5->port_types,
     0, "type of ports");
 FUNC_0(VAR_6, VAR_7, VAR_2,
     "enable_debug",
     VAR_1, &VAR_3,
     0, "enable verbose debugging output");
 FUNC_3(VAR_6, VAR_7, VAR_2, "tunq_coalesce",
     VAR_0, &VAR_5->tunq_coalesce,
     "#tunneled packets freed");
 FUNC_0(VAR_6, VAR_7, VAR_2,
     "txq_overrun",
     VAR_0, &VAR_4,
     0, "#times txq overrun");
 FUNC_2(VAR_6, VAR_7, VAR_2,
     "core_clock",
     VAR_0, &VAR_5->params.vpd.cclk,
     0, "core clock frequency (in KHz)");
}
