
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int mdio_port_num; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ,int) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_8,
     u16 VAR_9, u8 VAR_10, u16 VAR_11)
{
 enum i40e_status_code VAR_12 = VAR_0;
 u8 VAR_13 = (u8)VAR_8->func_caps.mdio_port_num;
 u32 VAR_14 = 0;
 u16 VAR_15 = 1000;

 VAR_14 = VAR_11 << VAR_4;
 FUNC_4(VAR_8, FUNC_1(VAR_13), VAR_14);

 VAR_14 = (VAR_9 << VAR_1) |
    (VAR_10 << VAR_3) |
    (VAR_5) |
    (VAR_6) |
    (VAR_2);

 FUNC_4(VAR_8, FUNC_0(VAR_13), VAR_14);
 do {
  VAR_14 = FUNC_3(VAR_8, FUNC_0(VAR_13));
  if (!(VAR_14 & VAR_2)) {
   VAR_12 = VAR_7;
   break;
  }
  FUNC_2(10);
  VAR_15--;
 } while (VAR_15);

 return VAR_12;
}
