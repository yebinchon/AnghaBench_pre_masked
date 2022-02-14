
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ ulp_state; } ;
struct TYPE_10__ {TYPE_4__ ich8lan; } ;
struct TYPE_7__ {int (* acquire ) (struct e1000_hw*) ;int (* reset ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct e1000_hw {scalar_t__ device_id; TYPE_5__ dev_spec; TYPE_3__ phy; TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_17 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_3 (struct e1000_hw*,int ,int*) ;
 int FUNC_4 (struct e1000_hw*) ;
 scalar_t__ VAR_31 ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*) ;

s32 FUNC_10(struct e1000_hw *VAR_32, bool VAR_33)
{
 s32 VAR_34 = VAR_17;
 u32 VAR_35;
 u16 VAR_36;
 int VAR_37 = 0;

 if ((VAR_32->mac.type < VAR_30) ||
     (VAR_32->device_id == VAR_6) ||
     (VAR_32->device_id == VAR_7) ||
     (VAR_32->device_id == VAR_4) ||
     (VAR_32->device_id == VAR_5) ||
     (VAR_32->dev_spec.ich8lan.ulp_state == VAR_31))
  return 0;

 if (FUNC_1(VAR_32, VAR_11) & VAR_16) {
  if (VAR_33) {

   VAR_35 = FUNC_1(VAR_32, VAR_13);
   VAR_35 &= ~VAR_15;
   VAR_35 |= VAR_14;
   FUNC_2(VAR_32, VAR_13, VAR_35);
  }


  while (FUNC_1(VAR_32, VAR_11) &
         VAR_12) {
   if (VAR_37++ == 30) {
    VAR_34 = -VAR_8;
    goto out;
   }

   FUNC_6(10);
  }
  FUNC_0("ULP_CONFIG_DONE cleared after %dmsec\n", VAR_37 * 10);

  if (VAR_33) {
   VAR_35 = FUNC_1(VAR_32, VAR_13);
   VAR_35 &= ~VAR_14;
   FUNC_2(VAR_32, VAR_13, VAR_35);
  } else {

   VAR_35 = FUNC_1(VAR_32, VAR_13);
   VAR_35 &= ~VAR_15;
   FUNC_2(VAR_32, VAR_13, VAR_35);
  }

  goto out;
 }

 VAR_34 = VAR_32->phy.ops.acquire(VAR_32);
 if (VAR_34)
  goto out;

 if (VAR_33)

  FUNC_4(VAR_32);


 VAR_34 = FUNC_3(VAR_32, VAR_0, &VAR_36);
 if (VAR_34) {



  VAR_35 = FUNC_1(VAR_32, VAR_2);
  VAR_35 |= VAR_3;
  FUNC_2(VAR_32, VAR_2, VAR_35);

  FUNC_6(50);

  VAR_34 = FUNC_3(VAR_32, VAR_0,
             &VAR_36);
  if (VAR_34)
   goto release;
 }
 VAR_36 &= ~VAR_1;
 FUNC_5(VAR_32, VAR_0, VAR_36);


 VAR_35 = FUNC_1(VAR_32, VAR_2);
 VAR_35 &= ~VAR_3;
 FUNC_2(VAR_32, VAR_2, VAR_35);




 VAR_34 = FUNC_3(VAR_32, VAR_18, &VAR_36);
 if (VAR_34)
  goto release;
 VAR_36 |= VAR_19;
 FUNC_5(VAR_32, VAR_18, VAR_36);


 VAR_34 = FUNC_3(VAR_32, VAR_20, &VAR_36);
 if (VAR_34)
  goto release;
 VAR_36 &= ~(VAR_25 |
       VAR_28 |
       VAR_26 |
       VAR_29 |
       VAR_24 |
       VAR_23 |
       VAR_22 |
       VAR_21);
 FUNC_5(VAR_32, VAR_20, VAR_36);


 VAR_36 |= VAR_27;
 FUNC_5(VAR_32, VAR_20, VAR_36);


 VAR_35 = FUNC_1(VAR_32, VAR_9);
 VAR_35 &= ~VAR_10;
 FUNC_2(VAR_32, VAR_9, VAR_35);

release:
 VAR_32->phy.ops.release(VAR_32);
 if (VAR_33) {
  VAR_32->phy.ops.reset(VAR_32);
  FUNC_6(50);
 }
out:
 if (VAR_34)
  FUNC_0("Error in ULP disable flow: %d\n", VAR_34);
 else
  VAR_32->dev_spec.ich8lan.ulp_state = VAR_31;

 return VAR_34;
}
