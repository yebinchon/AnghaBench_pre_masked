
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_hw {int dummy; } ;
struct ixl_pf {int qtag; int qmgr; int dev; struct i40e_hw hw; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (int *,int *) ;

int
FUNC_5(struct ixl_pf *VAR_0, bool VAR_1)
{
 struct i40e_hw *VAR_2 = &VAR_0->hw;
 device_t VAR_3 = VAR_0->dev;
 int VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  FUNC_0(VAR_3,
      "Shutdown LAN HMC failed with code %d\n", VAR_4);

 FUNC_3(VAR_2);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  FUNC_0(VAR_3,
      "Shutdown Admin queue failed with code %d\n", VAR_4);

 FUNC_4(&VAR_0->qmgr, &VAR_0->qtag);
 return (VAR_4);
}
