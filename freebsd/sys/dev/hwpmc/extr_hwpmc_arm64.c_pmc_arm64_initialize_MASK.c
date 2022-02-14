
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_mdep {int pmd_npmc; int pmd_switch_out; int pmd_switch_in; int pmd_intr; struct pmc_classdep* pmd_classdep; int pmd_cputype; } ;
struct pmc_classdep {int pcd_num; int pcd_ri; int pcd_width; int pcd_write_pmc; int pcd_stop_pmc; int pcd_start_pmc; int pcd_release_pmc; int pcd_read_pmc; int pcd_get_config; int pcd_describe; int pcd_pcpu_init; int pcd_pcpu_fini; int pcd_config_pmc; int pcd_allocate_pmc; int pcd_class; int pcd_caps; } ;
struct arm64_cpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,char*,int) ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 () ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 () ;
 struct pmc_mdep* FUNC_4 (int) ;

struct pmc_mdep *
FUNC_5()
{
 struct pmc_mdep *VAR_30;
 struct pmc_classdep *VAR_31;
 int VAR_32;
 int VAR_33;

 VAR_33 = FUNC_1();
 VAR_19 = (VAR_33 & VAR_8) >> VAR_9;
 VAR_32 = (VAR_33 & VAR_6) >> VAR_7;

 FUNC_0(VAR_2, VAR_1, 1, "arm64-init npmcs=%d", VAR_19);





 VAR_20 = FUNC_2(sizeof(struct arm64_cpu *) * FUNC_3(),
  VAR_3, VAR_4 | VAR_5);


 VAR_30 = FUNC_4(1);

 switch (VAR_32) {
 case 129:
 case 128:
  VAR_30->pmd_cputype = VAR_12;
  break;
 default:
 case 130:
  VAR_30->pmd_cputype = VAR_11;
  break;
 }

 VAR_31 = &VAR_30->pmd_classdep[VAR_13];
 VAR_31->pcd_caps = VAR_0;
 VAR_31->pcd_class = VAR_10;
 VAR_31->pcd_num = VAR_19;
 VAR_31->pcd_ri = VAR_30->pmd_npmc;
 VAR_31->pcd_width = 32;

 VAR_31->pcd_allocate_pmc = VAR_14;
 VAR_31->pcd_config_pmc = VAR_15;
 VAR_31->pcd_pcpu_fini = VAR_21;
 VAR_31->pcd_pcpu_init = VAR_22;
 VAR_31->pcd_describe = VAR_16;
 VAR_31->pcd_get_config = VAR_17;
 VAR_31->pcd_read_pmc = VAR_23;
 VAR_31->pcd_release_pmc = VAR_24;
 VAR_31->pcd_start_pmc = VAR_25;
 VAR_31->pcd_stop_pmc = VAR_26;
 VAR_31->pcd_write_pmc = VAR_29;

 VAR_30->pmd_intr = VAR_18;
 VAR_30->pmd_switch_in = VAR_27;
 VAR_30->pmd_switch_out = VAR_28;

 VAR_30->pmd_npmc += VAR_19;

 return (VAR_30);
}
