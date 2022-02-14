
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
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixl_pf_qtag*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int) ;

int
FUNC_6(struct ixl_pf *VAR_3, struct ixl_pf_qtag *VAR_4, u16 VAR_5)
{
 struct i40e_hw *VAR_6 = &VAR_3->hw;
 int VAR_7 = 0;
 u32 VAR_8;
 u16 VAR_9;

 VAR_9 = FUNC_3(VAR_4, VAR_5);

 VAR_8 = FUNC_4(VAR_6, FUNC_0(VAR_9));
 VAR_8 &= ~VAR_1;
 FUNC_5(VAR_6, FUNC_0(VAR_9), VAR_8);

 for (int VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  VAR_8 = FUNC_4(VAR_6, FUNC_0(VAR_9));
  if (!(VAR_8 & VAR_2))
   break;
  FUNC_2(10);
 }
 if (VAR_8 & VAR_2) {
  FUNC_1(VAR_3->dev, "RX queue %d still enabled!\n",
      VAR_9);
  VAR_7 = VAR_0;
 }

 return (VAR_7);
}
