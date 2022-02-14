
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;

void
FUNC_5(struct e1000_hw *VAR_2, u16 VAR_3)
{
 u32 VAR_4;

 FUNC_0("e1000_release_swfw_sync");

 while (FUNC_3(VAR_2) != VAR_0)
  ;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 VAR_4 &= ~VAR_3;
 FUNC_2(VAR_2, VAR_1, VAR_4);

 FUNC_4(VAR_2);
}
