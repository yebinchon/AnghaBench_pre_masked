
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udma_rlimit_common {int dummy; } ;
struct al_udma_q {int qid; TYPE_3__* udma; TYPE_2__* q_regs; } ;
typedef enum al_udma_m2s_rlimit_action { ____Placeholder_al_udma_m2s_rlimit_action } al_udma_m2s_rlimit_action ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {struct udma_rlimit_common rlimit; } ;
struct TYPE_5__ {TYPE_1__ m2s_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct udma_rlimit_common*,int) ;

int FUNC_2(struct al_udma_q *VAR_1,
    enum al_udma_m2s_rlimit_action VAR_2)
{
 struct udma_rlimit_common *VAR_3 = &VAR_1->q_regs->m2s_q.rlimit;

 if (FUNC_1(VAR_3, VAR_2) == -VAR_0) {
  FUNC_0("udma [%s %d]: udma stream rate limit invalid action "
    "(%d)\n",
    VAR_1->udma->name, VAR_1->qid, VAR_2);
  return -VAR_0;
 }
 return 0;
}
