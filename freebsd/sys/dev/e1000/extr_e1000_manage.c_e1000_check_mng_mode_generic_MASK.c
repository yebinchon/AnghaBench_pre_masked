
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;

bool FUNC_2(struct e1000_hw *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4, VAR_0);

 FUNC_0("e1000_check_mng_mode_generic");


 return (VAR_5 & VAR_1) ==
  (VAR_3 << VAR_2);
}
