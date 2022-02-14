
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (struct ixgbe_hw*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_5(struct ixgbe_hw *VAR_10, u8 VAR_11)
{
 u32 VAR_12;

 FUNC_0("ixgbe_set_fdir_drop_queue_82599");

 VAR_12 = FUNC_1(VAR_10, VAR_2);
 VAR_12 &= ~(VAR_4 | VAR_6);


 VAR_12 |= (VAR_11 << VAR_5);
 if ((VAR_10->mac.type == VAR_7) ||
     (VAR_10->mac.type == VAR_9) ||
     (VAR_10->mac.type == VAR_8))
  VAR_12 |= VAR_3;

 FUNC_3(VAR_10, VAR_0,
   (FUNC_1(VAR_10, VAR_0) |
    VAR_1));
 FUNC_2(VAR_10);
 FUNC_3(VAR_10, VAR_0,
   (FUNC_1(VAR_10, VAR_0) &
    ~VAR_1));
 FUNC_2(VAR_10);


 FUNC_4(VAR_10, VAR_12);
}
