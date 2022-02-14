
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct iavf_sc {int admin_irq; struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_8)
{
 struct iavf_sc *VAR_9 = VAR_8;
 struct i40e_hw *VAR_10 = &VAR_9->hw;
 u32 VAR_11, VAR_12;
 bool VAR_13 = VAR_0;

 ++VAR_9->admin_irq;

        VAR_11 = FUNC_1(VAR_10, VAR_3);




        VAR_12 = FUNC_1(VAR_10, VAR_5);


 if (VAR_11 & VAR_4) {
  VAR_12 &= ~VAR_6;
  VAR_13 = VAR_7;
 }

 FUNC_2(VAR_10, VAR_5, VAR_12);
 FUNC_0(VAR_10);

 if (VAR_13)
  return (VAR_2);
 else
  return (VAR_1);
}
