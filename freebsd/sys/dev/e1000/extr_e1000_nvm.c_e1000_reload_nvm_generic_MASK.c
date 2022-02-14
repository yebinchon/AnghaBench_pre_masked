
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct e1000_hw *VAR_2)
{
 u32 VAR_3;

 FUNC_0("e1000_reload_nvm_generic");

 FUNC_4(10);
 VAR_3 = FUNC_1(VAR_2, VAR_0);
 VAR_3 |= VAR_1;
 FUNC_3(VAR_2, VAR_0, VAR_3);
 FUNC_2(VAR_2);
}
