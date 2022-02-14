
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port; scalar_t__ b_update_port; } ;
struct TYPE_3__ {int port; scalar_t__ b_update_port; } ;
struct ecore_tunnel_info {TYPE_2__ geneve_port; TYPE_1__ vxlan_port; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_tunnel_info*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_0,
     struct ecore_ptt *VAR_1,
     struct ecore_tunnel_info *VAR_2)
{
 if (FUNC_1(VAR_0->p_dev)) {
  FUNC_0(VAR_0, 1,
     "A0 chip: tunnel hw config is not supported\n");
  return;
 }

 if (VAR_2->vxlan_port.b_update_port)
  FUNC_4(VAR_0, VAR_1,
       VAR_2->vxlan_port.port);

 if (VAR_2->geneve_port.b_update_port)
  FUNC_2(VAR_0, VAR_1,
        VAR_2->geneve_port.port);

 FUNC_3(VAR_0, VAR_1, VAR_2);
}
