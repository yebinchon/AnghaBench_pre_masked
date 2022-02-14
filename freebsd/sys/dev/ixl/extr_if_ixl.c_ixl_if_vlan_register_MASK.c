
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ixl_vsi {int num_vlans; struct i40e_hw* hw; } ;
struct ixl_pf {struct ixl_vsi vsi; } ;
struct TYPE_2__ {int addr; } ;
struct i40e_hw {TYPE_1__ mac; } ;
typedef int if_ctx_t ;


 struct ixl_pf* FUNC_0 (int ) ;
 int FUNC_1 (struct ixl_vsi*,int ,int) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_0, u16 VAR_1)
{
 struct ixl_pf *VAR_2 = FUNC_0(VAR_0);
 struct ixl_vsi *VAR_3 = &VAR_2->vsi;
 struct i40e_hw *VAR_4 = VAR_3->hw;

 if ((VAR_1 == 0) || (VAR_1 > 4095))
  return;

 ++VAR_3->num_vlans;
 FUNC_1(VAR_3, VAR_4->mac.addr, VAR_1);
}
