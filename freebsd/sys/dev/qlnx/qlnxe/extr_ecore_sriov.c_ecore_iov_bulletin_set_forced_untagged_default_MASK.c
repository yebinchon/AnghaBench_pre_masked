
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* p_virt; } ;
struct ecore_vf_info {scalar_t__ state; TYPE_2__ bulletin; scalar_t__ b_malicious; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int valid_bitmap; int default_only_untagged; } ;


 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ecore_vf_info* FUNC_2 (struct ecore_hwfn*,int ,int) ;

enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_6,
            bool VAR_7,
            int VAR_8)
{
 struct ecore_vf_info *VAR_9;
 u64 VAR_10;

 VAR_9 = FUNC_2(VAR_6, (u16)VAR_8, 1);
 if (!VAR_9) {
  FUNC_0(VAR_6->p_dev, 1,
     "Can not set untagged default, invalid vfid [%d]\n",
     VAR_8);
  return VAR_0;
 }
 if (VAR_9->b_malicious) {
  FUNC_0(VAR_6->p_dev, 0,
     "Can't set untagged default to malicious VF [%d]\n",
     VAR_8);
  return VAR_0;
 }




 if (VAR_9->state == VAR_5) {
  FUNC_1(VAR_6, VAR_1,
      "Can't support untagged change for vfid[%d] - VF is already active\n",
      VAR_8);
  return VAR_0;
 }




 VAR_10 = (1 << VAR_3) |
    (1 << VAR_4);
 VAR_9->bulletin.p_virt->valid_bitmap |= VAR_10;

 VAR_9->bulletin.p_virt->default_only_untagged = VAR_7 ? 1
           : 0;

 return VAR_2;
}
