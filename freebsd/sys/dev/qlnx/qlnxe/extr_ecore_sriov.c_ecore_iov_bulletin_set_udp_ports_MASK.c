
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_4__ {TYPE_1__* p_virt; } ;
struct ecore_vf_info {TYPE_2__ bulletin; scalar_t__ b_malicious; } ;
struct ecore_hwfn {int p_dev; } ;
struct TYPE_3__ {void* geneve_udp_port; void* vxlan_udp_port; } ;


 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 struct ecore_vf_info* FUNC_2 (struct ecore_hwfn*,void*,int) ;

void FUNC_3(struct ecore_hwfn *VAR_1,
          int VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct ecore_vf_info *VAR_5;

 VAR_5 = FUNC_2(VAR_1, (u16)VAR_2, 1);
 if (!VAR_5) {
  FUNC_0(VAR_1->p_dev, 1,
     "Can not set udp ports, invalid vfid [%d]\n", VAR_2);
  return;
 }

 if (VAR_5->b_malicious) {
  FUNC_1(VAR_1, VAR_0,
      "Can not set udp ports to malicious VF [%d]\n",
      VAR_2);
  return;
 }

 VAR_5->bulletin.p_virt->vxlan_udp_port = VAR_3;
 VAR_5->bulletin.p_virt->geneve_udp_port = VAR_4;
}
