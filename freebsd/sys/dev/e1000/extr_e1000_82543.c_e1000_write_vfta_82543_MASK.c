
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct e1000_hw*,int,int) ;

__attribute__((used)) static void FUNC_5(struct e1000_hw *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_0("e1000_write_vfta_82543");

 if ((VAR_2->mac.type == VAR_1) && (VAR_3 & 1)) {
  VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_3 - 1);
  FUNC_3(VAR_2, VAR_0, VAR_3, VAR_4);
  FUNC_2(VAR_2);
  FUNC_3(VAR_2, VAR_0, VAR_3 - 1, VAR_5);
  FUNC_2(VAR_2);
 } else {
  FUNC_4(VAR_2, VAR_3, VAR_4);
 }
}
