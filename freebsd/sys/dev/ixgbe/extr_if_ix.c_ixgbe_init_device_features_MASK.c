
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int func; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_6__ {int device_id; TYPE_2__ bus; TYPE_1__ mac; } ;
struct adapter {int feat_cap; int feat_en; int dev; TYPE_3__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;







__attribute__((used)) static void
FUNC_1(struct adapter *VAR_20)
{
 VAR_20->feat_cap = VAR_13
                   | VAR_14
                   | VAR_11
                   | VAR_12
                   | VAR_10;


 switch (VAR_20->hw.mac.type) {
 case 133:
  if (VAR_20->hw.device_id == VAR_0)
   VAR_20->feat_cap |= VAR_8;
  break;
 case 131:
  VAR_20->feat_cap |= VAR_15;
  VAR_20->feat_cap |= VAR_9;
  if ((VAR_20->hw.device_id == VAR_3) &&
      (VAR_20->hw.bus.func == 0))
   VAR_20->feat_cap |= VAR_6;
  break;
 case 130:
  VAR_20->feat_cap |= VAR_16;
  VAR_20->feat_cap |= VAR_15;
  VAR_20->feat_cap |= VAR_9;
  break;
 case 128:
  VAR_20->feat_cap |= VAR_15;
  VAR_20->feat_cap |= VAR_9;
  break;
 case 129:
  VAR_20->feat_cap |= VAR_15;
  VAR_20->feat_cap |= VAR_9;
  VAR_20->feat_cap &= ~VAR_10;
  if ((VAR_20->hw.device_id == VAR_4) ||
      (VAR_20->hw.device_id == VAR_5)) {
   VAR_20->feat_cap |= VAR_16;
   VAR_20->feat_cap |= VAR_7;
  }
  break;
 case 132:
  VAR_20->feat_cap |= VAR_15;
  VAR_20->feat_cap |= VAR_9;
  if ((VAR_20->hw.device_id == VAR_1) &&
      (VAR_20->hw.bus.func == 0))
   VAR_20->feat_cap |= VAR_6;
  if (VAR_20->hw.device_id == VAR_2)
   VAR_20->feat_cap &= ~VAR_10;
  break;
 default:
  break;
 }



 if (VAR_20->feat_cap & VAR_8)
  VAR_20->feat_en |= VAR_8;

 if (VAR_20->feat_cap & VAR_13)
  VAR_20->feat_en |= VAR_13;

 if (VAR_20->feat_cap & VAR_7)
  VAR_20->feat_en |= VAR_7;

 if (VAR_20->feat_cap & VAR_16)
  VAR_20->feat_en |= VAR_16;



 if (VAR_17) {
  if (VAR_20->feat_cap & VAR_9)
   VAR_20->feat_en |= VAR_9;
  else
   FUNC_0(VAR_20->dev, "Device does not support Flow Director. Leaving disabled.");
 }




 if (!VAR_18)
  VAR_20->feat_cap &= ~VAR_12;

 if ((VAR_20->feat_cap & VAR_14) && VAR_19)
  VAR_20->feat_en |= VAR_14;



 if (!(VAR_20->feat_cap & VAR_12)) {
  VAR_20->feat_cap &= ~VAR_14;
  VAR_20->feat_cap &= ~VAR_15;
  VAR_20->feat_en &= ~VAR_14;
  VAR_20->feat_en &= ~VAR_15;
 }
}
