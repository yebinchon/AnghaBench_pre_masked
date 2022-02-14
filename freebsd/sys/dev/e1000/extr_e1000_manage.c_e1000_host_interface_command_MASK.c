
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int asf_firmware_present; int arc_subsystem_valid; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,scalar_t__) ;
 int VAR_8 ;
 int FUNC_4 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_5 (struct e1000_hw*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct e1000_hw *VAR_9, u8 *VAR_10, u32 VAR_11)
{
 u32 VAR_12, VAR_13;

 FUNC_0("e1000_host_interface_command");

 if (!(VAR_9->mac.arc_subsystem_valid)) {
  FUNC_1("Hardware doesn't support host interface command.\n");
  return VAR_8;
 }

 if (!VAR_9->mac.asf_firmware_present) {
  FUNC_1("Firmware is not present.\n");
  return VAR_8;
 }

 if (VAR_11 == 0 || VAR_11 & 0x3 ||
     VAR_11 > VAR_6) {
  FUNC_1("Buffer length failure.\n");
  return -VAR_0;
 }


 VAR_12 = FUNC_2(VAR_9, VAR_1);
 if (!(VAR_12 & VAR_3)) {
  FUNC_1("E1000_HOST_EN bit disabled.\n");
  return -VAR_0;
 }


 VAR_11 >>= 2;




 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  FUNC_5(VAR_9, VAR_7, VAR_13,
         *((u32 *)VAR_10 + VAR_13));


 FUNC_4(VAR_9, VAR_1, VAR_12 | VAR_2);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_12 = FUNC_2(VAR_9, VAR_1);
  if (!(VAR_12 & VAR_2))
   break;
  FUNC_6(1);
 }


 if (VAR_13 == VAR_5 ||
     (!(FUNC_2(VAR_9, VAR_1) & VAR_4))) {
  FUNC_1("Command has failed with no status valid.\n");
  return -VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  *((u32 *)VAR_10 + VAR_13) = FUNC_3(VAR_9,
          VAR_7,
          VAR_13);

 return VAR_8;
}
