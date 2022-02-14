
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xt_tgchk_param {TYPE_1__* target; struct xt_NFQ_info_v2* targinfo; } ;
struct xt_NFQ_info_v2 {int queues_total; int queuenum; int bypass; } ;
struct TYPE_2__ {int revision; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_0)
{
 const struct xt_NFQ_info_v2 *VAR_1 = VAR_0->targinfo;
 u32 VAR_2;

 if (VAR_1->queues_total == 0) {
  FUNC_0("NFQUEUE: number of total queues is 0\n");
  return 0;
 }
 VAR_2 = VAR_1->queues_total - 1 + VAR_1->queuenum;
 if (VAR_2 > 0xffff) {
  FUNC_0("NFQUEUE: number of queues (%u) out of range (got %u)\n",
         VAR_1->queues_total, VAR_2);
  return 0;
 }
 if (VAR_0->target->revision == 2 && VAR_1->bypass > 1)
  return 0;
 return 1;
}
