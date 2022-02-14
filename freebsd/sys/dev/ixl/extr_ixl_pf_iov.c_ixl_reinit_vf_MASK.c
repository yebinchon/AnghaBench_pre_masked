
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ seid; } ;
struct ixl_vf {int vf_num; int qtag; TYPE_1__ vsi; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int dev; struct i40e_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct ixl_pf*,TYPE_1__*,int *) ;
 int FUNC_6 (struct i40e_hw*) ;
 int FUNC_7 (struct ixl_pf*,struct ixl_vf*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ixl_pf*,struct ixl_vf*) ;
 int FUNC_10 (struct ixl_pf*,struct ixl_vf*) ;
 int FUNC_11 (struct ixl_pf*,struct ixl_vf*) ;
 int FUNC_12 (struct i40e_hw*,int ) ;
 int FUNC_13 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_14(struct ixl_pf *VAR_5, struct ixl_vf *VAR_6)
{
 struct i40e_hw *VAR_7;
 uint32_t VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = &VAR_5->hw;

 VAR_11 = FUNC_7(VAR_5, VAR_6);
 if (VAR_11 != 0)
  FUNC_4(VAR_5->dev,
      "Timed out waiting for PCIe activity to stop on VF-%d\n",
      VAR_6->vf_num);

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  FUNC_0(10);

  VAR_8 = FUNC_12(VAR_7, FUNC_2(VAR_6->vf_num));
  if (VAR_8 & VAR_0)
   break;
 }

 if (VAR_10 == VAR_2)
  FUNC_4(VAR_5->dev, "VF %d failed to reset\n", VAR_6->vf_num);

 FUNC_13(VAR_7, FUNC_1(VAR_6->vf_num), VAR_3);

 VAR_9 = FUNC_12(VAR_7, FUNC_3(VAR_6->vf_num));
 VAR_9 &= ~VAR_1;
 FUNC_13(VAR_7, FUNC_3(VAR_6->vf_num), VAR_9);

 if (VAR_6->vsi.seid != 0)
  FUNC_5(VAR_5, &VAR_6->vsi, &VAR_6->qtag);
 FUNC_8(&VAR_6->qtag);

 FUNC_10(VAR_5, VAR_6);
 FUNC_11(VAR_5, VAR_6);
 FUNC_9(VAR_5, VAR_6);

 FUNC_13(VAR_7, FUNC_1(VAR_6->vf_num), VAR_4);
 FUNC_6(VAR_7);
}
