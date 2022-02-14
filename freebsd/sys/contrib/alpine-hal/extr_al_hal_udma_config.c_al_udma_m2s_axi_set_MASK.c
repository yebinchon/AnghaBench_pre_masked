
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_m2s_axi_conf {scalar_t__ break_on_max_boundary; int min_axi_beats; int ostand_max_data_read; int ostand_max_desc_read; int ostand_max_comp_req; int ostand_max_comp_write; int desc_read; int data_read; int comp_write; } ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int ostand_cfg; int desc_wr_cfg_1; int data_rd_cfg; int desc_rd_cfg_3; int desc_rd_cfg_2; int desc_rd_cfg_1; int data_rd_cfg_2; int data_rd_cfg_1; int comp_wr_cfg_2; int comp_wr_cfg_1; } ;
struct TYPE_5__ {TYPE_1__ axi_m2s; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *,int *) ;

int FUNC_3(struct al_udma *VAR_11,
     struct al_udma_m2s_axi_conf *VAR_12)
{
 uint32_t VAR_13;

 FUNC_2(&VAR_12->comp_write,
          &VAR_11->udma_regs->m2s.axi_m2s.comp_wr_cfg_1,
          &VAR_11->udma_regs->m2s.axi_m2s.comp_wr_cfg_2,
          &VAR_11->udma_regs->m2s.axi_m2s.desc_wr_cfg_1);

 FUNC_2(&VAR_12->data_read,
          &VAR_11->udma_regs->m2s.axi_m2s.data_rd_cfg_1,
          &VAR_11->udma_regs->m2s.axi_m2s.data_rd_cfg_2,
          &VAR_11->udma_regs->m2s.axi_m2s.data_rd_cfg);

 FUNC_2(&VAR_12->desc_read,
          &VAR_11->udma_regs->m2s.axi_m2s.desc_rd_cfg_1,
          &VAR_11->udma_regs->m2s.axi_m2s.desc_rd_cfg_2,
          &VAR_11->udma_regs->m2s.axi_m2s.desc_rd_cfg_3);

 VAR_13 = FUNC_0(&VAR_11->udma_regs->m2s.axi_m2s.data_rd_cfg);
 if (VAR_12->break_on_max_boundary == VAR_0)
  VAR_13 |= VAR_1;
 else
  VAR_13 &= ~VAR_1;
 FUNC_1(&VAR_11->udma_regs->m2s.axi_m2s.data_rd_cfg, VAR_13);

 VAR_13 = FUNC_0(&VAR_11->udma_regs->m2s.axi_m2s.desc_wr_cfg_1);
 VAR_13 &= ~VAR_2;
 VAR_13 |= (VAR_12->min_axi_beats <<
   VAR_3) &
  VAR_2;
 FUNC_1(&VAR_11->udma_regs->m2s.axi_m2s.desc_wr_cfg_1, VAR_13);

 VAR_13 = FUNC_0(&VAR_11->udma_regs->m2s.axi_m2s.ostand_cfg);
 VAR_13 &= ~VAR_8;
 VAR_13 |= VAR_12->ostand_max_data_read &
   VAR_8;
 VAR_13 &= ~VAR_9;
 VAR_13 |= (VAR_12->ostand_max_desc_read <<
   VAR_10) &
  VAR_9;
 VAR_13 &= ~VAR_6;
 VAR_13 |= (VAR_12->ostand_max_comp_req <<
   VAR_7) &
  VAR_6;
 VAR_13 &= ~VAR_4;
 VAR_13 |= (VAR_12->ostand_max_comp_write <<
   VAR_5) &
  VAR_4;
 FUNC_1(&VAR_11->udma_regs->m2s.axi_m2s.ostand_cfg, VAR_13);
 return 0;
}
