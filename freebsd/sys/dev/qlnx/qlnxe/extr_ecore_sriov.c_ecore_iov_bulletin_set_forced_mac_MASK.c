
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* p_virt; } ;
struct ecore_vf_info {TYPE_2__ bulletin; scalar_t__ b_malicious; } ;
struct ecore_hwfn {int p_dev; } ;
struct TYPE_3__ {int valid_bitmap; int mac; } ;


 int FUNC_0 (int ,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 struct ecore_vf_info* FUNC_3 (struct ecore_hwfn*,int ,int) ;

void FUNC_4(struct ecore_hwfn *VAR_3,
           u8 *VAR_4, int VAR_5)
{
 struct ecore_vf_info *VAR_6;
 u64 VAR_7;

 VAR_6 = FUNC_3(VAR_3, (u16)VAR_5, 1);
 if (!VAR_6) {
  FUNC_0(VAR_3->p_dev, 1, "Can not set forced MAC, invalid vfid [%d]\n",
     VAR_5);
  return;
 }
 if (VAR_6->b_malicious) {
  FUNC_0(VAR_3->p_dev, 0, "Can't set forced MAC to malicious VF [%d]\n",
     VAR_5);
  return;
 }

 VAR_7 = 1 << VAR_1;
 FUNC_1(VAR_6->bulletin.p_virt->mac,
      VAR_4, VAR_0);

 VAR_6->bulletin.p_virt->valid_bitmap |= VAR_7;

 VAR_6->bulletin.p_virt->valid_bitmap &=
  ~(1 << VAR_2);

 FUNC_2(VAR_3, VAR_6, VAR_7);
}
