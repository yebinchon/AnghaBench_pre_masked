
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int type; int serdes_link_state; } ;
struct TYPE_5__ {scalar_t__ media_type; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ phy; TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


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
 int VAR_9 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int VAR_13 ;





 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_9 (struct e1000_hw*) ;
 int VAR_16 ;
 int FUNC_10 (struct e1000_hw*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 s32 VAR_22;

 FUNC_0("e1000_reset_hw_82571");




 VAR_22 = FUNC_6(VAR_17);
 if (VAR_22)
  FUNC_1("PCI-E Master disable polling has failed.\n");

 FUNC_1("Masking off all interrupts\n");
 FUNC_4(VAR_17, VAR_8, 0xffffffff);

 FUNC_4(VAR_17, VAR_9, 0);
 VAR_21 = FUNC_2(VAR_17, VAR_11);
 VAR_21 &= ~VAR_12;
 FUNC_4(VAR_17, VAR_11, VAR_21);
 FUNC_3(VAR_17);

 FUNC_11(10);




 switch (VAR_17->mac.type) {
 case 130:
 case 129:
 case 128:
  VAR_22 = FUNC_8(VAR_17);
  break;
 default:
  break;
 }

 VAR_18 = FUNC_2(VAR_17, VAR_0);

 FUNC_1("Issuing a global reset to MAC\n");
 FUNC_4(VAR_17, VAR_0, VAR_18 | VAR_3);


 switch (VAR_17->mac.type) {
 case 130:
 case 129:
 case 128:

  if (!VAR_22)
   FUNC_9(VAR_17);
  break;
 default:

  break;
 }

 if (VAR_17->nvm.type == VAR_15) {
  FUNC_12(10);
  VAR_19 = FUNC_2(VAR_17, VAR_1);
  VAR_19 |= VAR_2;
  FUNC_4(VAR_17, VAR_1, VAR_19);
  FUNC_3(VAR_17);
 }

 VAR_22 = FUNC_7(VAR_17);
 if (VAR_22)

  return VAR_22;






 switch (VAR_17->mac.type) {
 case 132:
 case 131:



  VAR_20 = FUNC_2(VAR_17, VAR_4);
  VAR_20 &= ~(VAR_6 | VAR_5);
  FUNC_4(VAR_17, VAR_4, VAR_20);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_11(25);
  break;
 default:
  break;
 }


 FUNC_4(VAR_17, VAR_8, 0xffffffff);
 FUNC_2(VAR_17, VAR_7);

 if (VAR_17->mac.type == 132) {

  VAR_22 = FUNC_5(VAR_17);
  if (VAR_22)
   return VAR_22;

  FUNC_10(VAR_17, VAR_13);
 }


 if (VAR_17->phy.media_type == VAR_14)
  VAR_17->mac.serdes_link_state = VAR_16;

 return VAR_10;
}
