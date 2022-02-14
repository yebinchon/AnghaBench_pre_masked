
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {int hw_mac_addr; } ;
struct ecore_hwfn {TYPE_2__ hw_info; int rel_pf_id; struct ecore_dev* p_dev; } ;
struct ecore_dev {int mf_bits; TYPE_1__* p_llh_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {scalar_t__ num_ppfid; } ;


 int FUNC_0 (struct ecore_dev*,int,char*) ;
 scalar_t__ FUNC_1 (struct ecore_dev*) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ecore_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_5 (struct ecore_dev*,int ,int ) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_8(struct ecore_hwfn *VAR_3,
       struct ecore_ptt *VAR_4,
       bool VAR_5)
{
 struct ecore_dev *VAR_6 = VAR_3->p_dev;
 u8 VAR_7, VAR_8;
 enum _ecore_status_t VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_6->p_llh_info->num_ppfid; VAR_7++) {
  u32 VAR_10;

  VAR_9 = FUNC_4(VAR_6, VAR_7, &VAR_8);
  if (VAR_9 != VAR_1)
   return VAR_9;

  VAR_10 = VAR_2 + VAR_8 * 0x4;
  FUNC_7(VAR_3, VAR_4, VAR_10, VAR_3->rel_pf_id);
 }

 if (FUNC_3(VAR_0, &VAR_6->mf_bits) &&
     !FUNC_2(VAR_3)) {
  VAR_9 = FUNC_5(VAR_6, 0,
           VAR_3->hw_info.hw_mac_addr);
  if (VAR_9 != VAR_1)
   FUNC_0(VAR_6, 0,
      "Failed to add an LLH filter with the primary MAC\n");
 }

 if (FUNC_1(VAR_6)) {
  VAR_9 = FUNC_6(VAR_3, VAR_4, VAR_5);
  if (VAR_9 != VAR_1)
   return VAR_9;
 }

 return VAR_1;
}
