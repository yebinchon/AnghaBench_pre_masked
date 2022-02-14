
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;





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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;




 int VAR_30 ;
 int * VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_1 (char*,int) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_2 (int ,char*,char*,int) ;

void
FUNC_3(void)
{
 char *VAR_40 = "????";
 uint32_t VAR_41;
 uint32_t VAR_42;
 uint32_t VAR_43;
 uint32_t VAR_44 = 0;

 VAR_41 = FUNC_0(VAR_3);
 VAR_42 = VAR_41 & VAR_29;

 switch (VAR_42) {
 case 141:
  VAR_43 = VAR_41 & VAR_0;
  VAR_44 = VAR_41 >> VAR_2;
  VAR_44 &= VAR_1;
  VAR_31 = &VAR_30;
  switch (VAR_43) {
  case 146:
   VAR_32 = VAR_4;
   VAR_40 = "7130";
   break;

  case 145:
   VAR_32 = VAR_5;
   VAR_40 = "7141";
   break;

  case 144:
   VAR_32 = VAR_6;
   VAR_40 = "7161";
   break;
  }
  break;

 case 140:
  VAR_32 = VAR_7;
  VAR_40 = "7240";
  VAR_31 = &VAR_34;
  VAR_44 = (VAR_41 & VAR_21);
  break;

 case 139:
  VAR_32 = VAR_8;
  VAR_40 = "7241";
  VAR_31 = &VAR_34;
  VAR_44 = (VAR_41 & VAR_21);
  break;

 case 138:
  VAR_32 = VAR_9;
  VAR_40 = "7242";
  VAR_31 = &VAR_34;
  VAR_44 = (VAR_41 & VAR_21);
  break;

 case 137:
  VAR_43 = VAR_41 & VAR_22;
  VAR_44 = VAR_41 >> VAR_24;
  VAR_44 &= VAR_23;
  VAR_31 = &VAR_35;
  switch (VAR_43) {
  case 143:
   VAR_32 = VAR_10;
   VAR_40 = "9130";
   break;

  case 142:
   VAR_32 = VAR_11;
   VAR_40 = "9132";
   break;
  }
  break;
 case 136:
  VAR_43 = 0;
  VAR_44 = (VAR_41 & VAR_25);
  VAR_40 = "9330";
  VAR_31 = &VAR_36;
  VAR_32 = VAR_12;
  break;
 case 135:
  VAR_43 = 1;
  VAR_44 = (VAR_41 & VAR_25);
  VAR_40 = "9331";
  VAR_32 = VAR_13;
  VAR_31 = &VAR_36;
  break;

 case 134:
  VAR_43 = 0;
  VAR_44 = (VAR_41 & VAR_26);
  VAR_40 = "9341";
  VAR_32 = VAR_14;
  VAR_31 = &VAR_37;
  break;

 case 133:
  VAR_43 = 0;
  VAR_44 = (VAR_41 & VAR_26);
  VAR_40 = "9342";
  VAR_32 = VAR_15;
  VAR_31 = &VAR_37;
  break;

 case 132:
  VAR_43 = 0;
  VAR_44 = (VAR_41 & VAR_26);
  VAR_40 = "9344";
  VAR_32 = VAR_16;
  VAR_31 = &VAR_37;
  break;

 case 131:
  VAR_43 = 0;
  VAR_44 = (VAR_41 & VAR_27);
  VAR_40 = "9533";
  VAR_32 = VAR_17;
  VAR_31 = &VAR_38;
  break;

 case 130:
  VAR_43 = 0;
  VAR_44 = (VAR_41 & VAR_27);
  VAR_40 = "9533v2";
  VAR_32 = VAR_18;
  VAR_31 = &VAR_38;
  break;

 case 129:
  VAR_43 = 0;
  VAR_44 = (VAR_41 & VAR_28);
  VAR_40 = "9556";
  VAR_32 = VAR_19;
  VAR_31 = &VAR_39;
  break;

 case 128:
  VAR_43 = 0;
  VAR_44 = (VAR_41 & VAR_28);
  VAR_40 = "9558";
  VAR_32 = VAR_20;
  VAR_31 = &VAR_39;
  break;

 default:
  FUNC_1("ar71xx: unknown chip id:0x%08x\n", VAR_41);
 }

 FUNC_2(VAR_33, "Atheros AR%s rev %u", VAR_40, VAR_44);
}
