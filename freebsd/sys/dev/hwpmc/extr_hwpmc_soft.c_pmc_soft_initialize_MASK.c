
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soft_cpu {int dummy; } ;
struct pmc_mdep {int pmd_npmc; struct pmc_classdep* pmd_classdep; } ;
struct pmc_classdep {int pcd_width; int pcd_stop_pmc; int pcd_start_pmc; int pcd_release_pmc; int pcd_write_pmc; int pcd_read_pmc; int pcd_pcpu_fini; int pcd_pcpu_init; int * pcd_get_msr; int pcd_get_config; int pcd_describe; int pcd_config_pmc; int pcd_allocate_pmc; int pcd_ri; scalar_t__ pcd_num; int pcd_class; int pcd_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 () ;
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

void
FUNC_2(struct pmc_mdep *VAR_19)
{
 struct pmc_classdep *VAR_20;


 VAR_11 = FUNC_0(sizeof(struct soft_cpu *) * FUNC_1(), VAR_0,
     VAR_2|VAR_1);

 VAR_20 = &VAR_19->pmd_classdep[VAR_3];

 VAR_20->pcd_caps = VAR_5;
 VAR_20->pcd_class = VAR_4;
 VAR_20->pcd_num = VAR_6;
 VAR_20->pcd_ri = VAR_19->pmd_npmc;
 VAR_20->pcd_width = 64;

 VAR_20->pcd_allocate_pmc = VAR_7;
 VAR_20->pcd_config_pmc = VAR_8;
 VAR_20->pcd_describe = VAR_9;
 VAR_20->pcd_get_config = VAR_10;
 VAR_20->pcd_get_msr = ((void*)0);
 VAR_20->pcd_pcpu_init = VAR_13;
 VAR_20->pcd_pcpu_fini = VAR_12;
 VAR_20->pcd_read_pmc = VAR_14;
 VAR_20->pcd_write_pmc = VAR_18;
 VAR_20->pcd_release_pmc = VAR_15;
 VAR_20->pcd_start_pmc = VAR_16;
 VAR_20->pcd_stop_pmc = VAR_17;

 VAR_19->pmd_npmc += VAR_6;
}
