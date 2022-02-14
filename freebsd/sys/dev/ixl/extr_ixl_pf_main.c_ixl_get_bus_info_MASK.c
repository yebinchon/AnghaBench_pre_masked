
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int speed; int width; } ;
struct TYPE_5__ {int valid_functions; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_3__ bus; TYPE_2__ func_caps; TYPE_1__ mac; } ;
struct ixl_pf {int supported_speeds; int dev; struct i40e_hw hw; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int,int) ;

void
FUNC_6(struct ixl_pf *VAR_10)
{
 struct i40e_hw *VAR_11 = &VAR_10->hw;
 device_t VAR_12 = VAR_10->dev;
        u16 VAR_13;
        u32 VAR_14, VAR_15;
 u64 VAR_16;


 if (VAR_11->mac.type == VAR_0)
  return;


        FUNC_4(VAR_12, VAR_2, &VAR_14);
        VAR_13 = FUNC_5(VAR_12, VAR_14 + VAR_1, 2);


 FUNC_2(VAR_11, VAR_13);


        FUNC_1(VAR_12,"PCI Express Bus: Speed %s %s\n",
            ((VAR_11->bus.speed == VAR_5) ? "8.0GT/s":
            (VAR_11->bus.speed == VAR_4) ? "5.0GT/s":
            (VAR_11->bus.speed == VAR_3) ? "2.5GT/s":"Unknown"),
            (VAR_11->bus.width == VAR_9) ? "Width x8" :
            (VAR_11->bus.width == VAR_8) ? "Width x4" :
            (VAR_11->bus.width == VAR_7) ? "Width x2" :
            (VAR_11->bus.width == VAR_6) ? "Width x1" :
            ("Unknown"));





 if (VAR_11->bus.speed >= VAR_5
     && VAR_11->bus.width >= VAR_9)
  return;

 VAR_15 = FUNC_0(VAR_11->func_caps.valid_functions);
 VAR_16 = FUNC_3(VAR_10->supported_speeds) / 1000000;

 if ((VAR_15 * VAR_16) > VAR_11->bus.speed * VAR_11->bus.width) {
                FUNC_1(VAR_12, "PCI-Express bandwidth available"
                    " for this device may be insufficient for"
                    " optimal performance.\n");
                FUNC_1(VAR_12, "Please move the device to a different"
      " PCI-e link with more lanes and/or higher"
      " transfer rate.\n");
        }
}
