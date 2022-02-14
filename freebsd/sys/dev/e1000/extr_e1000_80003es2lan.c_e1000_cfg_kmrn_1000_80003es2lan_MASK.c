
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10, VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;

 FUNC_0("e1000_configure_kmrn_for_1000");

 VAR_10 = VAR_1;
 VAR_9 =
     FUNC_3(VAR_8,
          VAR_2,
          VAR_10);
 if (VAR_9)
  return VAR_9;


 VAR_12 = FUNC_1(VAR_8, VAR_3);
 VAR_12 &= ~VAR_4;
 VAR_12 |= VAR_0;
 FUNC_2(VAR_8, VAR_3, VAR_12);

 do {
  VAR_9 = VAR_8->phy.ops.read_reg(VAR_8, VAR_7,
            &VAR_10);
  if (VAR_9)
   return VAR_9;

  VAR_9 = VAR_8->phy.ops.read_reg(VAR_8, VAR_7,
            &VAR_11);
  if (VAR_9)
   return VAR_9;
  VAR_13++;
 } while ((VAR_10 != VAR_11) && (VAR_13 < VAR_6));

 VAR_10 &= ~VAR_5;

 return VAR_8->phy.ops.write_reg(VAR_8, VAR_7, VAR_10);
}
