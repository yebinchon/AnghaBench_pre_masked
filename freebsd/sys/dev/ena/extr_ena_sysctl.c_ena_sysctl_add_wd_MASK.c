
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ena_adapter {int missing_tx_threshold; int missing_tx_max_queues; int missing_tx_timeout; int keep_alive_timeout; int wd_active; int pdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct ena_adapter *VAR_2)
{
 device_t VAR_3;

 struct sysctl_ctx_list *VAR_4;
 struct sysctl_oid *VAR_5;
 struct sysctl_oid_list *VAR_6;

 VAR_3 = VAR_2->pdev;

 VAR_4 = FUNC_4(VAR_3);
 VAR_5 = FUNC_5(VAR_3);
 VAR_6 = FUNC_3(VAR_5);


 FUNC_0(VAR_4, VAR_6, VAR_1, "wd_active",
     VAR_0, &VAR_2->wd_active, 0,
     "Watchdog is active");

 FUNC_1(VAR_4, VAR_6, VAR_1, "keep_alive_timeout",
     VAR_0, &VAR_2->keep_alive_timeout,
     "Timeout for Keep Alive messages");

 FUNC_1(VAR_4, VAR_6, VAR_1, "missing_tx_timeout",
     VAR_0, &VAR_2->missing_tx_timeout,
     "Timeout for TX completion");

 FUNC_2(VAR_4, VAR_6, VAR_1, "missing_tx_max_queues",
     VAR_0, &VAR_2->missing_tx_max_queues, 0,
     "Number of TX queues to check per run");

 FUNC_2(VAR_4, VAR_6, VAR_1, "missing_tx_threshold",
     VAR_0, &VAR_2->missing_tx_threshold, 0,
     "Max number of timeouted packets");
}
