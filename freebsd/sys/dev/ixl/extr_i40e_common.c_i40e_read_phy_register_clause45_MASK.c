
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
 int VAR_12 ;
 int FUNC_2 (struct i40e_hw*,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_13,
    u8 VAR_14, u16 VAR_15, u8 VAR_16, u16 *VAR_17)
{
 enum i40e_status_code VAR_18 = VAR_1;
 u32 VAR_19 = 0;
 u16 VAR_20 = 1000;
 u8 VAR_21 = (u8)VAR_13->func_caps.mdio_port_num;

 VAR_19 = (VAR_15 << VAR_3) |
    (VAR_14 << VAR_2) |
    (VAR_16 << VAR_6) |
    (VAR_9) |
    (VAR_11) |
    (VAR_4) |
    (VAR_5);
 FUNC_5(VAR_13, FUNC_0(VAR_21), VAR_19);
 do {
  VAR_19 = FUNC_4(VAR_13, FUNC_0(VAR_21));
  if (!(VAR_19 & VAR_4)) {
   VAR_18 = VAR_12;
   break;
  }
  FUNC_3(10);
  VAR_20--;
 } while (VAR_20);

 if (VAR_18) {
  FUNC_2(VAR_13, VAR_0,
      "PHY: Can't write command to external PHY.\n");
  goto phy_read_end;
 }

 VAR_19 = (VAR_14 << VAR_2) |
    (VAR_16 << VAR_6) |
    (VAR_10) |
    (VAR_11) |
    (VAR_4) |
    (VAR_5);
 VAR_18 = VAR_1;
 VAR_20 = 1000;
 FUNC_5(VAR_13, FUNC_0(VAR_21), VAR_19);
 do {
  VAR_19 = FUNC_4(VAR_13, FUNC_0(VAR_21));
  if (!(VAR_19 & VAR_4)) {
   VAR_18 = VAR_12;
   break;
  }
  FUNC_3(10);
  VAR_20--;
 } while (VAR_20);

 if (!VAR_18) {
  VAR_19 = FUNC_4(VAR_13, FUNC_1(VAR_21));
  *VAR_17 = (VAR_19 & VAR_7) >>
    VAR_8;
 } else {
  FUNC_2(VAR_13, VAR_0,
      "PHY: Can't read register value from external PHY.\n");
 }

phy_read_end:
 return VAR_18;
}
