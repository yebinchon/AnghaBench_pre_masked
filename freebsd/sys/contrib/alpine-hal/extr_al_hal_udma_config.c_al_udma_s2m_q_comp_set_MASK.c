
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_s2m_q_comp_conf {scalar_t__ en_comp_ring_update; scalar_t__ dis_comp_coal; int comp_timer; int hdr_split_size; scalar_t__ force_hdr_split; scalar_t__ en_hdr_split; int q_qos; } ;
struct al_udma_q {TYPE_2__* q_regs; } ;
struct TYPE_3__ {int qos_cfg; int pkt_cfg; int comp_cfg_2; int comp_cfg; } ;
struct TYPE_4__ {TYPE_1__ s2m_q; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_udma_q *VAR_7,
     struct al_udma_s2m_q_comp_conf *VAR_8)
{
 uint32_t VAR_9 = FUNC_0(&VAR_7->q_regs->s2m_q.comp_cfg);
 if (VAR_8->en_comp_ring_update == VAR_0)
  VAR_9 |= VAR_3;
 else
  VAR_9 &= ~VAR_3;

 if (VAR_8->dis_comp_coal == VAR_0)
  VAR_9 |= VAR_2;
 else
  VAR_9 &= ~VAR_2;

 FUNC_1(&VAR_7->q_regs->s2m_q.comp_cfg, VAR_9);

 FUNC_1(&VAR_7->q_regs->s2m_q.comp_cfg_2, VAR_8->comp_timer);

 VAR_9 = FUNC_0(&VAR_7->q_regs->s2m_q.pkt_cfg);

 VAR_9 &= ~VAR_6;
 VAR_9 |= VAR_8->hdr_split_size & VAR_6;
 if (VAR_8->force_hdr_split == VAR_0)
  VAR_9 |= VAR_5;
 else
  VAR_9 &= ~VAR_5;
 if (VAR_8->en_hdr_split == VAR_0)
  VAR_9 |= VAR_4;
 else
  VAR_9 &= ~VAR_4;

 FUNC_1(&VAR_7->q_regs->s2m_q.pkt_cfg, VAR_9);

 VAR_9 = FUNC_0(&VAR_7->q_regs->s2m_q.qos_cfg);
 VAR_9 &= ~VAR_1;
 VAR_9 |= VAR_8->q_qos & VAR_1;
 FUNC_1(&VAR_7->q_regs->s2m_q.qos_cfg, VAR_9);

 return 0;
}
