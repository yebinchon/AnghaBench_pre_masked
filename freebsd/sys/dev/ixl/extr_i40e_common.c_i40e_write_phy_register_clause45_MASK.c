
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct i40e_hw*,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_12,
    u8 VAR_13, u16 VAR_14, u8 VAR_15, u16 VAR_16)
{
 enum i40e_status_code VAR_17 = VAR_1;
 u32 VAR_18 = 0;
 u16 VAR_19 = 1000;
 u8 VAR_20 = (u8)VAR_12->func_caps.mdio_port_num;

 VAR_18 = (VAR_14 << VAR_3) |
    (VAR_13 << VAR_2) |
    (VAR_15 << VAR_6) |
    (VAR_8) |
    (VAR_10) |
    (VAR_4) |
    (VAR_5);
 FUNC_5(VAR_12, FUNC_0(VAR_20), VAR_18);
 do {
  VAR_18 = FUNC_4(VAR_12, FUNC_0(VAR_20));
  if (!(VAR_18 & VAR_4)) {
   VAR_17 = VAR_11;
   break;
  }
  FUNC_3(10);
  VAR_19--;
 } while (VAR_19);
 if (VAR_17) {
  FUNC_2(VAR_12, VAR_0,
      "PHY: Can't write command to external PHY.\n");
  goto phy_write_end;
 }

 VAR_18 = VAR_16 << VAR_7;
 FUNC_5(VAR_12, FUNC_1(VAR_20), VAR_18);

 VAR_18 = (VAR_13 << VAR_2) |
    (VAR_15 << VAR_6) |
    (VAR_9) |
    (VAR_10) |
    (VAR_4) |
    (VAR_5);
 VAR_17 = VAR_1;
 VAR_19 = 1000;
 FUNC_5(VAR_12, FUNC_0(VAR_20), VAR_18);
 do {
  VAR_18 = FUNC_4(VAR_12, FUNC_0(VAR_20));
  if (!(VAR_18 & VAR_4)) {
   VAR_17 = VAR_11;
   break;
  }
  FUNC_3(10);
  VAR_19--;
 } while (VAR_19);

phy_write_end:
 return VAR_17;
}
