
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_mdep {int pmd_intr; int pmd_npmc; struct pmc_classdep* pmd_classdep; int pmd_cputype; } ;
struct pmc_classdep {int pcd_width; int pcd_write_pmc; int pcd_stop_pmc; int pcd_start_pmc; int pcd_release_pmc; int pcd_read_pmc; int pcd_get_config; int pcd_describe; int pcd_pcpu_init; int pcd_pcpu_fini; int pcd_config_pmc; int pcd_allocate_pmc; int pcd_ri; scalar_t__ pcd_num; int pcd_class; int pcd_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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

int
FUNC_0(struct pmc_mdep *VAR_17)
{
 struct pmc_classdep *VAR_18;

 VAR_17->pmd_cputype = VAR_1;

 VAR_18 = &VAR_17->pmd_classdep[VAR_2];
 VAR_18->pcd_caps = VAR_3;
 VAR_18->pcd_class = VAR_0;
 VAR_18->pcd_num = VAR_4;
 VAR_18->pcd_ri = VAR_17->pmd_npmc;
 VAR_18->pcd_width = 32;

 VAR_18->pcd_allocate_pmc = VAR_7;
 VAR_18->pcd_config_pmc = VAR_8;
 VAR_18->pcd_pcpu_fini = VAR_10;
 VAR_18->pcd_pcpu_init = VAR_11;
 VAR_18->pcd_describe = VAR_5;
 VAR_18->pcd_get_config = VAR_6;
 VAR_18->pcd_read_pmc = VAR_12;
 VAR_18->pcd_release_pmc = VAR_13;
 VAR_18->pcd_start_pmc = VAR_14;
 VAR_18->pcd_stop_pmc = VAR_15;
  VAR_18->pcd_write_pmc = VAR_16;

 VAR_17->pmd_npmc += VAR_4;
 VAR_17->pmd_intr = VAR_9;

 return (0);
}
