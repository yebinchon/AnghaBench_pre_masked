
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ requested_mode; void* current_mode; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

s32 FUNC_2(struct ixgbe_hw *VAR_7, u32 VAR_8, u32 VAR_9,
         u32 VAR_10, u32 VAR_11, u32 VAR_12, u32 VAR_13)
{
 if ((!(VAR_8)) || (!(VAR_9))) {
  FUNC_1(VAR_0,
        "Local or link partner's advertised flow control "
        "settings are NULL. Local: %x, link partner: %x\n",
        VAR_8, VAR_9);
  return VAR_1;
 }

 if ((VAR_8 & VAR_10) && (VAR_9 & VAR_12)) {







  if (VAR_7->fc.requested_mode == VAR_3) {
   VAR_7->fc.current_mode = VAR_3;
   FUNC_0("Flow Control = FULL.\n");
  } else {
   VAR_7->fc.current_mode = VAR_5;
   FUNC_0("Flow Control=RX PAUSE frames only\n");
  }
 } else if (!(VAR_8 & VAR_10) && (VAR_8 & VAR_11) &&
     (VAR_9 & VAR_12) && (VAR_9 & VAR_13)) {
  VAR_7->fc.current_mode = VAR_6;
  FUNC_0("Flow Control = TX PAUSE frames only.\n");
 } else if ((VAR_8 & VAR_10) && (VAR_8 & VAR_11) &&
     !(VAR_9 & VAR_12) && (VAR_9 & VAR_13)) {
  VAR_7->fc.current_mode = VAR_5;
  FUNC_0("Flow Control = RX PAUSE frames only.\n");
 } else {
  VAR_7->fc.current_mode = VAR_4;
  FUNC_0("Flow Control = NONE.\n");
 }
 return VAR_2;
}
