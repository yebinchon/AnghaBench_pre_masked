
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_m2s_desc_pref_conf {void* pref_thr; void* min_burst_above_thr; void* min_burst_below_thr; void* max_desc_per_packet; int sch_mode; void* desc_fifo_depth; } ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int desc_pref_cfg_3; int desc_pref_cfg_2; int desc_pref_cfg_1; } ;
struct TYPE_5__ {TYPE_1__ m2s_rd; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 void* FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;

int FUNC_2(struct al_udma *VAR_12,
    struct al_udma_m2s_desc_pref_conf *VAR_13)
{
 uint32_t VAR_14;

 VAR_14 = FUNC_1(&VAR_12->udma_regs->m2s.m2s_rd.desc_pref_cfg_1);
 VAR_13->desc_fifo_depth =
     FUNC_0(VAR_14, VAR_2,
   VAR_3);

 VAR_14 = FUNC_1(&VAR_12->udma_regs->m2s.m2s_rd.desc_pref_cfg_2);
 if (VAR_14 & VAR_4)
  VAR_13->sch_mode = VAR_0;
 else
  VAR_13->sch_mode = VAR_1;
 VAR_13->max_desc_per_packet =
     FUNC_0(VAR_14,
   VAR_4,
   VAR_5);

 VAR_14 = FUNC_1(&VAR_12->udma_regs->m2s.m2s_rd.desc_pref_cfg_3);

 VAR_13->min_burst_below_thr =
     FUNC_0(VAR_14,
   VAR_8,
   VAR_9);

 VAR_13->min_burst_above_thr =
     FUNC_0(VAR_14,
   VAR_6,
   VAR_7);

 VAR_13->pref_thr = FUNC_0(VAR_14,
    VAR_10,
    VAR_11);
 return 0;
}
