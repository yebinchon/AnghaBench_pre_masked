
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_6__ {int num_tx_rings; TYPE_1__* xmt; } ;
struct TYPE_7__ {TYPE_2__ hw; int pci_dev; } ;
typedef TYPE_3__ qla_host_t ;
typedef int name_str ;
struct TYPE_5__ {int num_buffers; int switch_pkts; int pkts_dropped; int errors; int total_pkts; int total_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (char*,int) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_7(qla_host_t *VAR_2)
{
        struct sysctl_ctx_list *VAR_3;
        struct sysctl_oid_list *VAR_4;
        struct sysctl_oid_list *VAR_5;
        struct sysctl_oid *VAR_6;
        int VAR_7;
        uint8_t VAR_8[16];

        VAR_3 = FUNC_4(VAR_2->pci_dev);
        VAR_4 = FUNC_2(FUNC_5(VAR_2->pci_dev));

        VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_1, "stats_hw_xmt",
                        VAR_0, ((void*)0), "stats_hw_xmt");
        VAR_4 = FUNC_2(VAR_6);

        for (VAR_7 = 0; VAR_7 < VAR_2->hw.num_tx_rings; VAR_7++) {

                FUNC_3(VAR_8, (sizeof(uint8_t) * sizeof(VAR_8)));
                FUNC_6(VAR_8, sizeof(VAR_8), "%d", VAR_7);

                VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_8,
                        VAR_0, ((void*)0), VAR_8);
                VAR_5 = FUNC_2(VAR_6);



                FUNC_1(VAR_3, VAR_5,
   VAR_1, "total_bytes",
                        VAR_0, &VAR_2->hw.xmt[VAR_7].total_bytes,
                        "total_bytes");

                FUNC_1(VAR_3, VAR_5,
   VAR_1, "total_pkts",
                        VAR_0, &VAR_2->hw.xmt[VAR_7].total_pkts,
                        "total_pkts");

                FUNC_1(VAR_3, VAR_5,
   VAR_1, "errors",
                        VAR_0, &VAR_2->hw.xmt[VAR_7].errors,
                        "errors");

                FUNC_1(VAR_3, VAR_5,
   VAR_1, "pkts_dropped",
                        VAR_0, &VAR_2->hw.xmt[VAR_7].pkts_dropped,
                        "pkts_dropped");

                FUNC_1(VAR_3, VAR_5,
   VAR_1, "switch_pkts",
                        VAR_0, &VAR_2->hw.xmt[VAR_7].switch_pkts,
                        "switch_pkts");

                FUNC_1(VAR_3, VAR_5,
   VAR_1, "num_buffers",
                        VAR_0, &VAR_2->hw.xmt[VAR_7].num_buffers,
                        "num_buffers");
 }

 return;
}
