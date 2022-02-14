
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,scalar_t__) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_9, u16 VAR_10)
{
 s32 VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;
 u16 VAR_14, VAR_15;

 FUNC_0("e1000_configure_kmrn_for_10_100");

 VAR_14 = VAR_1;
 VAR_11 =
     FUNC_3(VAR_9,
          VAR_2,
          VAR_14);
 if (VAR_11)
  return VAR_11;


 VAR_12 = FUNC_1(VAR_9, VAR_3);
 VAR_12 &= ~VAR_4;
 VAR_12 |= VAR_0;
 FUNC_2(VAR_9, VAR_3, VAR_12);

 do {
  VAR_11 = VAR_9->phy.ops.read_reg(VAR_9, VAR_7,
            &VAR_14);
  if (VAR_11)
   return VAR_11;

  VAR_11 = VAR_9->phy.ops.read_reg(VAR_9, VAR_7,
            &VAR_15);
  if (VAR_11)
   return VAR_11;
  VAR_13++;
 } while ((VAR_14 != VAR_15) && (VAR_13 < VAR_6));

 if (VAR_10 == VAR_8)
  VAR_14 |= VAR_5;
 else
  VAR_14 &= ~VAR_5;

 return VAR_9->phy.ops.write_reg(VAR_9, VAR_7, VAR_14);
}
