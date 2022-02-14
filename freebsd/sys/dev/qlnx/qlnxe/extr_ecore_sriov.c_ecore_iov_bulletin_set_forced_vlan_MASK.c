
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {TYPE_1__* p_virt; } ;
struct ecore_vf_info {TYPE_2__ bulletin; scalar_t__ b_malicious; } ;
struct ecore_hwfn {int p_dev; } ;
struct TYPE_3__ {int valid_bitmap; scalar_t__ pvid; } ;


 int FUNC_0 (int ,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 struct ecore_vf_info* FUNC_2 (struct ecore_hwfn*,scalar_t__,int) ;

void FUNC_3(struct ecore_hwfn *VAR_1,
     u16 VAR_2, int VAR_3)
{
 struct ecore_vf_info *VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_2(VAR_1, (u16)VAR_3, 1);
 if (!VAR_4) {
  FUNC_0(VAR_1->p_dev, 1, "Can not set forced MAC, invalid vfid [%d]\n",
     VAR_3);
  return;
 }
 if (VAR_4->b_malicious) {
  FUNC_0(VAR_1->p_dev, 0,
     "Can't set forced vlan to malicious VF [%d]\n",
     VAR_3);
  return;
 }

 VAR_5 = 1 << VAR_0;
 VAR_4->bulletin.p_virt->pvid = VAR_2;
 if (VAR_2)
  VAR_4->bulletin.p_virt->valid_bitmap |= VAR_5;
 else
  VAR_4->bulletin.p_virt->valid_bitmap &= ~VAR_5;

 FUNC_1(VAR_1, VAR_4, VAR_5);
}
