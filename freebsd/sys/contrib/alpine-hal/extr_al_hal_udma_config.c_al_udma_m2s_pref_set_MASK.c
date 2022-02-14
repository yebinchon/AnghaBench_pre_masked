
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_m2s_desc_pref_conf {int desc_fifo_depth; scalar_t__ sch_mode; int max_desc_per_packet; int min_burst_below_thr; int min_burst_above_thr; int pref_thr; int data_fifo_depth; int max_pkt_limit; } ;
struct al_udma {TYPE_3__* udma_regs; int name; } ;
struct TYPE_4__ {int data_cfg; int desc_pref_cfg_3; int desc_pref_cfg_2; int desc_pref_cfg_1; } ;
struct TYPE_5__ {TYPE_1__ m2s_rd; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
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
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct al_udma *VAR_14,
    struct al_udma_m2s_desc_pref_conf *VAR_15)
{
 uint32_t VAR_16;

 VAR_16 = FUNC_1(&VAR_14->udma_regs->m2s.m2s_rd.desc_pref_cfg_1);
 VAR_16 &= ~VAR_6;
 VAR_16 |= VAR_15->desc_fifo_depth;
 FUNC_2(&VAR_14->udma_regs->m2s.m2s_rd.desc_pref_cfg_1, VAR_16);

 VAR_16 = FUNC_1(&VAR_14->udma_regs->m2s.m2s_rd.desc_pref_cfg_2);

 if (VAR_15->sch_mode == VAR_1)
  VAR_16 |= VAR_8;
 else if (VAR_15->sch_mode == VAR_2)
  VAR_16 &= ~VAR_8;
 else {
  FUNC_0("udma [%s]: requested descriptor preferch arbiter "
   "mode (%d) is invalid\n", VAR_14->name, VAR_15->sch_mode);
  return -VAR_0;
 }
 VAR_16 &= ~VAR_7;
 VAR_16 |= VAR_15->max_desc_per_packet &
  VAR_7;
 FUNC_2(&VAR_14->udma_regs->m2s.m2s_rd.desc_pref_cfg_2, VAR_16);

 VAR_16 = FUNC_1(&VAR_14->udma_regs->m2s.m2s_rd.desc_pref_cfg_3);
 VAR_16 &= ~VAR_11;
 VAR_16 |= VAR_15->min_burst_below_thr &
  VAR_11;

 VAR_16 &= ~VAR_9;
 VAR_16 |=(VAR_15->min_burst_above_thr <<
        VAR_10) &
  VAR_9;

 VAR_16 &= ~VAR_12;
 VAR_16 |= (VAR_15->pref_thr <<
   VAR_13) &
  VAR_12;

 FUNC_2(&VAR_14->udma_regs->m2s.m2s_rd.desc_pref_cfg_3, VAR_16);

 VAR_16 = FUNC_1(&VAR_14->udma_regs->m2s.m2s_rd.data_cfg);
 VAR_16 &= ~VAR_3;
 VAR_16 |= VAR_15->data_fifo_depth &
   VAR_3;

 VAR_16 &= ~VAR_4;
 VAR_16 |= (VAR_15->max_pkt_limit
   << VAR_5) &
  VAR_4;
 FUNC_2(&VAR_14->udma_regs->m2s.m2s_rd.data_cfg, VAR_16);

 return 0;
}
