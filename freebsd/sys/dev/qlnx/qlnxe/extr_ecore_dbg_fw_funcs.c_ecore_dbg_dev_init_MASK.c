
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {int initialized; int* mode_enable; scalar_t__ num_regs_read; int use_dmae; void* platform_id; int chip_id; } ;
struct ecore_hwfn {int p_dev; struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int VAR_19 ;

__attribute__((used)) static enum dbg_status FUNC_8(struct ecore_hwfn *VAR_20,
            struct ecore_ptt *VAR_21)
{
 struct dbg_tools_data *VAR_22 = &VAR_20->dbg_info;

 if (VAR_22->initialized)
  return VAR_4;

 if (!VAR_19)
  return VAR_3;

 if (FUNC_4(VAR_20->p_dev)) {
  VAR_22->chip_id = VAR_1;
  VAR_22->mode_enable[VAR_9] = 1;
 }
 else if (FUNC_5(VAR_20->p_dev)) {
  VAR_22->chip_id = VAR_2;
  VAR_22->mode_enable[VAR_13] = 1;
 }
 else if (FUNC_3(VAR_20->p_dev)) {
  VAR_22->chip_id = VAR_0;
  VAR_22->mode_enable[VAR_8] = 1;
 }
 else {
  return VAR_5;
 }





 if (FUNC_0(VAR_20->p_dev)) {
  VAR_22->platform_id = VAR_14;
  VAR_22->mode_enable[VAR_7] = 1;
 }
 else if (FUNC_1(VAR_20->p_dev)) {
  if (FUNC_7(VAR_20, VAR_21, VAR_6) & 0x20000000) {
   VAR_22->platform_id = VAR_15;
   VAR_22->mode_enable[VAR_10] = 1;
  }
  else {
   VAR_22->platform_id = VAR_16;
   VAR_22->mode_enable[VAR_11] = 1;
  }
 }
 else if (FUNC_2(VAR_20->p_dev)) {
  VAR_22->platform_id = VAR_17;
  VAR_22->mode_enable[VAR_12] = 1;
 }
 else {
  return VAR_5;
 }



 FUNC_6(VAR_20);

 VAR_22->use_dmae = VAR_18;
 VAR_22->num_regs_read = 0;
 VAR_22->initialized = 1;

 return VAR_4;
}
