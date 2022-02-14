
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bnxt_link_info {int support_speeds; } ;
struct bnxt_softc {int flags; int dev; int media; struct bnxt_link_info link_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct bnxt_softc*) ;
 int FUNC_3 (int ,int,int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct bnxt_softc *VAR_46)
{
 struct bnxt_link_info *VAR_47 = &VAR_46->link_info;
 uint16_t VAR_48;
 uint8_t VAR_49 = FUNC_2(VAR_46);

 VAR_48 = VAR_47->support_speeds;


 FUNC_3(VAR_46->media, VAR_34 | VAR_33, 0, ((void*)0));

 if (VAR_46->flags & VAR_0)
  return;

 switch (VAR_49) {
 case 155:
 case 142:
 case 147:
 case 145:
 case 146:
 case 138:
  FUNC_0(VAR_48, VAR_35, VAR_7);
  FUNC_0(VAR_48, VAR_45, VAR_31);
  FUNC_0(VAR_48, VAR_44, VAR_27);
  FUNC_0(VAR_48, VAR_42, VAR_23);
  FUNC_0(VAR_48, VAR_37, VAR_13);
  FUNC_0(VAR_48, VAR_39, VAR_6);
  break;

 case 153:
 case 140:
 case 133:
  FUNC_0(VAR_48, VAR_35, VAR_9);
  FUNC_0(VAR_48, VAR_44, VAR_29);
  FUNC_0(VAR_48, VAR_42, VAR_25);
  FUNC_0(VAR_48, VAR_37, VAR_15);
  FUNC_0(VAR_48, VAR_39, VAR_3);
  break;

 case 152:
 case 151:
 case 139:
 case 132:
 case 141:
 case 154:
 case 144:
 case 149:
  FUNC_0(VAR_48, VAR_35, VAR_10);
  FUNC_0(VAR_48, VAR_44, VAR_30);
  FUNC_0(VAR_48, VAR_42, VAR_26);
  FUNC_0(VAR_48, VAR_37, VAR_16);
  FUNC_0(VAR_48, VAR_39, VAR_5);
  break;

 case 135:
 case 136:
 case 137:
  FUNC_0(VAR_48, VAR_35, VAR_8);
  FUNC_0(VAR_48, VAR_45, VAR_32);
  FUNC_0(VAR_48, VAR_44, VAR_28);
  FUNC_0(VAR_48, VAR_42, VAR_24);
  FUNC_0(VAR_48, VAR_41, VAR_19);
  FUNC_0(VAR_48, VAR_37, VAR_14);
  FUNC_0(VAR_48, VAR_39, VAR_2);
  break;

 case 143:
  FUNC_0(VAR_48, VAR_42, VAR_22);
  FUNC_0(VAR_48, VAR_37, VAR_12);
  break;

 case 150:
  FUNC_0(VAR_48, VAR_40, VAR_1);
  break;

 case 148:
 case 131:
 case 130:
  FUNC_0(VAR_48, VAR_37, VAR_17);
  FUNC_0(VAR_48, VAR_43, VAR_21);
  FUNC_0(VAR_48, VAR_39, VAR_6);
  FUNC_0(VAR_48, VAR_36, VAR_11);
  FUNC_0(VAR_48, VAR_38, VAR_18);
  break;

 case 134:
  FUNC_0(VAR_48, VAR_37, VAR_14);
  FUNC_0(VAR_48, VAR_43, VAR_20);
  FUNC_0(VAR_48, VAR_39, VAR_2);
  break;

 case 129:
  FUNC_0(VAR_48, VAR_39, VAR_4);
  break;

 case 128:

  FUNC_1(VAR_46->dev, "Unknown phy type\n");
  break;

        default:

  FUNC_1(VAR_46->dev, "phy type %d not supported by driver\n", VAR_49);
  break;
 }

 return;
}
