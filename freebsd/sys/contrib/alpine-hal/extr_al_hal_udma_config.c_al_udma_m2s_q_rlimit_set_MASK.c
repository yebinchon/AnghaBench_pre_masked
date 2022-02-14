
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udma_rlimit_common {int dummy; } ;
struct al_udma_q {TYPE_2__* q_regs; } ;
struct al_udma_m2s_rlimit_cfg {int dummy; } ;
struct TYPE_3__ {struct udma_rlimit_common rlimit; } ;
struct TYPE_4__ {TYPE_1__ m2s_q; } ;


 int FUNC_0 (struct udma_rlimit_common*,struct al_udma_m2s_rlimit_cfg*) ;

int FUNC_1(struct al_udma_q *VAR_0,
    struct al_udma_m2s_rlimit_cfg *VAR_1)
{
 struct udma_rlimit_common *VAR_2 = &VAR_0->q_regs->m2s_q.rlimit;

 return FUNC_0(VAR_2, VAR_1);
}
