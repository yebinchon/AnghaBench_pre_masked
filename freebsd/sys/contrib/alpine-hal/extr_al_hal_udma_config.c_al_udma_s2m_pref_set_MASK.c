
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_s2m_desc_pref_conf {int desc_fifo_depth; scalar_t__ sch_mode; scalar_t__ q_promotion; scalar_t__ force_promotion; scalar_t__ en_pref_prediction; int promotion_th; int pref_thr; int min_burst_below_thr; int min_burst_above_thr; int a_full_thr; } ;
struct al_udma {TYPE_3__* udma_regs; int name; } ;
struct TYPE_4__ {int desc_pref_cfg_4; int desc_pref_cfg_3; int desc_pref_cfg_2; int desc_pref_cfg_1; } ;
struct TYPE_5__ {TYPE_1__ s2m_rd; } ;
struct TYPE_6__ {TYPE_2__ s2m; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct al_udma *VAR_17,
    struct al_udma_s2m_desc_pref_conf *VAR_18)
{
 uint32_t VAR_19;

 VAR_19 = FUNC_1(&VAR_17->udma_regs->s2m.s2m_rd.desc_pref_cfg_1);
 VAR_19 &= ~VAR_4;
 VAR_19 |= VAR_18->desc_fifo_depth;
 FUNC_2(&VAR_17->udma_regs->s2m.s2m_rd.desc_pref_cfg_1, VAR_19);

 VAR_19 = FUNC_1(&VAR_17->udma_regs->s2m.s2m_rd.desc_pref_cfg_2);

 if (VAR_18->sch_mode == VAR_2)
  VAR_19 |= VAR_7;
 else if (VAR_18->sch_mode == VAR_3)
  VAR_19 &= ~VAR_7;
 else {
  FUNC_0("udma [%s]: requested descriptor preferch arbiter "
   "mode (%d) is invalid\n", VAR_17->name, VAR_18->sch_mode);
  return -VAR_1;
 }
 if (VAR_18->q_promotion == VAR_0)
  VAR_19 |= VAR_10;
 else
  VAR_19 &= ~VAR_10;

 if (VAR_18->force_promotion == VAR_0)
  VAR_19 |= VAR_6;
 else
  VAR_19 &= ~VAR_6;

 if (VAR_18->en_pref_prediction == VAR_0)
  VAR_19 |= VAR_5;
 else
  VAR_19 &= ~VAR_5;

 VAR_19 &= ~VAR_8;
 VAR_19 |= (VAR_18->promotion_th
   << VAR_9) &
  VAR_8;

 FUNC_2(&VAR_17->udma_regs->s2m.s2m_rd.desc_pref_cfg_2, VAR_19);

 VAR_19 = FUNC_1(&VAR_17->udma_regs->s2m.s2m_rd.desc_pref_cfg_3);
 VAR_19 &= ~VAR_14;
 VAR_19 |= (VAR_18->pref_thr << VAR_15) &
  VAR_14;

 VAR_19 &= ~VAR_13;
 VAR_19 |= VAR_18->min_burst_below_thr &
  VAR_13;

 VAR_19 &= ~VAR_11;
 VAR_19 |=(VAR_18->min_burst_above_thr <<
        VAR_12) &
  VAR_11;

 FUNC_2(&VAR_17->udma_regs->s2m.s2m_rd.desc_pref_cfg_3, VAR_19);

 VAR_19 = FUNC_1(&VAR_17->udma_regs->s2m.s2m_rd.desc_pref_cfg_4);
 VAR_19 &= ~VAR_16;
 VAR_19 |= VAR_18->a_full_thr & VAR_16;
 FUNC_2(&VAR_17->udma_regs->s2m.s2m_rd.desc_pref_cfg_4, VAR_19);


 return 0;
}
