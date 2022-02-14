
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ixl_vf {int vf_num; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ixl_pf*,char*,int ) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct ixl_pf*,struct ixl_vf*) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct ixl_pf *VAR_1, struct ixl_vf *VAR_2)
{
 struct i40e_hw *VAR_3;
 uint32_t VAR_4;

 VAR_3 = &VAR_1->hw;

 FUNC_1(VAR_1, "Resetting VF-%d\n", VAR_2->vf_num);

 VAR_4 = FUNC_4(VAR_3, FUNC_0(VAR_2->vf_num));
 VAR_4 |= VAR_0;
 FUNC_5(VAR_3, FUNC_0(VAR_2->vf_num), VAR_4);
 FUNC_2(VAR_3);

 FUNC_3(VAR_1, VAR_2);

 FUNC_1(VAR_1, "Resetting VF-%d done.\n", VAR_2->vf_num);
}
