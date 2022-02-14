
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_3, u32 VAR_4,
      u8 *VAR_5)
{
 s32 VAR_6;
 u16 VAR_7 = 0;




 if (VAR_3->mac.type >= VAR_2)
  return -VAR_0;
 else
  VAR_6 = FUNC_0(VAR_3, VAR_4, 1, &VAR_7);

 if (VAR_6)
  return VAR_6;

 *VAR_5 = (u8)VAR_7;

 return VAR_1;
}
