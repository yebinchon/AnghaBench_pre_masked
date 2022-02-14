
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_s2m_data_write_conf {int data_fifo_depth; int max_pkt_limit; int fifo_margin; int desc_wait_timer; int flags; } ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int data_cfg_2; int data_cfg_1; } ;
struct TYPE_5__ {TYPE_1__ s2m_wr; } ;
struct TYPE_6__ {TYPE_2__ s2m; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_udma *VAR_11,
    struct al_udma_s2m_data_write_conf *VAR_12)
{
 uint32_t VAR_13;

 VAR_13 = FUNC_0(&VAR_11->udma_regs->s2m.s2m_wr.data_cfg_1);
 VAR_13 &= ~VAR_0;
 VAR_13 |= VAR_12->data_fifo_depth &
   VAR_0;
 VAR_13 &= ~VAR_3;
 VAR_13 |= (VAR_12->max_pkt_limit <<
    VAR_4) &
   VAR_3;
 VAR_13 &= ~VAR_1;
 VAR_13 |= (VAR_12->fifo_margin <<
    VAR_2) &
   VAR_1;
 FUNC_1(&VAR_11->udma_regs->s2m.s2m_wr.data_cfg_1, VAR_13);

 VAR_13 = FUNC_0(&VAR_11->udma_regs->s2m.s2m_wr.data_cfg_2);
 VAR_13 &= ~VAR_5;
 VAR_13 |= VAR_12->desc_wait_timer &
   VAR_5;
 VAR_13 &= ~(VAR_7 |
   VAR_9 |
   VAR_10 |
   VAR_8 |
   VAR_6);
 VAR_13 |= VAR_12->flags &
  (VAR_7 |
   VAR_9 |
   VAR_10 |
   VAR_8 |
   VAR_6);
 FUNC_1(&VAR_11->udma_regs->s2m.s2m_wr.data_cfg_2, VAR_13);

 return 0;
}
