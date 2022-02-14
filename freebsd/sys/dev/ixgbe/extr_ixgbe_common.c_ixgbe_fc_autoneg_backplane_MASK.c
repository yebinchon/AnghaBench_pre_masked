
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct ixgbe_hw*,int,int,int ,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 s32 VAR_17 = VAR_6;






 VAR_16 = FUNC_1(VAR_12, VAR_7);
 if ((VAR_16 & VAR_10) == 0) {
  FUNC_0("Auto-Negotiation did not complete\n");
  goto out;
 }

 if (VAR_12->mac.type == VAR_11) {
  VAR_13 = FUNC_1(VAR_12, VAR_8);
  if ((VAR_13 & VAR_9) == 0) {
   FUNC_0("Link partner is not AN enabled\n");
   goto out;
  }
 }




 VAR_15 = FUNC_1(VAR_12, VAR_3);
 VAR_14 = FUNC_1(VAR_12, VAR_0);

 VAR_17 = FUNC_2(VAR_12, VAR_15,
  VAR_14, VAR_5, VAR_4,
  VAR_2, VAR_1);

out:
 return VAR_17;
}
