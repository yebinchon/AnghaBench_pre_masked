
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int mta_reg_count; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
struct adapter {int wol; struct e1000_hw hw; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,scalar_t__,int*) ;
 int FUNC_6 (struct e1000_hw*,int ,int*) ;
 int FUNC_7 (struct e1000_hw*,scalar_t__,int) ;
 int FUNC_8 (struct e1000_hw*,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;

__attribute__((used)) static int
FUNC_12(struct adapter *VAR_31)
{
 struct e1000_hw *VAR_32 = &VAR_31->hw;
 u32 VAR_33, VAR_34 = 0;
 u16 VAR_35;


 FUNC_4(VAR_32);


 for (int VAR_36 = 0; VAR_36 < VAR_31->hw.mac.mta_reg_count; VAR_36++) {
  VAR_33 = FUNC_2(VAR_32, VAR_16, VAR_36);
  FUNC_7(VAR_32, FUNC_0(VAR_36), (u16)(VAR_33 & 0xFFFF));
  FUNC_7(VAR_32, FUNC_0(VAR_36) + 1,
      (u16)((VAR_33 >> 16) & 0xFFFF));
 }


 FUNC_5(&VAR_31->hw, VAR_0, &VAR_35);
 VAR_33 = FUNC_1(VAR_32, VAR_17);
 if (VAR_33 & VAR_23)
  VAR_35 |= VAR_7;
 if (VAR_33 & VAR_21)
  VAR_35 |= VAR_4;
 VAR_35 &= ~(VAR_2);
 if (VAR_33 & VAR_19)
  VAR_35 |= (((VAR_33 & VAR_19) >> VAR_20)
    << VAR_3);
 if (VAR_33 & VAR_18)
  VAR_35 |= VAR_1;
 if (VAR_33 & VAR_22)
  VAR_35 |= VAR_5;
 VAR_33 = FUNC_1(VAR_32, VAR_14);
 if (VAR_33 & VAR_15)
  VAR_35 |= VAR_6;
 FUNC_7(&VAR_31->hw, VAR_0, VAR_35);


 FUNC_3(VAR_32, VAR_24,
     VAR_26 | VAR_27 | VAR_25);
 FUNC_3(VAR_32, VAR_28, VAR_31->wol);


 FUNC_7(&VAR_31->hw, VAR_13, VAR_31->wol);
 FUNC_7(&VAR_31->hw, VAR_8, VAR_27);


 VAR_34 = VAR_32->phy.ops.acquire(VAR_32);
 if (VAR_34) {
  FUNC_9("Could not acquire PHY\n");
  return VAR_34;
 }
 FUNC_8(VAR_32, VAR_29,
                          (VAR_10 << VAR_30));
 VAR_34 = FUNC_6(VAR_32, VAR_11, &VAR_35);
 if (VAR_34) {
  FUNC_9("Could not read PHY page 769\n");
  goto out;
 }
 VAR_35 |= VAR_9 | VAR_12;
 VAR_34 = FUNC_8(VAR_32, VAR_11, VAR_35);
 if (VAR_34)
  FUNC_9("Could not set PHY Host Wakeup bit\n");
out:
 VAR_32->phy.ops.release(VAR_32);

 return VAR_34;
}
