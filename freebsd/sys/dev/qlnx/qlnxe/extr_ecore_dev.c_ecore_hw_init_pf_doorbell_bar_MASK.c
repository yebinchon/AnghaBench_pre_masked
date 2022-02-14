
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ecore_rdma_pf_params {int roce_edpm_mode; int min_dpis; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {struct ecore_rdma_pf_params rdma_pf_params; } ;
struct ecore_hwfn {int dpi_start_offset; scalar_t__ db_bar_no_edpm; scalar_t__ dcbx_no_edpm; int dpi_count; int dpi_size; scalar_t__ wid_count; int p_dev; TYPE_1__ pf_params; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,char*,int,...) ;
 int FUNC_1 (struct ecore_hwfn*,char*,int,int,int ,int ,char*,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int FUNC_5 () ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_8 (struct ecore_hwfn*,int ) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_13(struct ecore_hwfn *VAR_15,
         struct ecore_ptt *VAR_16)
{
 struct ecore_rdma_pf_params *VAR_17;
 u32 VAR_18, VAR_19;
 u32 VAR_20, VAR_21;
 u32 VAR_22, VAR_23 = 1;
 u32 VAR_24;
 u32 VAR_25;
 enum _ecore_status_t VAR_26 = VAR_10;
 u8 VAR_27;

 VAR_22 = FUNC_9(VAR_15, VAR_16, VAR_0);
 if (FUNC_2(VAR_15->p_dev))
  VAR_22 /= 2;
 VAR_20 = FUNC_8(VAR_15, VAR_13) +
         FUNC_7(VAR_15, VAR_13,
           VAR_11) +
         FUNC_7(VAR_15, VAR_14,
           VAR_11);
 VAR_19 = FUNC_6(VAR_6 * VAR_20, VAR_12);
 VAR_21 = VAR_19 / 4096;
 VAR_18 = VAR_22 - VAR_19;


 if (VAR_22 < VAR_19) {
  FUNC_0(VAR_15->p_dev,
         "Doorbell BAR size 0x%x is too small (normal region is 0x%0x )\n",
         VAR_22, VAR_19);
  return VAR_5;
 }
 if (VAR_18 < VAR_4) {
  FUNC_0(VAR_15->p_dev,
         "PWM region size 0x%0x is too small. Should be at least 0x%0x (Doorbell BAR size is 0x%x and normal region size is 0x%0x)\n",
         VAR_18, VAR_4, VAR_22,
         VAR_19);
  return VAR_5;
 }

 VAR_17 = &VAR_15->pf_params.rdma_pf_params;


 if (FUNC_3(VAR_15))
  VAR_17->roce_edpm_mode = VAR_7;

 if (VAR_17->roce_edpm_mode <= VAR_7) {
  VAR_24 = VAR_17->roce_edpm_mode;
 } else {
  FUNC_0(VAR_15->p_dev,
         "roce edpm mode was configured to an illegal value of %u. Resetting it to 0-Enable EDPM if BAR size is adequate\n",
         VAR_17->roce_edpm_mode);
  VAR_24 = 0;
 }

 if ((VAR_24 == VAR_8) ||
     ((VAR_24 == VAR_9))) {



  VAR_23 = FUNC_5();
  VAR_26 = FUNC_10(VAR_15, VAR_16, VAR_18, VAR_23);
 }

 VAR_27 = ((VAR_26 != VAR_10) &&
  (VAR_24 == VAR_8)) ||
  (VAR_24 == VAR_7);
 if (VAR_27 || VAR_15->dcbx_no_edpm) {




  VAR_23 = 1;
  VAR_26 = FUNC_10(VAR_15, VAR_16, VAR_18, VAR_23);
 }

 VAR_15->wid_count = (u16)VAR_23;


 if (VAR_26 != VAR_10) {

  FUNC_0(VAR_15,
         "Failed to allocate enough DPIs. Allocated %d but the current minimum is set to %d. You can reduce this minimum down to %d via user configuration min_dpis or by disabling EDPM via user configuration roce_edpm_mode\n",
         VAR_15->dpi_count, VAR_17->min_dpis,
         VAR_3);






  FUNC_0(VAR_15,
         "doorbell bar: normal_region_size=%d, pwm_region_size=%d, dpi_size=%d, dpi_count=%d, roce_edpm=%s, page_size=%lu\n",
         VAR_19, VAR_18, VAR_15->dpi_size,
         VAR_15->dpi_count,
         ((VAR_15->dcbx_no_edpm) || (VAR_15->db_bar_no_edpm)) ?
         "disabled" : "enabled", (unsigned long)VAR_12);

  return VAR_5;
 }

 FUNC_1(VAR_15,
  "doorbell bar: normal_region_size=%d, pwm_region_size=%d, dpi_size=%d, dpi_count=%d, roce_edpm=%s, page_size=%lu\n",
  VAR_19, VAR_18, VAR_15->dpi_size, VAR_15->dpi_count,
  ((VAR_15->dcbx_no_edpm) || (VAR_15->db_bar_no_edpm)) ?
  "disabled" : "enabled", (unsigned long)VAR_12);


 VAR_15->dpi_start_offset = VAR_19;






 VAR_25 = FUNC_4(VAR_6 / 4);
 FUNC_12(VAR_15, VAR_16, VAR_1, VAR_25);
 FUNC_12(VAR_15, VAR_16, VAR_2, VAR_21);

 return VAR_10;
}
