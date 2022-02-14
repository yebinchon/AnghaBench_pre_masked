
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct e1000_hw *VAR_9)
{
 u32 VAR_10;

 FUNC_0("e1000_toggle_lanphypc_pch_lpt");


 VAR_10 = FUNC_1(VAR_9, VAR_5);
 VAR_10 &= ~VAR_7;
 VAR_10 |= VAR_6;
 FUNC_3(VAR_9, VAR_5, VAR_10);


 VAR_10 = FUNC_1(VAR_9, VAR_0);
 VAR_10 |= VAR_3;
 VAR_10 &= ~VAR_4;
 FUNC_3(VAR_9, VAR_0, VAR_10);
 FUNC_2(VAR_9);
 FUNC_4(1);
 VAR_10 &= ~VAR_3;
 FUNC_3(VAR_9, VAR_0, VAR_10);
 FUNC_2(VAR_9);

 if (VAR_9->mac.type < VAR_8) {
  FUNC_4(50);
 } else {
  u16 VAR_11 = 20;

  do {
   FUNC_4(5);
  } while (!(FUNC_1(VAR_9, VAR_1) &
      VAR_2) && VAR_11--);

  FUNC_4(30);
 }
}
