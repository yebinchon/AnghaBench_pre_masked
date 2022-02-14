
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_9__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* write_reg_locked ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg_locked ) (struct e1000_hw*,int ,int*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ ops; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_6__ {int nvm_k1_enabled; } ;
struct TYPE_7__ {TYPE_1__ ich8lan; } ;
struct e1000_hw {TYPE_5__ phy; TYPE_3__ mac; TYPE_2__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;
 int FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_15, bool VAR_16)
{
 s32 VAR_17 = VAR_5;
 u16 VAR_18 = 0;
 bool VAR_19 = VAR_15->dev_spec.ich8lan.nvm_k1_enabled;

 FUNC_0("e1000_k1_gig_workaround_hv");

 if (VAR_15->mac.type != VAR_12)
  return VAR_5;


 VAR_17 = VAR_15->phy.ops.acquire(VAR_15);
 if (VAR_17)
  return VAR_17;


 if (VAR_16) {
  if (VAR_15->phy.type == VAR_14) {
   VAR_17 = VAR_15->phy.ops.read_reg_locked(VAR_15, VAR_0,
             &VAR_18);
   if (VAR_17)
    goto release;

   VAR_18 &= (VAR_1 |
           VAR_2 |
           VAR_4);

   if (VAR_18 == (VAR_1 |
        VAR_2 |
        VAR_3))
    VAR_19 = VAR_6;
  }

  if (VAR_15->phy.type == VAR_13) {
   VAR_17 = VAR_15->phy.ops.read_reg_locked(VAR_15, VAR_7,
             &VAR_18);
   if (VAR_17)
    goto release;

   VAR_18 &= (VAR_9 |
           VAR_8 |
           VAR_11);

   if (VAR_18 == (VAR_9 |
        VAR_8 |
        VAR_10))
    VAR_19 = VAR_6;
  }


  VAR_17 = VAR_15->phy.ops.write_reg_locked(VAR_15, FUNC_1(770, 19),
             0x0100);
  if (VAR_17)
   goto release;

 } else {

  VAR_17 = VAR_15->phy.ops.write_reg_locked(VAR_15, FUNC_1(770, 19),
             0x4100);
  if (VAR_17)
   goto release;
 }

 VAR_17 = FUNC_2(VAR_15, VAR_19);

release:
 VAR_15->phy.ops.release(VAR_15);

 return VAR_17;
}
