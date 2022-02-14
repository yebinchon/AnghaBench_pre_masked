
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int b_mode_enabled; } ;
struct TYPE_9__ {int b_mode_enabled; } ;
struct TYPE_8__ {int b_mode_enabled; } ;
struct TYPE_7__ {int b_mode_enabled; } ;
struct TYPE_6__ {int b_mode_enabled; } ;
struct ecore_tunnel_info {TYPE_5__ ip_geneve; TYPE_4__ l2_geneve; TYPE_3__ vxlan; TYPE_2__ ip_gre; TYPE_1__ l2_gre; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_0,
       struct ecore_ptt *VAR_1,
       struct ecore_tunnel_info *VAR_2)
{
 FUNC_1(VAR_0, VAR_1, VAR_2->l2_gre.b_mode_enabled,
        VAR_2->ip_gre.b_mode_enabled);
 FUNC_2(VAR_0, VAR_1, VAR_2->vxlan.b_mode_enabled);

 FUNC_0(VAR_0, VAR_1, VAR_2->l2_geneve.b_mode_enabled,
    VAR_2->ip_geneve.b_mode_enabled);
}
