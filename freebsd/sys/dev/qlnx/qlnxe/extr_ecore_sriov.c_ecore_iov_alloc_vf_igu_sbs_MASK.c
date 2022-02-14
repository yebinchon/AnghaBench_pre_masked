
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_vf_info {int abs_vf_id; int* igu_sbs; scalar_t__ num_sbs; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_igu_block {int igu_sb_id; int status; } ;
struct TYPE_6__ {TYPE_2__* p_igu_info; } ;
struct ecore_hwfn {int rel_pf_id; TYPE_3__ hw_info; } ;
struct cau_sb_entry {int dummy; } ;
typedef int osal_uintptr_t ;
struct TYPE_4__ {int free_cnt_iov; } ;
struct TYPE_5__ {TYPE_1__ usage; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,int,int ) ;
 struct ecore_igu_block* FUNC_2 (struct ecore_hwfn*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct cau_sb_entry*,int ,int,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ) ;

__attribute__((used)) static u8 FUNC_5(struct ecore_hwfn *VAR_8,
         struct ecore_ptt *VAR_9,
         struct ecore_vf_info *VAR_10,
         u16 VAR_11)
{
 struct ecore_igu_block *VAR_12;
 struct cau_sb_entry VAR_13;
 int VAR_14 = 0;
 u32 VAR_15 = 0;

 if (VAR_11 > VAR_8->hw_info.p_igu_info->usage.free_cnt_iov)
  VAR_11 =
  (u16)VAR_8->hw_info.p_igu_info->usage.free_cnt_iov;
 VAR_8->hw_info.p_igu_info->usage.free_cnt_iov -= VAR_11;

 FUNC_0(VAR_15, VAR_2, VAR_10->abs_vf_id);
 FUNC_0(VAR_15, VAR_4, 1);
 FUNC_0(VAR_15, VAR_3, 0);

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  VAR_12 = FUNC_2(VAR_8, 0);
  VAR_10->igu_sbs[VAR_14] = VAR_12->igu_sb_id;
  VAR_12->status &= ~VAR_1;
  FUNC_0(VAR_15, VAR_5, VAR_14);

  FUNC_4(VAR_8, VAR_9,
    VAR_6 +
    sizeof(u32) * VAR_12->igu_sb_id, VAR_15);


  FUNC_3(VAR_8, &VAR_13,
     VAR_8->rel_pf_id,
     VAR_10->abs_vf_id, 1);

  FUNC_1(VAR_8, VAR_9,
        (u64)(osal_uintptr_t)&VAR_13,
        VAR_0 +
        VAR_12->igu_sb_id * sizeof(u64), 2,
        VAR_7 );
 }

 VAR_10->num_sbs = (u8)VAR_11;

 return VAR_10->num_sbs;
}
