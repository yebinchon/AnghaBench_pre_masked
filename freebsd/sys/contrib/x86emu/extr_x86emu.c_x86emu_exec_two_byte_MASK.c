
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct x86emu*,int) ;
 int FUNC_2 (struct x86emu*,int) ;
 int FUNC_3 (struct x86emu*) ;
 int FUNC_4 (struct x86emu*) ;
 int FUNC_5 (struct x86emu*) ;
 int FUNC_6 (struct x86emu*) ;
 int FUNC_7 (struct x86emu*) ;
 int FUNC_8 (struct x86emu*) ;
 int FUNC_9 (struct x86emu*) ;
 int FUNC_10 (struct x86emu*) ;
 int FUNC_11 (struct x86emu*) ;
 int FUNC_12 (struct x86emu*) ;
 int FUNC_13 (struct x86emu*) ;
 int FUNC_14 (struct x86emu*) ;
 int FUNC_15 (struct x86emu*) ;
 int FUNC_16 (struct x86emu*) ;
 int FUNC_17 (struct x86emu*) ;
 int FUNC_18 (struct x86emu*) ;
 int FUNC_19 (struct x86emu*) ;
 int FUNC_20 (struct x86emu*) ;
 int FUNC_21 (struct x86emu*) ;
 int FUNC_22 (struct x86emu*) ;
 int FUNC_23 (struct x86emu*) ;
 int FUNC_24 (struct x86emu*) ;
 int FUNC_25 (struct x86emu*) ;
 int FUNC_26 (struct x86emu*) ;
 int FUNC_27 (struct x86emu*) ;
 int FUNC_28 (struct x86emu*) ;
 int FUNC_29 (struct x86emu*) ;
 int FUNC_30 (int,int) ;

__attribute__((used)) static void
FUNC_31(struct x86emu * VAR_5)
{
 uint8_t VAR_6;

 VAR_6 = FUNC_3(VAR_5);

 switch (VAR_6) {
 case 0x31:
  FUNC_24(VAR_5);
  break;

 case 0x80:
  FUNC_1(VAR_5, FUNC_0(VAR_1));
  break;
 case 0x81:
  FUNC_1(VAR_5, !FUNC_0(VAR_1));
  break;
 case 0x82:
  FUNC_1(VAR_5, FUNC_0(VAR_0));
  break;
 case 0x83:
  FUNC_1(VAR_5, !FUNC_0(VAR_0));
  break;
 case 0x84:
  FUNC_1(VAR_5, FUNC_0(VAR_4));
  break;
 case 0x85:
  FUNC_1(VAR_5, !FUNC_0(VAR_4));
  break;
 case 0x86:
  FUNC_1(VAR_5, FUNC_0(VAR_0) || FUNC_0(VAR_4));
  break;
 case 0x87:
  FUNC_1(VAR_5, !(FUNC_0(VAR_0) || FUNC_0(VAR_4)));
  break;
 case 0x88:
  FUNC_1(VAR_5, FUNC_0(VAR_3));
  break;
 case 0x89:
  FUNC_1(VAR_5, !FUNC_0(VAR_3));
  break;
 case 0x8a:
  FUNC_1(VAR_5, FUNC_0(VAR_2));
  break;
 case 0x8b:
  FUNC_1(VAR_5, !FUNC_0(VAR_2));
  break;
 case 0x8c:
  FUNC_1(VAR_5, FUNC_30(FUNC_0(VAR_3),
      FUNC_0(VAR_1)));
  break;
 case 0x8d:
  FUNC_1(VAR_5, !(FUNC_30(FUNC_0(VAR_3),
      FUNC_0(VAR_1))));
  break;
 case 0x8e:
  FUNC_1(VAR_5, (FUNC_30(FUNC_0(VAR_3), FUNC_0(VAR_1))
      || FUNC_0(VAR_4)));
  break;
 case 0x8f:
  FUNC_1(VAR_5,
      !(FUNC_30(FUNC_0(VAR_3), FUNC_0(VAR_1)) ||
      FUNC_0(VAR_4)));
  break;

 case 0x90:
  FUNC_2(VAR_5, FUNC_0(VAR_1));
  break;
 case 0x91:
  FUNC_2(VAR_5, !FUNC_0(VAR_1));
  break;
 case 0x92:
  FUNC_2(VAR_5, FUNC_0(VAR_0));
  break;
 case 0x93:
  FUNC_2(VAR_5, !FUNC_0(VAR_0));
  break;
 case 0x94:
  FUNC_2(VAR_5, FUNC_0(VAR_4));
  break;
 case 0x95:
  FUNC_2(VAR_5, !FUNC_0(VAR_4));
  break;
 case 0x96:
  FUNC_2(VAR_5, FUNC_0(VAR_0) || FUNC_0(VAR_4));
  break;
 case 0x97:
  FUNC_2(VAR_5, !(FUNC_0(VAR_0) || FUNC_0(VAR_4)));
  break;
 case 0x98:
  FUNC_2(VAR_5, FUNC_0(VAR_3));
  break;
 case 0x99:
  FUNC_2(VAR_5, !FUNC_0(VAR_3));
  break;
 case 0x9a:
  FUNC_2(VAR_5, FUNC_0(VAR_2));
  break;
 case 0x9b:
  FUNC_2(VAR_5, !FUNC_0(VAR_2));
  break;
 case 0x9c:
  FUNC_2(VAR_5, FUNC_30(FUNC_0(VAR_3),
      FUNC_0(VAR_1)));
  break;
 case 0x9d:
  FUNC_2(VAR_5, FUNC_30(FUNC_0(VAR_3),
      FUNC_0(VAR_1)));
  break;
 case 0x9e:
  FUNC_2(VAR_5,
      (FUNC_30(FUNC_0(VAR_3), FUNC_0(VAR_1)) ||
      FUNC_0(VAR_4)));
  break;
 case 0x9f:
  FUNC_2(VAR_5,
      !(FUNC_30(FUNC_0(VAR_3), FUNC_0(VAR_1)) ||
      FUNC_0(VAR_4)));
  break;

 case 0xa0:
  FUNC_22(VAR_5);
  break;
 case 0xa1:
  FUNC_20(VAR_5);
  break;
 case 0xa2:
  FUNC_11(VAR_5);
  break;
 case 0xa3:
  FUNC_7(VAR_5);
  break;
 case 0xa4:
  FUNC_26(VAR_5);
  break;
 case 0xa5:
  FUNC_25(VAR_5);
  break;
 case 0xa8:
  FUNC_23(VAR_5);
  break;
 case 0xa9:
  FUNC_21(VAR_5);
  break;
 case 0xab:
  FUNC_10(VAR_5);
  break;
 case 0xac:
  FUNC_28(VAR_5);
  break;
 case 0xad:
  FUNC_27(VAR_5);
  break;
 case 0xaf:
  FUNC_12(VAR_5);
  break;



 case 0xb2:
  FUNC_15(VAR_5);
  break;
 case 0xb3:
  FUNC_9(VAR_5);
  break;
 case 0xb4:
  FUNC_13(VAR_5);
  break;
 case 0xb5:
  FUNC_14(VAR_5);
  break;
 case 0xb6:
  FUNC_18(VAR_5);
  break;
 case 0xb7:
  FUNC_19(VAR_5);
  break;
 case 0xba:
  FUNC_6(VAR_5);
  break;
 case 0xbb:
  FUNC_8(VAR_5);
  break;
 case 0xbc:
  FUNC_4(VAR_5);
  break;
 case 0xbd:
  FUNC_5(VAR_5);
  break;
 case 0xbe:
  FUNC_16(VAR_5);
  break;
 case 0xbf:
  FUNC_17(VAR_5);
  break;
 default:
  FUNC_29(VAR_5);
  break;
 }
}
