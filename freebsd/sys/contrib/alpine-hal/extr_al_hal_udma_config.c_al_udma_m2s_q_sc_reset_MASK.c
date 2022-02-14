
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_q {TYPE_2__* q_regs; } ;
struct TYPE_3__ {int dwrr_sw_ctrl; } ;
struct TYPE_4__ {TYPE_1__ m2s_q; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct al_udma_q *VAR_1)
{
 uint32_t VAR_2 = FUNC_0(&VAR_1->q_regs->m2s_q.dwrr_sw_ctrl);

 VAR_2 |= VAR_0;
 FUNC_1(&VAR_1->q_regs->m2s_q.dwrr_sw_ctrl, VAR_2);

 return 0;
}
