
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int b_mode_enabled; scalar_t__ b_update_mode; } ;
struct TYPE_9__ {int b_mode_enabled; scalar_t__ b_update_mode; } ;
struct TYPE_8__ {int b_mode_enabled; scalar_t__ b_update_mode; } ;
struct TYPE_7__ {int b_mode_enabled; scalar_t__ b_update_mode; } ;
struct TYPE_6__ {int b_mode_enabled; scalar_t__ b_update_mode; } ;
struct ecore_tunnel_info {TYPE_5__ ip_geneve; TYPE_4__ l2_geneve; TYPE_3__ ip_gre; TYPE_2__ l2_gre; TYPE_1__ vxlan; } ;



__attribute__((used)) static void
FUNC_0(struct ecore_tunnel_info *VAR_0,
         struct ecore_tunnel_info *VAR_1,
         bool VAR_2)
{
 if (VAR_1->vxlan.b_update_mode || VAR_2)
  VAR_0->vxlan.b_mode_enabled = VAR_1->vxlan.b_mode_enabled;

 if (VAR_1->l2_gre.b_update_mode || VAR_2)
  VAR_0->l2_gre.b_mode_enabled = VAR_1->l2_gre.b_mode_enabled;

 if (VAR_1->ip_gre.b_update_mode || VAR_2)
  VAR_0->ip_gre.b_mode_enabled = VAR_1->ip_gre.b_mode_enabled;

 if (VAR_1->l2_geneve.b_update_mode || VAR_2)
  VAR_0->l2_geneve.b_mode_enabled =
    VAR_1->l2_geneve.b_mode_enabled;

 if (VAR_1->ip_geneve.b_update_mode || VAR_2)
  VAR_0->ip_geneve.b_mode_enabled =
    VAR_1->ip_geneve.b_mode_enabled;
}
