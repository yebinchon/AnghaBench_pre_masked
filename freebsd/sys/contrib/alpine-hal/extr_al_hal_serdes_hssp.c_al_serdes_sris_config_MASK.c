
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_serdes_sris_params {int ppm_drift_count; int ppm_drift_max; int synth_ppm_drift_max; int full_d2r1; int full_pcie_g3; int rd_threshold_d2r1; int rd_threshold_pcie_g3; } ;
struct al_serdes_grp_obj {int dummy; } ;


 int FUNC_0 (int,int) ;
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
 int FUNC_1 (struct al_serdes_grp_obj*,int ,int ,int ,int ,int) ;
 int FUNC_2 (struct al_serdes_grp_obj*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(
 struct al_serdes_grp_obj *VAR_21,
 void *VAR_22)
{
 struct al_serdes_sris_params *VAR_23 = VAR_22;

 FUNC_2(VAR_21, VAR_0, VAR_2,
  VAR_15,
  (VAR_23->ppm_drift_count & FUNC_0(7, 0)) >> 0);
 FUNC_2(VAR_21, VAR_0, VAR_2,
  VAR_16,
  (VAR_23->ppm_drift_count & FUNC_0(15, 8)) >> 8);

 FUNC_2(VAR_21, VAR_0, VAR_2,
  VAR_17,
  (VAR_23->ppm_drift_max & FUNC_0(7, 0)) >> 0);
 FUNC_2(VAR_21, VAR_0, VAR_2,
  VAR_18,
  (VAR_23->ppm_drift_max & FUNC_0(15, 8)) >> 8);

 FUNC_2(VAR_21, VAR_0, VAR_2,
  VAR_19,
  (VAR_23->synth_ppm_drift_max & FUNC_0(7, 0)) >> 0);
 FUNC_2(VAR_21, VAR_0, VAR_2,
  VAR_20,
  (VAR_23->synth_ppm_drift_max & FUNC_0(15, 8)) >> 8);

 FUNC_1(VAR_21, VAR_0, VAR_1,
  VAR_4,
  VAR_3,
  (VAR_23->full_d2r1)
   << VAR_5);

 FUNC_1(VAR_21, VAR_0, VAR_1,
  VAR_7,
  VAR_6,
  (VAR_23->full_pcie_g3)
   << VAR_8);

 FUNC_1(VAR_21, VAR_0, VAR_1,
  VAR_10,
  VAR_9,
  (VAR_23->rd_threshold_d2r1)
   << VAR_11);

 FUNC_1(VAR_21, VAR_0, VAR_1,
  VAR_13,
  VAR_12,
  (VAR_23->rd_threshold_pcie_g3)
   << VAR_14);
}
