
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_7__ {int cnt; scalar_t__ iov_cnt; scalar_t__ free_cnt; scalar_t__ free_cnt_iov; scalar_t__ orig; scalar_t__ iov_orig; } ;
struct ecore_igu_info {int b_allow_pf_vf_change; scalar_t__ igu_dsb_id; TYPE_3__ usage; struct ecore_igu_block* entry; } ;
struct ecore_igu_block {int status; int function_id; int is_pf; int vector_number; } ;
struct TYPE_5__ {struct ecore_igu_info* p_igu_info; } ;
struct ecore_hwfn {int rel_pf_id; TYPE_4__* p_dev; TYPE_1__ hw_info; } ;
struct TYPE_8__ {TYPE_2__* p_iov_info; } ;
struct TYPE_6__ {scalar_t__ total_vfs; int first_vf_in_pf; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int,int) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,scalar_t__,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,int ) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__) ;

int FUNC_9(struct ecore_hwfn *VAR_12,
       struct ecore_ptt *VAR_13)
{
 struct ecore_igu_info *VAR_14 = VAR_12->hw_info.p_igu_info;
 struct ecore_igu_block *VAR_15;
 int VAR_16, VAR_17;
 u16 VAR_18;
 u32 VAR_19, VAR_20;

 if (!FUNC_5(VAR_12, VAR_6)) {




  VAR_14->b_allow_pf_vf_change = 0;
 } else {



  VAR_14->b_allow_pf_vf_change = 1;

  if (VAR_14->usage.cnt != FUNC_5(VAR_12, VAR_6) - 1) {
   FUNC_0(VAR_12,
    "MFW notifies of 0x%04x PF SBs; IGU indicates of only 0x%04x\n",
    FUNC_5(VAR_12, VAR_6) - 1,
    VAR_14->usage.cnt);
   VAR_14->usage.cnt = FUNC_5(VAR_12, VAR_6) - 1;
  }


  if (FUNC_4(VAR_12)) {
   u16 VAR_21 = VAR_12->p_dev->p_iov_info->total_vfs;

   if (VAR_21 != VAR_14->usage.iov_cnt)
    FUNC_2(VAR_12, VAR_5,
        "0x%04x VF SBs in IGU CAM != PCI configuration 0x%04x\n",
        VAR_14->usage.iov_cnt, VAR_21);





   if (VAR_21 > VAR_14->usage.free_cnt +
      VAR_14->usage.free_cnt_iov -
      VAR_14->usage.cnt) {
    FUNC_1(VAR_12, 1,
       "Not enough SBs for VFs - 0x%04x SBs, from which %04x PFs and %04x are required\n",
       VAR_14->usage.free_cnt +
       VAR_14->usage.free_cnt_iov,
       VAR_14->usage.cnt, VAR_21);
    return VAR_4;
   }
  }
 }


 if (FUNC_4(VAR_12))
  VAR_14->usage.iov_cnt = VAR_12->p_dev->p_iov_info->total_vfs;


 VAR_14->usage.free_cnt = VAR_14->usage.cnt;
 VAR_14->usage.free_cnt_iov = VAR_14->usage.iov_cnt;
 VAR_14->usage.orig = VAR_14->usage.cnt;
 VAR_14->usage.iov_orig = VAR_14->usage.iov_cnt;




 VAR_16 = VAR_14->usage.cnt;
 VAR_17 = VAR_14->usage.iov_cnt;

 for (VAR_18 = VAR_14->igu_dsb_id;
      VAR_18 < FUNC_3(VAR_12->p_dev);
      VAR_18++) {
  VAR_15 = &VAR_14->entry[VAR_18];
  VAR_19 = 0;

  if (!(VAR_15->status & VAR_3))
   continue;

  if (VAR_15->status & VAR_0) {
   VAR_15->function_id = VAR_12->rel_pf_id;
   VAR_15->is_pf = 1;
   VAR_15->vector_number = 0;
   VAR_15->status = VAR_3 |
       VAR_2 |
       VAR_0;
  } else if (VAR_16) {
   VAR_16--;
   VAR_15->function_id = VAR_12->rel_pf_id;
   VAR_15->is_pf = 1;
   VAR_15->vector_number = VAR_14->usage.cnt - VAR_16;
   VAR_15->status = VAR_3 |
       VAR_2 |
       VAR_1;
  } else if (VAR_17) {
   VAR_15->function_id =
    VAR_12->p_dev->p_iov_info->first_vf_in_pf +
    VAR_14->usage.iov_cnt - VAR_17;
   VAR_15->is_pf = 0;
   VAR_15->vector_number = 0;
   VAR_15->status = VAR_3 |
       VAR_1;
   VAR_17--;
  } else {
   VAR_15->function_id = 0;
   VAR_15->is_pf = 0;
   VAR_15->vector_number = 0;
  }

  FUNC_6(VAR_19, VAR_7,
     VAR_15->function_id);
  FUNC_6(VAR_19, VAR_8, VAR_15->is_pf);
  FUNC_6(VAR_19, VAR_10,
     VAR_15->vector_number);


  FUNC_6(VAR_19, VAR_9, VAR_15->is_pf);

  VAR_20 = FUNC_7(VAR_12, VAR_13,
    VAR_11 +
    sizeof(u32) * VAR_18);

  if (VAR_20 != VAR_19) {
   FUNC_8(VAR_12, VAR_13,
     VAR_11 +
     sizeof(u32) * VAR_18,
     VAR_19);

   FUNC_2(VAR_12, VAR_5,
       "IGU reset: [SB 0x%04x] func_id = %d is_pf = %d vector_num = 0x%x [%08x -> %08x]\n",
       VAR_18, VAR_15->function_id,
       VAR_15->is_pf, VAR_15->vector_number,
       VAR_20, VAR_19);
  }
 }

 return 0;
}
