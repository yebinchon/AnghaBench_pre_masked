
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct i40e_hw*,int ,int,scalar_t__,int*) ;
 int FUNC_3 (struct i40e_hw*,int ,int,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,int ) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_7,
           u32 VAR_8, u32 VAR_9)
{
 enum i40e_status_code VAR_10 = VAR_6;
 u32 VAR_11;
 u16 VAR_12 = 0;
 u16 VAR_13;
 u16 VAR_14;
 u16 VAR_15 = VAR_5;
 u8 VAR_16 = 0;
 u8 VAR_17;

 VAR_11 = FUNC_4(VAR_7, VAR_0);
 VAR_17 = (u8)(VAR_11 & VAR_1);
 VAR_16 = FUNC_0(VAR_7, VAR_17);

 for (VAR_13 = 0; VAR_13 < 3; VAR_13++,
      VAR_15++) {
  VAR_10 = FUNC_2(VAR_7,
        VAR_2,
        VAR_15, VAR_16,
        &VAR_14);
  if (VAR_10)
   goto phy_blinking_end;
  VAR_12 = VAR_14;
  if (VAR_14 & VAR_3) {
   VAR_14 = 0;
   VAR_10 = FUNC_3(VAR_7,
        VAR_2,
        VAR_15, VAR_16,
        VAR_14);
   if (VAR_10)
    goto phy_blinking_end;
   break;
  }
 }

 if (VAR_8 > 0 && VAR_9 > 0) {
  for (VAR_11 = 0; VAR_11 < VAR_8 * 1000; VAR_11 += VAR_9) {
   VAR_10 = FUNC_2(VAR_7,
      VAR_2,
      VAR_15, VAR_16, &VAR_14);
   if (VAR_10)
    goto restore_config;
   if (VAR_14 & VAR_4)
    VAR_14 = 0;
   else
    VAR_14 = VAR_4;
   VAR_10 = FUNC_3(VAR_7,
      VAR_2,
      VAR_15, VAR_16, VAR_14);
   if (VAR_10)
    goto restore_config;
   FUNC_1(VAR_9);
  }
 }

restore_config:
 VAR_10 = FUNC_3(VAR_7,
        VAR_2,
        VAR_15, VAR_16, VAR_12);

phy_blinking_end:
 return VAR_10;
}
