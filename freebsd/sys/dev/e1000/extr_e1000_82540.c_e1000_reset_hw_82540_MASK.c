
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
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;


 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_11)
{
 u32 VAR_12, VAR_13;
 s32 VAR_14 = VAR_8;

 FUNC_0("e1000_reset_hw_82540");

 FUNC_1("Masking off all interrupts\n");
 FUNC_4(VAR_11, VAR_4, 0xFFFFFFFF);

 FUNC_4(VAR_11, VAR_7, 0);
 FUNC_4(VAR_11, VAR_9, VAR_10);
 FUNC_3(VAR_11);





 FUNC_6(10);

 VAR_12 = FUNC_2(VAR_11, VAR_0);

 FUNC_1("Issuing a global reset to 82540/82545/82546 MAC\n");
 switch (VAR_11->mac.type) {
 case 129:
 case 128:
  FUNC_4(VAR_11, VAR_1, VAR_12 | VAR_2);
  break;
 default:





  FUNC_5(VAR_11, VAR_0, VAR_12 | VAR_2);
  break;
 }


 FUNC_6(5);


 VAR_13 = FUNC_2(VAR_11, VAR_5);
 VAR_13 &= ~VAR_6;
 FUNC_4(VAR_11, VAR_5, VAR_13);

 FUNC_4(VAR_11, VAR_4, 0xffffffff);
 FUNC_2(VAR_11, VAR_3);

 return VAR_14;
}
