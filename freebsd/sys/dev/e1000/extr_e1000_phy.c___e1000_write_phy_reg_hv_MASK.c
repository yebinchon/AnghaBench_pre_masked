
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {int addr; scalar_t__ type; int revision; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int,int*,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int,int*,int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_11(struct e1000_hw *VAR_7, u32 VAR_8, u16 VAR_9,
        bool VAR_10, bool VAR_11)
{
 s32 VAR_12;
 u16 VAR_13 = FUNC_1(VAR_8);
 u16 VAR_14 = FUNC_0(VAR_8);
 u32 VAR_15 = VAR_7->phy.addr = FUNC_6(VAR_13);

 FUNC_2("__e1000_write_phy_reg_hv");

 if (!VAR_10) {
  VAR_12 = VAR_7->phy.ops.acquire(VAR_7);
  if (VAR_12)
   return VAR_12;
 }

 if (VAR_13 == VAR_0) {
  VAR_12 = FUNC_5(VAR_7, VAR_8, &VAR_9,
        VAR_1, VAR_11);
  goto out;
 }

 if (VAR_13 > 0 && VAR_13 < VAR_2) {
  VAR_12 = FUNC_4(VAR_7, VAR_8,
        &VAR_9, VAR_1);
  goto out;
 }

 if (!VAR_11) {
  if (VAR_13 == VAR_2)
   VAR_13 = 0;




  if ((VAR_7->phy.type == VAR_6) &&
      (VAR_7->phy.revision >= 1) &&
      (VAR_7->phy.addr == 2) &&
      !(VAR_5 & VAR_14) &&
      (VAR_9 & (1 << 11))) {
   u16 VAR_16 = 0x7EFF;
   VAR_12 = FUNC_4(VAR_7,
         (1 << 6) | 0x3,
         &VAR_16, VAR_1);
   if (VAR_12)
    goto out;
  }

  if (VAR_14 > VAR_4) {

   VAR_12 = FUNC_7(VAR_7,
           (VAR_13 << VAR_3));

   VAR_7->phy.addr = VAR_15;

   if (VAR_12)
    goto out;
  }
 }

 FUNC_3("writing PHY page %d (or 0x%x shifted) reg 0x%x\n", VAR_13,
    VAR_13 << VAR_3, VAR_14);

 VAR_12 = FUNC_8(VAR_7, VAR_5 & VAR_14,
        VAR_9);

out:
 if (!VAR_10)
  VAR_7->phy.ops.release(VAR_7);

 return VAR_12;
}
