
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seid; } ;
struct ixl_vf {TYPE_1__ vsi; } ;
struct ixl_pf {int hw; } ;
struct TYPE_4__ {int port_vlan_flags; int valid_sections; } ;
struct i40e_vsi_context {TYPE_2__ info; int seid; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct i40e_vsi_context*,int *) ;

__attribute__((used)) static enum i40e_status_code
FUNC_3(struct ixl_pf *VAR_3, struct ixl_vf *VAR_4)
{
 struct i40e_vsi_context VAR_5;

 VAR_5.seid = VAR_4->vsi.seid;

 FUNC_0(&VAR_5.info, sizeof(VAR_5.info));
 VAR_5.info.valid_sections = FUNC_1(VAR_0);
 VAR_5.info.port_vlan_flags = VAR_2 |
     VAR_1;
 return (FUNC_2(&VAR_3->hw, &VAR_5, ((void*)0)));
}
