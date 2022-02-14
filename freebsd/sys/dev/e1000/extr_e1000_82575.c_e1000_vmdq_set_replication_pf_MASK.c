
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (struct e1000_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;

void FUNC_2(struct e1000_hw *VAR_2, bool VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2, VAR_0);

 if (VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;

 FUNC_1(VAR_2, VAR_0, VAR_4);
}
