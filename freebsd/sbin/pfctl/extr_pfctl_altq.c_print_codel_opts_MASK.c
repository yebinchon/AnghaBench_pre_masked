
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct codel_opts {int target; int interval; scalar_t__ ecn; } ;
struct TYPE_2__ {struct codel_opts codel_opts; } ;
struct pf_altq {TYPE_1__ pq_u; } ;
struct node_queue_opt {int dummy; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(const struct pf_altq *VAR_0, const struct node_queue_opt *VAR_1)
{
 const struct codel_opts *VAR_2;

 VAR_2 = &VAR_0->pq_u.codel_opts;
 if (VAR_2->target || VAR_2->interval || VAR_2->ecn) {
  FUNC_0("codel(");
  if (VAR_2->target)
   FUNC_0(" target %d", VAR_2->target);
  if (VAR_2->interval)
   FUNC_0(" interval %d", VAR_2->interval);
  if (VAR_2->ecn)
   FUNC_0("ecn");
  FUNC_0(" ) ");

  return (1);
 }

 return (0);
}
