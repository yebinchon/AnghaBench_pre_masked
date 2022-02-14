
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
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i40e_hw*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ixl_pf_qtag*,int ) ;
 int FUNC_6 (struct i40e_hw*,int ) ;
 int FUNC_7 (struct i40e_hw*,int ,int) ;

int
FUNC_8(struct ixl_pf *VAR_4, struct ixl_pf_qtag *VAR_5, u16 VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_4->hw;
 int VAR_8 = 0;
 u32 VAR_9;
 u16 VAR_10;

 VAR_10 = FUNC_5(VAR_5, VAR_6);

 FUNC_3(VAR_7, VAR_10, VAR_1);
 FUNC_4(500);

 VAR_9 = FUNC_6(VAR_7, FUNC_0(VAR_10));
 VAR_9 &= ~VAR_2;
 FUNC_7(VAR_7, FUNC_0(VAR_10), VAR_9);

 for (int VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  VAR_9 = FUNC_6(VAR_7, FUNC_0(VAR_10));
  if (!(VAR_9 & VAR_3))
   break;
  FUNC_2(10);
 }
 if (VAR_9 & VAR_3) {
  FUNC_1(VAR_4->dev, "TX queue %d still enabled!\n",
      VAR_10);
  VAR_8 = VAR_0;
 }

 return (VAR_8);
}
