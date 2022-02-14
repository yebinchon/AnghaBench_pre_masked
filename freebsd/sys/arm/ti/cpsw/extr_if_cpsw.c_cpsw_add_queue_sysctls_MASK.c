
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct cpsw_queue {int longest_chain; int queue_restart; int queue_removes; int queue_adds; int max_avail_queue_len; int avail_queue_len; int max_active_queue_len; int active_queue_len; int queue_slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;

__attribute__((used)) static void
FUNC_3(struct sysctl_ctx_list *VAR_2, struct sysctl_oid *VAR_3,
 struct cpsw_queue *VAR_4)
{
 struct sysctl_oid_list *VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 FUNC_0(VAR_2, VAR_5, VAR_1, "totalBuffers",
     VAR_0, &VAR_4->queue_slots, 0,
     "Total buffers currently assigned to this queue");
 FUNC_0(VAR_2, VAR_5, VAR_1, "activeBuffers",
     VAR_0, &VAR_4->active_queue_len, 0,
     "Buffers currently registered with hardware controller");
 FUNC_0(VAR_2, VAR_5, VAR_1, "maxActiveBuffers",
     VAR_0, &VAR_4->max_active_queue_len, 0,
     "Max value of activeBuffers since last driver reset");
 FUNC_0(VAR_2, VAR_5, VAR_1, "availBuffers",
     VAR_0, &VAR_4->avail_queue_len, 0,
     "Buffers allocated to this queue but not currently "
     "registered with hardware controller");
 FUNC_0(VAR_2, VAR_5, VAR_1, "maxAvailBuffers",
     VAR_0, &VAR_4->max_avail_queue_len, 0,
     "Max value of availBuffers since last driver reset");
 FUNC_1(VAR_2, VAR_5, VAR_1, "totalEnqueued",
     VAR_0, &VAR_4->queue_adds, 0,
     "Total buffers added to queue");
 FUNC_1(VAR_2, VAR_5, VAR_1, "totalDequeued",
     VAR_0, &VAR_4->queue_removes, 0,
     "Total buffers removed from queue");
 FUNC_1(VAR_2, VAR_5, VAR_1, "queueRestart",
     VAR_0, &VAR_4->queue_restart, 0,
     "Total times the queue has been restarted");
 FUNC_1(VAR_2, VAR_5, VAR_1, "longestChain",
     VAR_0, &VAR_4->longest_chain, 0,
     "Max buffers used for a single packet");
}
