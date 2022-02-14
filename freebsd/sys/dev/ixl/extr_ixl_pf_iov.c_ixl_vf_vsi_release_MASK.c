
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int seid; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int FUNC_0 (struct i40e_hw*,int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct ixl_pf *VAR_0, struct ixl_vsi *VAR_1)
{
 struct i40e_hw *VAR_2;

 VAR_2 = &VAR_0->hw;

 if (VAR_1->seid == 0)
  return;

 FUNC_0(VAR_2, VAR_1->seid, ((void*)0));
}
