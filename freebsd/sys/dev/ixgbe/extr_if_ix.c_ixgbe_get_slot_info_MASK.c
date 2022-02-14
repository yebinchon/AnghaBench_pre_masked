
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ speed; scalar_t__ width; } ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {int device_id; TYPE_2__ bus; TYPE_1__ mac; } ;
struct adapter {struct ixgbe_hw hw; int ctx; } ;
typedef int device_t ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct ixgbe_hw*) ;


 int FUNC_4 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_10(struct adapter *VAR_10)
{
 device_t VAR_11 = FUNC_2(VAR_10->ctx);
 struct ixgbe_hw *VAR_12 = &VAR_10->hw;
 int VAR_13 = VAR_3;
 u32 VAR_14;
 u16 VAR_15;


 switch (VAR_12->device_id) {
 case 130:
 case 131:
  goto get_parent_info;
 default:
  break;
 }

 FUNC_3(VAR_12);





 switch (VAR_12->mac.type) {
 case 128:
 case 129:
  return;
 default:
  goto display;
 }

get_parent_info:





 VAR_11 = FUNC_0(FUNC_0(VAR_11));




 VAR_11 = FUNC_0(FUNC_0(VAR_11));





 if (FUNC_5(VAR_11, VAR_2, &VAR_14)) {




  VAR_13 = VAR_0;
  FUNC_3(VAR_12);
  goto display;
 }

 VAR_15 = FUNC_9(VAR_11, VAR_14 + VAR_1, 2);
 FUNC_4(VAR_12, VAR_15);

display:
 FUNC_1(VAR_11, "PCI Express Bus: Speed %s %s\n",
     ((VAR_12->bus.speed == VAR_6) ? "8.0GT/s" :
      (VAR_12->bus.speed == VAR_5) ? "5.0GT/s" :
      (VAR_12->bus.speed == VAR_4) ? "2.5GT/s" :
      "Unknown"),
     ((VAR_12->bus.width == VAR_9) ? "Width x8" :
      (VAR_12->bus.width == VAR_8) ? "Width x4" :
      (VAR_12->bus.width == VAR_7) ? "Width x1" :
      "Unknown"));

 if (VAR_13) {
  if ((VAR_12->device_id != 130) &&
      ((VAR_12->bus.width <= VAR_8) &&
      (VAR_12->bus.speed == VAR_4))) {
   FUNC_1(VAR_11, "PCI-Express bandwidth available for this card\n     is not sufficient for optimal performance.\n");
   FUNC_1(VAR_11, "For optimal performance a x8 PCIE, or x4 PCIE Gen2 slot is required.\n");
  }
  if ((VAR_12->device_id == 130) &&
      ((VAR_12->bus.width <= VAR_9) &&
      (VAR_12->bus.speed < VAR_6))) {
   FUNC_1(VAR_11, "PCI-Express bandwidth available for this card\n     is not sufficient for optimal performance.\n");
   FUNC_1(VAR_11, "For optimal performance a x8 PCIE Gen3 slot is required.\n");
  }
 } else
  FUNC_1(VAR_11, "Unable to determine slot speed/width. The speed/width reported are that of the internal switch.\n");

 return;
}
