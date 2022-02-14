
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int requested_mode; } ;
struct TYPE_8__ {int (* read ) (struct e1000_hw*,int ,int,int*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_7__ {scalar_t__ type; int autoneg; } ;
struct TYPE_6__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_5__ fc; TYPE_4__ nvm; TYPE_2__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct e1000_hw*,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;



 int FUNC_5 (struct e1000_hw*) ;
 scalar_t__ VAR_33 ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*,int ,int,int*) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_34)
{
 u32 VAR_35, VAR_36, VAR_37, VAR_38;
 bool VAR_39;
 s32 VAR_40 = VAR_25;
 u16 VAR_41;

 FUNC_0("e1000_setup_serdes_link_82575");

 if ((VAR_34->phy.media_type != VAR_33) &&
     !FUNC_6(VAR_34))
  return VAR_40;







 FUNC_4(VAR_34, VAR_23, VAR_24);


 VAR_35 = FUNC_3(VAR_34, VAR_1);
 VAR_35 &= ~VAR_3;
 FUNC_4(VAR_34, VAR_1, VAR_35);

 VAR_36 = FUNC_3(VAR_34, VAR_0);
 VAR_36 |= VAR_7;


 if (VAR_34->mac.type == VAR_31 || VAR_34->mac.type == VAR_32)
  VAR_36 |= VAR_9 | VAR_10;

 VAR_37 = FUNC_3(VAR_34, VAR_13);


 VAR_39 = VAR_34->mac.autoneg;

 switch (VAR_35 & VAR_2) {
 case 131:

  VAR_39 = VAR_30;

  VAR_37 &= ~(VAR_16);
  break;
 case 132:

  VAR_39 = VAR_28;

 default:
  if (VAR_34->mac.type == VAR_31 ||
      VAR_34->mac.type == VAR_32) {
   VAR_40 = VAR_34->nvm.ops.read(VAR_34, VAR_29, 1, &VAR_41);
   if (VAR_40) {
    FUNC_1("NVM Read Error\n");
    return VAR_40;
   }

   if (VAR_41 & VAR_11)
    VAR_39 = VAR_28;
  }






  VAR_36 |= VAR_8 | VAR_6 |
       VAR_4 | VAR_5;


  VAR_37 |= VAR_22 | VAR_17;
  break;
 }

 FUNC_4(VAR_34, VAR_0, VAR_36);







 VAR_37 &= ~(VAR_14 | VAR_18 |
   VAR_21 | VAR_20);

 if (VAR_39) {

  VAR_37 |= VAR_14 |
         VAR_15;


  VAR_37 &= ~VAR_19;


  VAR_38 = FUNC_3(VAR_34, VAR_12);
  VAR_38 &= ~(VAR_26 | VAR_27);

  switch (VAR_34->fc.requested_mode) {
  case 130:
  case 129:
   VAR_38 |= VAR_26;
   VAR_38 |= VAR_27;
   break;
  case 128:
   VAR_38 |= VAR_26;
   break;
  default:
   break;
  }

  FUNC_4(VAR_34, VAR_12, VAR_38);

  FUNC_2("Configuring Autoneg:PCS_LCTL=0x%08X\n", VAR_37);
 } else {

  VAR_37 |= VAR_21;


  VAR_37 |= VAR_19;

  FUNC_2("Configuring Forced Link:PCS_LCTL=0x%08X\n", VAR_37);
 }

 FUNC_4(VAR_34, VAR_13, VAR_37);

 if (!VAR_39 && !FUNC_6(VAR_34))
  FUNC_5(VAR_34);

 return VAR_40;
}
