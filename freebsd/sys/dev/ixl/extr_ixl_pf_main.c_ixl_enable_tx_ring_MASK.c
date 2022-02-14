
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
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixl_pf*,int ,char*,int ,int ) ;
 int FUNC_5 (struct ixl_pf_qtag*,int ) ;
 int FUNC_6 (struct i40e_hw*,int ) ;
 int FUNC_7 (struct i40e_hw*,int ,int) ;

int
FUNC_8(struct ixl_pf *VAR_5, struct ixl_pf_qtag *VAR_6, u16 VAR_7)
{
 struct i40e_hw *VAR_8 = &VAR_5->hw;
 int VAR_9 = 0;
 u32 VAR_10;
 u16 VAR_11;

 VAR_11 = FUNC_5(VAR_6, VAR_7);

 FUNC_4(VAR_5, VAR_3,
     "Enabling PF TX ring %4d / VSI TX ring %4d...\n",
     VAR_11, VAR_7);

 FUNC_2(VAR_8, VAR_11, VAR_4);

 VAR_10 = FUNC_6(VAR_8, FUNC_0(VAR_11));
 VAR_10 |= VAR_1 |
     VAR_2;
 FUNC_7(VAR_8, FUNC_0(VAR_11), VAR_10);

 for (int VAR_12 = 0; VAR_12 < 10; VAR_12++) {
  VAR_10 = FUNC_6(VAR_8, FUNC_0(VAR_11));
  if (VAR_10 & VAR_2)
   break;
  FUNC_3(10);
 }
 if ((VAR_10 & VAR_2) == 0) {
  FUNC_1(VAR_5->dev, "TX queue %d still disabled!\n",
      VAR_11);
  VAR_9 = VAR_0;
 }

 return (VAR_9);
}
