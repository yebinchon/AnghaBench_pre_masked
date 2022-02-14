
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {int revision; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_13, bool VAR_14)
{
 u32 VAR_15 = FUNC_0(VAR_13, VAR_0);
 u32 VAR_16 = FUNC_0(VAR_13, VAR_5);
 s32 VAR_17 = VAR_9;
 u16 VAR_18;

 if (VAR_14 && (VAR_16 & VAR_8)) {
  VAR_17 = VAR_13->phy.ops.acquire(VAR_13);
  if (VAR_17)
   return VAR_17;

  VAR_17 =
      FUNC_2(VAR_13, VAR_3,
            &VAR_18);
  if (VAR_17)
   goto release;

  VAR_17 =
      FUNC_3(VAR_13,
      VAR_3,
      VAR_18 &
      ~VAR_4);
  if (VAR_17)
   goto release;

  FUNC_8(10);

  FUNC_1(VAR_13, VAR_0,
    VAR_15 | VAR_2);

  VAR_17 =
      FUNC_3(VAR_13,
      VAR_3,
      VAR_18);
release:
  VAR_13->phy.ops.release(VAR_13);
 } else {

  VAR_15 &= ~VAR_2;

  if ((VAR_13->phy.revision > 5) || !VAR_14 ||
      ((VAR_16 & VAR_7) &&
       (VAR_16 & VAR_6)))
   goto update_fextnvm6;

  VAR_17 = VAR_13->phy.ops.read_reg(VAR_13, VAR_10, &VAR_18);
  if (VAR_17)
   return VAR_17;


  VAR_18 &= ~VAR_11;

  if (VAR_16 & VAR_7) {

   VAR_18 |= 5 << VAR_12;


   VAR_15 &= ~VAR_1;
  } else {

   VAR_18 |= 50 <<
          VAR_12;


   VAR_15 |= VAR_1;
  }

  VAR_17 = VAR_13->phy.ops.write_reg(VAR_13, VAR_10, VAR_18);
  if (VAR_17)
   return VAR_17;

update_fextnvm6:
  FUNC_1(VAR_13, VAR_0, VAR_15);
 }

 return VAR_17;
}
