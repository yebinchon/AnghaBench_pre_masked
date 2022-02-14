
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmc_mdep {int pmd_npmc; int pmd_switch_out; int pmd_switch_in; int pmd_intr; struct pmc_classdep* pmd_classdep; int pmd_cputype; } ;
struct pmc_classdep {int pcd_num; int pcd_ri; int pcd_write_pmc; int pcd_stop_pmc; int pcd_start_pmc; int pcd_release_pmc; int pcd_read_pmc; int pcd_get_config; int pcd_describe; int pcd_pcpu_init; int pcd_pcpu_fini; int pcd_config_pmc; int pcd_allocate_pmc; int pcd_width; int pcd_class; int pcd_caps; } ;
struct mips_cpu {int dummy; } ;
struct TYPE_2__ {int ps_counter_width; int ps_cpuclass; int ps_capabilities; int ps_cputype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,char*,int) ;
 size_t VAR_5 ;
 int FUNC_1 (int,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 () ;
 struct pmc_mdep* FUNC_3 (int) ;

struct pmc_mdep *
FUNC_4()
{
 struct pmc_mdep *VAR_23;
 struct pmc_classdep *VAR_24;





 VAR_10 = 2;

 FUNC_0(VAR_1,VAR_0,1,"mips-init npmcs=%d", VAR_10);





 VAR_11 = FUNC_1(sizeof(struct mips_cpu *) * FUNC_2(), VAR_2,
      VAR_3|VAR_4);


 VAR_23 = FUNC_3(1);

 VAR_23->pmd_cputype = VAR_15.ps_cputype;

 VAR_24 = &VAR_23->pmd_classdep[VAR_5];
 VAR_24->pcd_caps = VAR_15.ps_capabilities;
 VAR_24->pcd_class = VAR_15.ps_cpuclass;
 VAR_24->pcd_num = VAR_10;
 VAR_24->pcd_ri = VAR_23->pmd_npmc;
 VAR_24->pcd_width = VAR_15.ps_counter_width;

 VAR_24->pcd_allocate_pmc = VAR_6;
 VAR_24->pcd_config_pmc = VAR_7;
 VAR_24->pcd_pcpu_fini = VAR_12;
 VAR_24->pcd_pcpu_init = VAR_13;
 VAR_24->pcd_describe = VAR_8;
 VAR_24->pcd_get_config = VAR_9;
 VAR_24->pcd_read_pmc = VAR_18;
 VAR_24->pcd_release_pmc = VAR_19;
 VAR_24->pcd_start_pmc = VAR_20;
 VAR_24->pcd_stop_pmc = VAR_21;
  VAR_24->pcd_write_pmc = VAR_22;

 VAR_23->pmd_intr = VAR_14;
 VAR_23->pmd_switch_in = VAR_16;
 VAR_23->pmd_switch_out = VAR_17;

 VAR_23->pmd_npmc += VAR_10;

 return (VAR_23);
}
