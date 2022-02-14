
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_4__ {int * mbx_comp_msecs; } ;
struct TYPE_5__ {TYPE_1__ hw; int pci_dev; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(qla_host_t *VAR_2)
{
        struct sysctl_ctx_list *VAR_3;
        struct sysctl_oid_list *VAR_4;

        VAR_3 = FUNC_2(VAR_2->pci_dev);
        VAR_4 = FUNC_1(FUNC_3(VAR_2->pci_dev));

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_lt_200ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[0],
  "mbx_completion_time_lt_200ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_200ms_400ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[1],
  "mbx_completion_time_200ms_400ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_400ms_600ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[2],
  "mbx_completion_time_400ms_600ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_600ms_800ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[3],
  "mbx_completion_time_600ms_800ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_800ms_1000ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[4],
  "mbx_completion_time_800ms_1000ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_1000ms_1200ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[5],
  "mbx_completion_time_1000ms_1200ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_1200ms_1400ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[6],
  "mbx_completion_time_1200ms_1400ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_1400ms_1600ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[7],
  "mbx_completion_time_1400ms_1600ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_1600ms_1800ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[8],
  "mbx_completion_time_1600ms_1800ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_1800ms_2000ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[9],
  "mbx_completion_time_1800ms_2000ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_2000ms_2200ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[10],
  "mbx_completion_time_2000ms_2200ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_2200ms_2400ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[11],
  "mbx_completion_time_2200ms_2400ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_2400ms_2600ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[12],
  "mbx_completion_time_2400ms_2600ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_2600ms_2800ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[13],
  "mbx_completion_time_2600ms_2800ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_2800ms_3000ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[14],
  "mbx_completion_time_2800ms_3000ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_3000ms_4000ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[15],
  "mbx_completion_time_3000ms_4000ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_time_4000ms_5000ms",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[16],
  "mbx_completion_time_4000ms_5000ms");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_host_mbx_cntrl_timeout",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[17],
  "mbx_completion_host_mbx_cntrl_timeout");

 FUNC_0(VAR_3, VAR_4,
  VAR_1, "mbx_completion_fw_mbx_cntrl_timeout",
  VAR_0, &VAR_2->hw.mbx_comp_msecs[18],
  "mbx_completion_fw_mbx_cntrl_timeout");
 return;
}
