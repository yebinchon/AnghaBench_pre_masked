
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_7__ {int free_cnt_iov; int iov_cnt; int free_cnt; int cnt; } ;
struct ecore_igu_info {TYPE_2__ usage; struct ecore_igu_block* entry; int b_allow_pf_vf_change; } ;
struct ecore_igu_block {int status; int function_id; int is_pf; int vector_number; } ;
struct TYPE_8__ {int * feat_num; struct ecore_igu_info* p_igu_info; } ;
struct ecore_hwfn {int rel_pf_id; TYPE_3__ hw_info; TYPE_4__* p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_9__ {TYPE_1__* p_iov_info; } ;
struct TYPE_6__ {scalar_t__ first_vf_in_pf; } ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (struct ecore_hwfn*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 struct ecore_igu_block* VAR_16 ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ) ;

enum _ecore_status_t
FUNC_9(struct ecore_hwfn *VAR_17, struct ecore_ptt *VAR_18,
     u16 VAR_19, bool VAR_20)
{
 struct ecore_igu_info *VAR_21 = VAR_17->hw_info.p_igu_info;
 struct ecore_igu_block *VAR_22 = VAR_16;
 u16 VAR_23 = 0, VAR_24 = 0;
 u32 VAR_25 = 0;

 if (FUNC_4(VAR_17->p_dev) || !FUNC_3(VAR_17))
  return VAR_3;

 if (VAR_19 == VAR_8)
  return VAR_3;

 if (!VAR_21->b_allow_pf_vf_change) {
  FUNC_0(VAR_17, "Can't relocate SBs as MFW is too old.\n");
  return VAR_3;
 }




 if (VAR_20) {
  VAR_23 = FUNC_6(VAR_17, VAR_19 + 1);
  if (VAR_23 == VAR_7)
   return VAR_3;
 }




 if (!VAR_20) {
  if (FUNC_6(VAR_17, VAR_19 + 1) !=
      VAR_7)
   return VAR_3;
 }





 for (; VAR_23 < FUNC_2(VAR_17->p_dev);
      VAR_23++) {
  VAR_22 = &VAR_21->entry[VAR_23];

  if (!(VAR_22->status & VAR_2) ||
      !(VAR_22->status & VAR_0) ||
      (!!(VAR_22->status & VAR_1) != VAR_20)) {
   if (VAR_20)
    return VAR_3;
   else
    continue;
  }

  break;
 }

 if (VAR_23 == FUNC_2(VAR_17->p_dev)) {
  FUNC_1(VAR_17, (VAR_4 | VAR_5),
      "Failed to find a free SB to move\n");
  return VAR_3;
 }

 if (VAR_22 == VAR_16) {
  FUNC_1(VAR_17, (VAR_4 | VAR_5),
      "SB address (p_block) is NULL\n");
  return VAR_3;
 }


 if (VAR_20) {
  VAR_22->status &= ~VAR_1;




  VAR_24 = (u16)VAR_17->p_dev->p_iov_info->first_vf_in_pf;

  VAR_22->function_id = (u8)VAR_24;
  VAR_22->is_pf = 0;
  VAR_22->vector_number = 0;

  VAR_21->usage.cnt--;
  VAR_21->usage.free_cnt--;
  VAR_21->usage.iov_cnt++;
  VAR_21->usage.free_cnt_iov++;





  VAR_17->hw_info.feat_num[VAR_6]--;
  VAR_17->hw_info.feat_num[VAR_10]++;
 } else {
  VAR_22->status |= VAR_1;
  VAR_22->function_id = VAR_17->rel_pf_id;
  VAR_22->is_pf = 1;
  VAR_22->vector_number = VAR_19 + 1;

  VAR_21->usage.cnt++;
  VAR_21->usage.free_cnt++;
  VAR_21->usage.iov_cnt--;
  VAR_21->usage.free_cnt_iov--;

  VAR_17->hw_info.feat_num[VAR_6]++;
  VAR_17->hw_info.feat_num[VAR_10]--;
 }


 FUNC_5(VAR_25, VAR_11,
    VAR_22->function_id);
 FUNC_5(VAR_25, VAR_12, VAR_22->is_pf);
 FUNC_5(VAR_25, VAR_13, VAR_22->is_pf);
 FUNC_5(VAR_25, VAR_14,
    VAR_22->vector_number);

 FUNC_8(VAR_17, VAR_18,
   VAR_15 + sizeof(u32) * VAR_23,
   VAR_25);

 FUNC_7(VAR_17, VAR_18, 0,
         VAR_23, VAR_24,
         VAR_22->is_pf ? 0 : 1);

 FUNC_1(VAR_17, VAR_4,
     "Relocation: [SB 0x%04x] func_id = %d is_pf = %d vector_num = 0x%x\n",
     VAR_23, VAR_22->function_id,
     VAR_22->is_pf, VAR_22->vector_number);

 return VAR_9;
}
