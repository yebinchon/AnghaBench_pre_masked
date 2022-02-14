
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_m2s_dwrr_conf {scalar_t__ enable_dwrr; scalar_t__ pkt_mode; int weight; int inc_factor; int deficit_init_val; } ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int ctrl_deficit_cnt; int cfg_sched; } ;
struct TYPE_5__ {TYPE_1__ m2s_dwrr; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_udma *VAR_8,
     struct al_udma_m2s_dwrr_conf *VAR_9)
{
 uint32_t VAR_10 = FUNC_0(&VAR_8->udma_regs->m2s.m2s_dwrr.cfg_sched);

 if (VAR_9->enable_dwrr == VAR_0)
  VAR_10 |= VAR_1;
 else
  VAR_10 &= ~VAR_1;

 if (VAR_9->pkt_mode == VAR_0)
  VAR_10 |= VAR_4;
 else
  VAR_10 &= ~VAR_4;

 VAR_10 &= ~VAR_5;
 VAR_10 |= VAR_9->weight << VAR_6;
 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_9->inc_factor << VAR_3;
 FUNC_1(&VAR_8->udma_regs->m2s.m2s_dwrr.cfg_sched, VAR_10);

 VAR_10 = FUNC_0(&VAR_8->udma_regs->m2s.m2s_dwrr.ctrl_deficit_cnt);
 VAR_10 &= ~VAR_7;
 VAR_10 |= VAR_9->deficit_init_val;
 FUNC_1(&VAR_8->udma_regs->m2s.m2s_dwrr.ctrl_deficit_cnt, VAR_10);

 return 0;
}
