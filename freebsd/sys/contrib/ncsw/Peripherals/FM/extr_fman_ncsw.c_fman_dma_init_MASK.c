
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_dma_regs {int fmdmebcr; int fmdmwcr; int fmdmsetr; int fmdmhy; int fmdmtr; int fmdmmr; int fmdmemsr; int fmdmsr; } ;
struct fman_cfg {int dma_cache_override; int exceptions; int dma_axi_dbg_num_of_beats; int dma_emergency_bus_select; int dma_emergency_level; int dma_emergency_switch_counter; int dma_cam_num_of_entries; int dma_dbg_cnt_mode; int dma_aid_mode; int dma_sos_emergency; int dma_watchdog; int clk_freq; int cam_base_addr; scalar_t__ dma_write_buf_tsh_clr_emer; scalar_t__ dma_read_buf_tsh_clr_emer; scalar_t__ dma_comm_qtsh_clr_emer; scalar_t__ dma_write_buf_tsh_asrt_emer; scalar_t__ dma_read_buf_tsh_asrt_emer; scalar_t__ dma_comm_qtsh_asrt_emer; scalar_t__ pedantic_dma; scalar_t__ dma_en_emergency_smoother; scalar_t__ dma_en_emergency; scalar_t__ dma_stop_on_bus_error; scalar_t__ dma_aid_override; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

int FUNC_2(struct fman_dma_regs *VAR_24, struct fman_cfg *VAR_25)
{
 uint32_t VAR_26;






 VAR_26 = (VAR_14 | VAR_16 |
   VAR_17 | VAR_15);
 FUNC_1(FUNC_0(&VAR_24->fmdmsr) | VAR_26,
   &VAR_24->fmdmsr);


 VAR_26 = 0;
 VAR_26 |= VAR_25->dma_cache_override << VAR_6;
 if (VAR_25->dma_aid_override)
  VAR_26 |= VAR_2;
 if (VAR_25->exceptions & VAR_20)
  VAR_26 |= VAR_5;
 if ((VAR_25->exceptions & VAR_23) |
  (VAR_25->exceptions & VAR_22) |
  (VAR_25->exceptions & VAR_21))
  VAR_26 |= VAR_9;
 if (VAR_25->dma_stop_on_bus_error)
  VAR_26 |= VAR_12;
 if(VAR_25->dma_axi_dbg_num_of_beats)
     VAR_26 |= (uint32_t)(VAR_3 &
             ((VAR_25->dma_axi_dbg_num_of_beats - 1) << VAR_4));

 if (VAR_25->dma_en_emergency) {
  VAR_26 |= VAR_25->dma_emergency_bus_select;
  VAR_26 |= VAR_25->dma_emergency_level << VAR_10;
 if (VAR_25->dma_en_emergency_smoother)
  FUNC_1(VAR_25->dma_emergency_switch_counter,
    &VAR_24->fmdmemsr);
 }
 VAR_26 |= ((VAR_25->dma_cam_num_of_entries / VAR_0) - 1) <<
   VAR_7;
 VAR_26 |= VAR_13;
 VAR_26 |= VAR_25->dma_dbg_cnt_mode << VAR_8;
 VAR_26 |= VAR_25->dma_aid_mode << VAR_1;

 if (VAR_25->pedantic_dma)
  VAR_26 |= VAR_11;

 FUNC_1(VAR_26, &VAR_24->fmdmmr);


 VAR_26 = ((uint32_t)VAR_25->dma_comm_qtsh_asrt_emer <<
   VAR_18) |
   ((uint32_t)VAR_25->dma_read_buf_tsh_asrt_emer <<
   VAR_19) |
   ((uint32_t)VAR_25->dma_write_buf_tsh_asrt_emer);

 FUNC_1(VAR_26, &VAR_24->fmdmtr);


 VAR_26 = ((uint32_t)VAR_25->dma_comm_qtsh_clr_emer <<
  VAR_18) |
  ((uint32_t)VAR_25->dma_read_buf_tsh_clr_emer <<
  VAR_19) |
  ((uint32_t)VAR_25->dma_write_buf_tsh_clr_emer);

 FUNC_1(VAR_26, &VAR_24->fmdmhy);


 FUNC_1(VAR_25->dma_sos_emergency, &VAR_24->fmdmsetr);


 FUNC_1((VAR_25->dma_watchdog * VAR_25->clk_freq),
   &VAR_24->fmdmwcr);

 FUNC_1(VAR_25->cam_base_addr, &VAR_24->fmdmebcr);

 return 0;
}
