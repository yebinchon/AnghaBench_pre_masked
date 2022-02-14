
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* write_reg_locked ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg_locked ) (struct e1000_hw*,int ,int*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;} ;
struct TYPE_6__ {scalar_t__ type; int revision; int addr; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;
 scalar_t__ FUNC_13 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_14 (struct e1000_hw*,int ,int) ;
 int FUNC_15 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_16(struct e1000_hw *VAR_10)
{
 s32 VAR_11 = VAR_1;
 u16 VAR_12;

 FUNC_0("e1000_hv_phy_workarounds_ich8lan");

 if (VAR_10->mac.type != VAR_7)
  return VAR_1;


 if (VAR_10->phy.type == VAR_8) {
  VAR_11 = FUNC_4(VAR_10);
  if (VAR_11)
   return VAR_11;
 }

 if (((VAR_10->phy.type == VAR_8) &&
      ((VAR_10->phy.revision == 1) || (VAR_10->phy.revision == 2))) ||
     ((VAR_10->phy.type == VAR_9) && (VAR_10->phy.revision == 1))) {

  VAR_11 = VAR_10->phy.ops.write_reg(VAR_10, FUNC_1(769, 25), 0x4431);
  if (VAR_11)
   return VAR_11;


  VAR_11 = VAR_10->phy.ops.write_reg(VAR_10, VAR_2,
      0xA204);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_10->phy.type == VAR_9) {



  if (VAR_10->phy.revision < 2) {
   FUNC_3(VAR_10);
   VAR_11 = VAR_10->phy.ops.write_reg(VAR_10, VAR_5,
       0x3140);
   if (VAR_11)
    return VAR_11;
  }
 }


 VAR_11 = VAR_10->phy.ops.acquire(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_10->phy.addr = 1;
 VAR_11 = FUNC_6(VAR_10, VAR_4, 0);
 VAR_10->phy.ops.release(VAR_10);
 if (VAR_11)
  return VAR_11;




 VAR_11 = FUNC_2(VAR_10, VAR_6);
 if (VAR_11)
  return VAR_11;


 VAR_11 = VAR_10->phy.ops.acquire(VAR_10);
 if (VAR_11)
  return VAR_11;
 VAR_11 = VAR_10->phy.ops.read_reg_locked(VAR_10, VAR_0, &VAR_12);
 if (VAR_11)
  goto release;
 VAR_11 = VAR_10->phy.ops.write_reg_locked(VAR_10, VAR_0,
            VAR_12 & 0x00FF);
 if (VAR_11)
  goto release;


 VAR_11 = FUNC_5(VAR_10, VAR_3, 0x0034);
release:
 VAR_10->phy.ops.release(VAR_10);

 return VAR_11;
}
