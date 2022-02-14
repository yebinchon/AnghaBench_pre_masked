
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* write_link ) (struct ixgbe_hw*,int ,int,int) ;} ;
struct TYPE_6__ {int addr; TYPE_2__ ops; } ;
struct TYPE_4__ {int lan_id; } ;
struct ixgbe_hw {TYPE_3__ link; TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int,int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_6,
        ixgbe_link_speed VAR_7,
        bool VAR_8)
{
 s32 VAR_9;
 u16 VAR_10, VAR_11;
 bool VAR_12 = VAR_0;
 FUNC_0(VAR_8);


 VAR_9 = FUNC_2(VAR_6, &VAR_12);





 if (VAR_9 == VAR_4)
  return VAR_5;

 if (VAR_9 != VAR_5)
  return VAR_9;


 FUNC_1(VAR_6, VAR_7);


 VAR_10 = VAR_3 +
      (VAR_6->bus.lan_id << 12);
 if (VAR_12)
  VAR_11 = (VAR_1 << 1) | 0x1;
 else
  VAR_11 = (VAR_2 << 1) | 0x1;
 VAR_9 = VAR_6->link.ops.write_link(VAR_6, VAR_6->link.addr, VAR_10,
       VAR_11);
 return VAR_9;
}
