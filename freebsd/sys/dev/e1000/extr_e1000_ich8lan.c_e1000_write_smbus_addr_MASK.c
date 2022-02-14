
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*,int ) ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_13)
{
 u16 VAR_14;
 u32 VAR_15 = FUNC_1(VAR_13, VAR_0);
 u32 VAR_16 = (VAR_15 & VAR_3) >>
  VAR_4;
 s32 VAR_17;

 VAR_15 &= VAR_1;

 VAR_17 = FUNC_2(VAR_13, VAR_5, &VAR_14);
 if (VAR_17)
  return VAR_17;

 VAR_14 &= ~VAR_9;
 VAR_14 |= (VAR_15 >> VAR_2);
 VAR_14 |= VAR_10 | VAR_11;

 if (VAR_13->phy.type == VAR_12) {

  if (VAR_16--) {
   VAR_14 &= ~VAR_8;
   VAR_14 |= (VAR_16 & (1 << 0)) <<
    VAR_7;
   VAR_14 |= (VAR_16 & (1 << 1)) <<
    (VAR_6 - 1);
  } else {
   FUNC_0("Unsupported SMB frequency in PHY\n");
  }
 }

 return FUNC_3(VAR_13, VAR_5, VAR_14);
}
