
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_5, u32 VAR_6, u16 *VAR_7,
     bool VAR_8)
{
 u32 VAR_9;

 FUNC_0("__e1000_read_kmrn_reg");

 if (!VAR_8) {
  s32 VAR_10 = VAR_4;

  if (!VAR_5->phy.ops.acquire)
   return VAR_4;

  VAR_10 = VAR_5->phy.ops.acquire(VAR_5);
  if (VAR_10)
   return VAR_10;
 }

 VAR_9 = ((VAR_6 << VAR_2) &
         VAR_1) | VAR_3;
 FUNC_3(VAR_5, VAR_0, VAR_9);
 FUNC_2(VAR_5);

 FUNC_6(2);

 VAR_9 = FUNC_1(VAR_5, VAR_0);
 *VAR_7 = (u16)VAR_9;

 if (!VAR_8)
  VAR_5->phy.ops.release(VAR_5);

 return VAR_4;
}
