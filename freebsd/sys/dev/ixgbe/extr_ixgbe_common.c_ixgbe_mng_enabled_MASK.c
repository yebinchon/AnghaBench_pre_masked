
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

bool FUNC_3(struct ixgbe_hw *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_2(VAR_8, FUNC_1(VAR_8));
 if ((VAR_9 & VAR_3) != VAR_2)
  return VAR_0;

 VAR_10 = FUNC_2(VAR_8, VAR_4);
 if (!(VAR_10 & VAR_5))
  return VAR_0;

 if (VAR_8->mac.type <= VAR_7) {
  VAR_11 = FUNC_2(VAR_8, FUNC_0(VAR_8));
  if (VAR_11 & VAR_1)
   return VAR_0;
 }

 return VAR_6;
}
