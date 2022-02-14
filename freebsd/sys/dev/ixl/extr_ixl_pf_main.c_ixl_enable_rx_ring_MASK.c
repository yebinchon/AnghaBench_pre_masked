
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixl_pf_qtag {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int dev; struct i40e_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixl_pf*,int ,char*,int ,int ) ;
 int FUNC_4 (struct ixl_pf_qtag*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ) ;
 int FUNC_6 (struct i40e_hw*,int ,int) ;

int
FUNC_7(struct ixl_pf *VAR_4, struct ixl_pf_qtag *VAR_5, u16 VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_4->hw;
 int VAR_8 = 0;
 u32 VAR_9;
 u16 VAR_10;

 VAR_10 = FUNC_4(VAR_5, VAR_6);

 FUNC_3(VAR_4, VAR_3,
     "Enabling PF RX ring %4d / VSI RX ring %4d...\n",
     VAR_10, VAR_6);

 VAR_9 = FUNC_5(VAR_7, FUNC_0(VAR_10));
 VAR_9 |= VAR_1 |
     VAR_2;
 FUNC_6(VAR_7, FUNC_0(VAR_10), VAR_9);

 for (int VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  VAR_9 = FUNC_5(VAR_7, FUNC_0(VAR_10));
  if (VAR_9 & VAR_2)
   break;
  FUNC_2(10);
 }
 if ((VAR_9 & VAR_2) == 0) {
  FUNC_1(VAR_4->dev, "RX queue %d still disabled!\n",
      VAR_10);
  VAR_8 = VAR_0;
 }

 return (VAR_8);
}
