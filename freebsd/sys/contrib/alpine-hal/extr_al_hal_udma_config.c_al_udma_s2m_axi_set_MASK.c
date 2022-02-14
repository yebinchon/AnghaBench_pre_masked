
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_s2m_axi_conf {scalar_t__ break_on_max_boundary; int min_axi_beats; int ostand_max_desc_read; int ack_fifo_depth; int ostand_max_data_req; int ostand_max_data_write; int ostand_max_comp_req; int ostand_max_comp_write; int comp_write; int desc_read; int data_write; } ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int ostand_cfg_wr; int ostand_cfg_rd; int desc_wr_cfg_1; int desc_rd_cfg_3; int comp_wr_cfg_2; int comp_wr_cfg_1; int desc_rd_cfg_5; int desc_rd_cfg_4; int data_wr_cfg; int data_wr_cfg_2; int data_wr_cfg_1; } ;
struct TYPE_5__ {TYPE_1__ axi_s2m; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *,int *) ;

int FUNC_3(struct al_udma *VAR_14,
    struct al_udma_s2m_axi_conf *VAR_15)
{

 uint32_t VAR_16;

 FUNC_2(&VAR_15->data_write,
          &VAR_14->udma_regs->s2m.axi_s2m.data_wr_cfg_1,
          &VAR_14->udma_regs->s2m.axi_s2m.data_wr_cfg_2,
          &VAR_14->udma_regs->s2m.axi_s2m.data_wr_cfg);

 FUNC_2(&VAR_15->desc_read,
          &VAR_14->udma_regs->s2m.axi_s2m.desc_rd_cfg_4,
          &VAR_14->udma_regs->s2m.axi_s2m.desc_rd_cfg_5,
          &VAR_14->udma_regs->s2m.axi_s2m.desc_rd_cfg_3);

 FUNC_2(&VAR_15->comp_write,
          &VAR_14->udma_regs->s2m.axi_s2m.comp_wr_cfg_1,
          &VAR_14->udma_regs->s2m.axi_s2m.comp_wr_cfg_2,
          &VAR_14->udma_regs->s2m.axi_s2m.desc_wr_cfg_1);

 VAR_16 = FUNC_0(&VAR_14->udma_regs->s2m.axi_s2m.desc_rd_cfg_3);
 if (VAR_15->break_on_max_boundary == VAR_0)
  VAR_16 |= VAR_1;
 else
  VAR_16 &= ~VAR_1;
 FUNC_1(&VAR_14->udma_regs->s2m.axi_s2m.desc_rd_cfg_3, VAR_16);

 VAR_16 = FUNC_0(&VAR_14->udma_regs->s2m.axi_s2m.desc_wr_cfg_1);
 VAR_16 &= ~VAR_2;
 VAR_16 |= (VAR_15->min_axi_beats <<
   VAR_3) &
  VAR_2;
 FUNC_1(&VAR_14->udma_regs->s2m.axi_s2m.desc_wr_cfg_1, VAR_16);

 VAR_16 = FUNC_0(&VAR_14->udma_regs->s2m.axi_s2m.ostand_cfg_rd);
 VAR_16 &= ~VAR_4;
 VAR_16 |= VAR_15->ostand_max_desc_read &
   VAR_4;

 VAR_16 &= ~VAR_5;
 VAR_16 |= (VAR_15->ack_fifo_depth <<
   VAR_6) &
  VAR_5;

 FUNC_1(&VAR_14->udma_regs->s2m.axi_s2m.ostand_cfg_rd, VAR_16);

 VAR_16 = FUNC_0(&VAR_14->udma_regs->s2m.axi_s2m.ostand_cfg_wr);
 VAR_16 &= ~VAR_13;
 VAR_16 |= VAR_15->ostand_max_data_req &
   VAR_13;
 VAR_16 &= ~VAR_11;
 VAR_16 |= (VAR_15->ostand_max_data_write <<
  VAR_12) &
  VAR_11;
 VAR_16 &= ~VAR_9;
 VAR_16 |= (VAR_15->ostand_max_comp_req <<
   VAR_10) &
  VAR_9;
 VAR_16 &= ~VAR_7;
 VAR_16 |= (VAR_15->ostand_max_comp_write <<
  VAR_8) &
  VAR_7;
 FUNC_1(&VAR_14->udma_regs->s2m.axi_s2m.ostand_cfg_wr, VAR_16);
 return 0;
}
