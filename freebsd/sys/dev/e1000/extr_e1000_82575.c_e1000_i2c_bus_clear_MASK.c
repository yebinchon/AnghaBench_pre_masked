
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
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int*) ;
 int FUNC_5 (struct e1000_hw*,int*) ;
 int FUNC_6 (struct e1000_hw*,int*,int) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct e1000_hw *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3, VAR_0);
 u32 VAR_5;

 FUNC_0("e1000_i2c_bus_clear");

 FUNC_2(VAR_3);

 FUNC_6(VAR_3, &VAR_4, 1);

 for (VAR_5 = 0; VAR_5 < 9; VAR_5++) {
  FUNC_5(VAR_3, &VAR_4);


  FUNC_7(VAR_1);

  FUNC_4(VAR_3, &VAR_4);


  FUNC_7(VAR_2);
 }

 FUNC_2(VAR_3);


 FUNC_3(VAR_3);
}
