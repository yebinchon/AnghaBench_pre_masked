
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
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_2(struct e1000_hw *VAR_4)
{
 u32 VAR_5 = 0;
 bool VAR_6 = VAR_2;

 FUNC_0("e1000_get_flash_presence_i210");

 VAR_5 = FUNC_1(VAR_4, VAR_0);

 if (VAR_5 & VAR_1)
  VAR_6 = VAR_3;

 return VAR_6;
}
