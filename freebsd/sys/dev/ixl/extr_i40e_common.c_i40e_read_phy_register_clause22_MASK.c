
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
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct i40e_hw*,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_10,
     u16 VAR_11, u8 VAR_12, u16 *VAR_13)
{
 enum i40e_status_code VAR_14 = VAR_1;
 u8 VAR_15 = (u8)VAR_10->func_caps.mdio_port_num;
 u32 VAR_16 = 0;
 u16 VAR_17 = 1000;

 VAR_16 = (VAR_11 << VAR_2) |
    (VAR_12 << VAR_4) |
    (VAR_7) |
    (VAR_8) |
    (VAR_3);
 FUNC_5(VAR_10, FUNC_0(VAR_15), VAR_16);
 do {
  VAR_16 = FUNC_4(VAR_10, FUNC_0(VAR_15));
  if (!(VAR_16 & VAR_3)) {
   VAR_14 = VAR_9;
   break;
  }
  FUNC_3(10);
  VAR_17--;
 } while (VAR_17);

 if (VAR_14) {
  FUNC_2(VAR_10, VAR_0,
      "PHY: Can't write command to external PHY.\n");
 } else {
  VAR_16 = FUNC_4(VAR_10, FUNC_1(VAR_15));
  *VAR_13 = (VAR_16 & VAR_5) >>
    VAR_6;
 }

 return VAR_14;
}
