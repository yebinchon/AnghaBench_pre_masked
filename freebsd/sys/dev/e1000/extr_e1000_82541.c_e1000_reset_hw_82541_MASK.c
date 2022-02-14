
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;


 int VAR_15 ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19;

 FUNC_0("e1000_reset_hw_82541");

 FUNC_1("Masking off all interrupts\n");
 FUNC_4(VAR_16, VAR_4, 0xFFFFFFFF);

 FUNC_4(VAR_16, VAR_8, 0);
 FUNC_4(VAR_16, VAR_10, VAR_11);
 FUNC_3(VAR_16);





 FUNC_7(10);

 VAR_18 = FUNC_2(VAR_16, VAR_0);


 if ((VAR_16->mac.type == 129) || (VAR_16->mac.type == VAR_15)) {
  FUNC_4(VAR_16, VAR_0, (VAR_18 | VAR_1));
  FUNC_3(VAR_16);
  FUNC_7(5);
 }

 FUNC_1("Issuing a global reset to 82541/82547 MAC\n");
 switch (VAR_16->mac.type) {
 case 129:
 case 128:





  FUNC_5(VAR_16, VAR_0, VAR_18 | VAR_2);
  break;
 default:
  FUNC_4(VAR_16, VAR_0, VAR_18 | VAR_2);
  break;
 }


 FUNC_7(20);


 VAR_19 = FUNC_2(VAR_16, VAR_6);
 VAR_19 &= ~VAR_7;
 FUNC_4(VAR_16, VAR_6, VAR_19);

 if ((VAR_16->mac.type == 129) || (VAR_16->mac.type == VAR_15)) {
  FUNC_6(VAR_16);


  VAR_17 = FUNC_2(VAR_16, VAR_5);
  VAR_17 &= VAR_13;
  VAR_17 |= (VAR_12 | VAR_14);
  FUNC_4(VAR_16, VAR_5, VAR_17);
 }


 FUNC_1("Masking off all interrupts\n");
 FUNC_4(VAR_16, VAR_4, 0xFFFFFFFF);


 FUNC_2(VAR_16, VAR_3);

 return VAR_9;
}
