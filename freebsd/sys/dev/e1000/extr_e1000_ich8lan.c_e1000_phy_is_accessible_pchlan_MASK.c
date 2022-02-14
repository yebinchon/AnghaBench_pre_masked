
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* write_reg_locked ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg_locked ) (struct e1000_hw*,int ,int*) ;int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {int id; int revision; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct e1000_hw*,int ) ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int*) ;
 int FUNC_9 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static bool FUNC_10(struct e1000_hw *VAR_12)
{
 u16 VAR_13 = 0;
 u32 VAR_14 = 0;
 s32 VAR_15 = 0;
 u16 VAR_16;
 u32 VAR_17 = 0;

 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  VAR_15 = VAR_12->phy.ops.read_reg_locked(VAR_12, VAR_7, &VAR_13);
  if (VAR_15 || (VAR_13 == 0xFFFF))
   continue;
  VAR_14 = (u32)(VAR_13 << 16);

  VAR_15 = VAR_12->phy.ops.read_reg_locked(VAR_12, VAR_8, &VAR_13);
  if (VAR_15 || (VAR_13 == 0xFFFF)) {
   VAR_14 = 0;
   continue;
  }
  VAR_14 |= (u32)(VAR_13 & VAR_9);
  break;
 }

 if (VAR_12->phy.id) {
  if (VAR_12->phy.id == VAR_14)
   goto out;
 } else if (VAR_14) {
  VAR_12->phy.id = VAR_14;
  VAR_12->phy.revision = (u32)(VAR_13 & ~VAR_9);
  goto out;
 }




 if (VAR_12->mac.type < VAR_11) {
  VAR_12->phy.ops.release(VAR_12);
  VAR_15 = FUNC_3(VAR_12);
  if (!VAR_15)
   VAR_15 = FUNC_2(VAR_12);
  VAR_12->phy.ops.acquire(VAR_12);
 }

 if (VAR_15)
  return VAR_6;
out:
 if (VAR_12->mac.type >= VAR_11) {

  if (!(FUNC_0(VAR_12, VAR_4) &
      VAR_5)) {

   VAR_12->phy.ops.read_reg_locked(VAR_12, VAR_0, &VAR_13);
   VAR_13 &= ~VAR_1;
   VAR_12->phy.ops.write_reg_locked(VAR_12, VAR_0, VAR_13);


   VAR_17 = FUNC_0(VAR_12, VAR_2);
   VAR_17 &= ~VAR_3;
   FUNC_1(VAR_12, VAR_2, VAR_17);
  }
 }

 return VAR_10;
}
