
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ecore_hwfn {TYPE_1__* vf_iov_info; } ;
struct ecore_bulletin_content {int geneve_udp_port; int vxlan_udp_port; } ;
struct TYPE_2__ {struct ecore_bulletin_content bulletin_shadow; } ;



void FUNC_0(struct ecore_hwfn *VAR_0,
         u16 *VAR_1,
         u16 *VAR_2)
{
 struct ecore_bulletin_content *VAR_3;

 VAR_3 = &VAR_0->vf_iov_info->bulletin_shadow;

 *VAR_1 = VAR_3->vxlan_udp_port;
 *VAR_2 = VAR_3->geneve_udp_port;
}
