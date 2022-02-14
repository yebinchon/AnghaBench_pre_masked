
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct nvme_qpair {int num_failures; int num_retries; int num_intr_handler_calls; int num_cmds; int cq_head; int sq_tail; int sq_head; int num_trackers; int num_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct nvme_qpair*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct nvme_qpair *VAR_5,
    struct sysctl_ctx_list *VAR_6, struct sysctl_oid *VAR_7)
{
 struct sysctl_oid_list *VAR_8 = FUNC_3(VAR_7);

 FUNC_2(VAR_6, VAR_8, VAR_3, "num_entries",
     VAR_0, &VAR_5->num_entries, 0,
     "Number of entries in hardware queue");
 FUNC_2(VAR_6, VAR_8, VAR_3, "num_trackers",
     VAR_0, &VAR_5->num_trackers, 0,
     "Number of trackers pre-allocated for this queue pair");
 FUNC_2(VAR_6, VAR_8, VAR_3, "sq_head",
     VAR_0, &VAR_5->sq_head, 0,
     "Current head of submission queue (as observed by driver)");
 FUNC_2(VAR_6, VAR_8, VAR_3, "sq_tail",
     VAR_0, &VAR_5->sq_tail, 0,
     "Current tail of submission queue (as observed by driver)");
 FUNC_2(VAR_6, VAR_8, VAR_3, "cq_head",
     VAR_0, &VAR_5->cq_head, 0,
     "Current head of completion queue (as observed by driver)");

 FUNC_1(VAR_6, VAR_8, VAR_3, "num_cmds",
     VAR_0, &VAR_5->num_cmds, "Number of commands submitted");
 FUNC_1(VAR_6, VAR_8, VAR_3, "num_intr_handler_calls",
     VAR_0, &VAR_5->num_intr_handler_calls,
     "Number of times interrupt handler was invoked (will typically be "
     "less than number of actual interrupts generated due to "
     "coalescing)");
 FUNC_1(VAR_6, VAR_8, VAR_3, "num_retries",
     VAR_0, &VAR_5->num_retries, "Number of commands retried");
 FUNC_1(VAR_6, VAR_8, VAR_3, "num_failures",
     VAR_0, &VAR_5->num_failures,
     "Number of commands ending in failure after all retries");

 FUNC_0(VAR_6, VAR_8, VAR_3,
     "dump_debug", VAR_2 | VAR_1, VAR_5, 0,
     VAR_4, "IU", "Dump debug data");
}
