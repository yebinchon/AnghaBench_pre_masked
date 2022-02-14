
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;int (* write_reg_locked ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg_locked ) (struct e1000_hw*,int ,int *) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int *) ;
 int FUNC_7 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int *) ;
 int FUNC_9 (struct e1000_hw*,int ,int ) ;
 int FUNC_10 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int ,int *) ;
 int FUNC_12 (struct e1000_hw*,int ,int ) ;
 int FUNC_13 (struct e1000_hw*) ;

u32 FUNC_14(struct e1000_hw *VAR_12)
{
 s32 VAR_13;

 FUNC_0("e1000_resume_workarounds_pchlan");
 if (VAR_12->mac.type < VAR_10)
  return VAR_2;

 VAR_13 = FUNC_4(VAR_12);
 if (VAR_13) {
  FUNC_2("Failed to init PHY flow ret_val=%d\n", VAR_13);
  return VAR_13;
 }






 if (VAR_12->phy.type == VAR_11) {
  u16 VAR_14;

  VAR_13 = VAR_12->phy.ops.acquire(VAR_12);
  if (VAR_13) {
   FUNC_1("Failed to setup iRST\n");
   return VAR_13;
  }


  VAR_12->phy.ops.read_reg_locked(VAR_12, VAR_5, &VAR_14);
  VAR_14 &= ~VAR_6;
  VAR_12->phy.ops.write_reg_locked(VAR_12, VAR_5, VAR_14);

  if (!(FUNC_3(VAR_12, VAR_0) &
      VAR_1)) {



   VAR_13 = VAR_12->phy.ops.read_reg_locked(VAR_12, VAR_7,
             &VAR_14);
   if (VAR_13)
    goto release;
   VAR_14 |= VAR_8;
   VAR_12->phy.ops.write_reg_locked(VAR_12, VAR_7, VAR_14);


   VAR_12->phy.ops.write_reg_locked(VAR_12, VAR_9, 0);
  }

  VAR_13 = VAR_12->phy.ops.read_reg_locked(VAR_12, VAR_3,
            &VAR_14);
  if (VAR_13)
   goto release;
  VAR_14 &= ~VAR_4;
  VAR_12->phy.ops.write_reg_locked(VAR_12, VAR_3, VAR_14);
release:
  if (VAR_13)
   FUNC_2("Error %d in resume workarounds\n", VAR_13);
  VAR_12->phy.ops.release(VAR_12);
  return VAR_13;
 }
 return VAR_2;
}
