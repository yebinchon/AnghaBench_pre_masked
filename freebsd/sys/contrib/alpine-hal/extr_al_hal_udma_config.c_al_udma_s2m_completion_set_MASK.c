
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_s2m_completion_conf {int desc_size; scalar_t__ cnt_words; scalar_t__ q_promotion; scalar_t__ force_rr; int q_free_min; int comp_fifo_depth; int unack_fifo_depth; int timeout; } ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int cfg_application_ack; int cfg_2c; int cfg_1c; } ;
struct TYPE_5__ {TYPE_1__ s2m_comp; } ;
struct TYPE_6__ {TYPE_2__ s2m; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_udma *VAR_10,
    struct al_udma_s2m_completion_conf *VAR_11)
{
 uint32_t VAR_12 = FUNC_0(&VAR_10->udma_regs->s2m.s2m_comp.cfg_1c);
 VAR_12 &= ~VAR_2;
 VAR_12 |= VAR_11->desc_size & VAR_2;
 if (VAR_11->cnt_words == VAR_0)
  VAR_12 |= VAR_1;
 else
  VAR_12 &= ~VAR_1;
 if (VAR_11->q_promotion == VAR_0)
  VAR_12 |= VAR_6;
 else
  VAR_12 &= ~VAR_6;
 if (VAR_11->force_rr == VAR_0)
  VAR_12 |= VAR_3;
 else
  VAR_12 &= ~VAR_3;
 VAR_12 &= ~VAR_4;
 VAR_12 |= (VAR_11->q_free_min << VAR_5) &
  VAR_4;
 FUNC_1(&VAR_10->udma_regs->s2m.s2m_comp.cfg_1c, VAR_12);

 VAR_12 = FUNC_0(&VAR_10->udma_regs->s2m.s2m_comp.cfg_2c);
 VAR_12 &= ~VAR_7;
 VAR_12 |= VAR_11->comp_fifo_depth
    & VAR_7;
 VAR_12 &= ~VAR_8;
 VAR_12 |= (VAR_11->unack_fifo_depth
   << VAR_9) &
   VAR_8;
 FUNC_1(&VAR_10->udma_regs->s2m.s2m_comp.cfg_2c, VAR_12);

 FUNC_1(&VAR_10->udma_regs->s2m.s2m_comp.cfg_application_ack,
         VAR_11->timeout);
 return 0;
}
