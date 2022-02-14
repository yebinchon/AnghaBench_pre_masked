
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_q {TYPE_2__* q_regs; } ;
struct al_udma_m2s_q_dwrr_conf {int max_deficit_cnt_sz; scalar_t__ strict; int axi_qos; int q_qos; int weight; } ;
struct TYPE_3__ {int dwrr_cfg_3; int dwrr_cfg_2; int dwrr_cfg_1; } ;
struct TYPE_4__ {TYPE_1__ m2s_q; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_udma_q *VAR_6,
     struct al_udma_m2s_q_dwrr_conf *VAR_7)
{
 uint32_t VAR_8 = FUNC_0(&VAR_6->q_regs->m2s_q.dwrr_cfg_1);

 VAR_8 &= ~VAR_1;
 VAR_8 |= VAR_7->max_deficit_cnt_sz &
  VAR_1;
 if (VAR_7->strict == VAR_0)
  VAR_8 |= VAR_2;
 else
  VAR_8 &= ~VAR_2;
 FUNC_1(&VAR_6->q_regs->m2s_q.dwrr_cfg_1, VAR_8);

 VAR_8 = FUNC_0(&VAR_6->q_regs->m2s_q.dwrr_cfg_2);
 VAR_8 &= ~VAR_3;
 VAR_8 |= (VAR_7->axi_qos << VAR_4) &
     VAR_3;
 VAR_8 &= ~VAR_3;
 VAR_8 |= VAR_7->q_qos & VAR_3;
 FUNC_1(&VAR_6->q_regs->m2s_q.dwrr_cfg_2, VAR_8);

 VAR_8 = FUNC_0(&VAR_6->q_regs->m2s_q.dwrr_cfg_3);
 VAR_8 &= ~VAR_5;
 VAR_8 |= VAR_7->weight & VAR_5;
 FUNC_1(&VAR_6->q_regs->m2s_q.dwrr_cfg_3, VAR_8);

 return 0;
}
