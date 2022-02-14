
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* write_reg_locked ) (struct e1000_hw*,int,scalar_t__) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {TYPE_4__ ops; int type; } ;
struct TYPE_6__ {scalar_t__ (* read ) (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct TYPE_5__ {int type; } ;
struct e1000_hw {struct e1000_phy_info phy; TYPE_3__ nvm; TYPE_1__ mac; int device_id; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
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
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;






 int VAR_18 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int,scalar_t__) ;
 int FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_19)
{
 struct e1000_phy_info *VAR_20 = &VAR_19->phy;
 u32 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 s32 VAR_26 = VAR_14;
 u16 VAR_27, VAR_28, VAR_29, VAR_30 = 0;

 FUNC_0("e1000_sw_lcd_config_ich8lan");







 switch (VAR_19->mac.type) {
 case 133:
  if (VAR_20->type != VAR_18)
   return VAR_26;

  if ((VAR_19->device_id == VAR_0) ||
      (VAR_19->device_id == VAR_1)) {
   VAR_25 = VAR_11;
   break;
  }

 case 128:
 case 132:
 case 130:
 case 129:
 case 131:
  VAR_25 = VAR_12;
  break;
 default:
  return VAR_26;
 }

 VAR_26 = VAR_19->phy.ops.acquire(VAR_19);
 if (VAR_26)
  return VAR_26;

 VAR_22 = FUNC_1(VAR_19, VAR_10);
 if (!(VAR_22 & VAR_25))
  goto release;




 VAR_22 = FUNC_1(VAR_19, VAR_2);
 if ((VAR_19->mac.type < 132) &&
     (VAR_22 & VAR_5))
   goto release;

 VAR_23 = FUNC_1(VAR_19, VAR_7);
 VAR_23 &= VAR_8;
 VAR_23 >>= VAR_9;
 if (!VAR_23)
  goto release;

 VAR_24 = VAR_22 & VAR_3;
 VAR_24 >>= VAR_4;

 if (((VAR_19->mac.type == 128) &&
      !(VAR_22 & VAR_6)) ||
     (VAR_19->mac.type > 128)) {





  VAR_26 = FUNC_3(VAR_19);
  if (VAR_26)
   goto release;

  VAR_22 = FUNC_1(VAR_19, VAR_13);
  VAR_26 = FUNC_2(VAR_19, VAR_15,
       (u16)VAR_22);
  if (VAR_26)
   goto release;
 }




 VAR_27 = (u16)(VAR_24 << 1);

 for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
  VAR_26 = VAR_19->nvm.ops.read(VAR_19, (VAR_27 + VAR_21 * 2), 1,
        &VAR_28);
  if (VAR_26)
   goto release;

  VAR_26 = VAR_19->nvm.ops.read(VAR_19, (VAR_27 + VAR_21 * 2 + 1),
        1, &VAR_29);
  if (VAR_26)
   goto release;


  if (VAR_29 == VAR_16) {
   VAR_30 = VAR_28;
   continue;
  }

  VAR_29 &= VAR_17;
  VAR_29 |= VAR_30;

  VAR_26 = VAR_20->ops.write_reg_locked(VAR_19, (u32)VAR_29,
          VAR_28);
  if (VAR_26)
   goto release;
 }

release:
 VAR_19->phy.ops.release(VAR_19);
 return VAR_26;
}
