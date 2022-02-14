
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inst {int i_size; char* i_name; int i_mode; struct inst* i_extra; scalar_t__ i_has_modrm; } ;
struct i_addr {int dummy; } ;
typedef int db_addr_t ;
typedef int boolean_t ;



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
 struct inst* VAR_14 ;
 struct inst* VAR_15 ;
 char** VAR_16 ;
 struct inst* VAR_17 ;
 struct inst* VAR_18 ;
 struct inst* VAR_19 ;
 struct inst* VAR_20 ;
 struct inst* VAR_21 ;
 struct inst* VAR_22 ;
 struct inst* VAR_23 ;
 struct inst* VAR_24 ;
 struct inst* VAR_25 ;
 struct inst VAR_26 ;
 int FUNC_0 (int,int,int,int,int,char const*) ;
 struct inst const* VAR_27 ;
 struct inst* VAR_28 ;
 int* VAR_29 ;
 int FUNC_1 (char const*,int,int,struct i_addr*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int,int,int,struct i_addr*) ;
 int *** VAR_30 ;
 int * VAR_31 ;
 int FUNC_5 (int,int) ;
 size_t FUNC_6 (int,int) ;
 size_t FUNC_7 (int,int) ;
 int FUNC_8 (int,int,int,int) ;


 scalar_t__ FUNC_9 (char const*,char*) ;

db_addr_t
FUNC_10(db_addr_t VAR_32, bool VAR_33)
{
 int VAR_34;
 int VAR_35;
 int VAR_36;
 const char * VAR_37;
 const struct inst * VAR_38;
 const char * VAR_39;
 int VAR_40;
 int VAR_41;
 int VAR_42 = 0;
 int VAR_43 = 0;
 boolean_t VAR_44;
 int VAR_45;
 int VAR_46;
 int VAR_47, VAR_48;
 int VAR_49;
 int VAR_50;
 long VAR_51;
 int VAR_52;
 struct i_addr VAR_53;

 FUNC_8(VAR_34, VAR_32, 1, VAR_5);
 VAR_36 = VAR_5;
 VAR_35 = VAR_6;
 VAR_37 = ((void*)0);




 VAR_47 = VAR_5;
 VAR_48 = VAR_5;
 VAR_46 = VAR_12;
 do {
     switch (VAR_34) {
  case 0x66:
      VAR_35 = VAR_13;
      break;
  case 0x67:
      VAR_36 = VAR_12;
      break;
  case 0x26:
      VAR_37 = "%es";
      break;
  case 0x36:
      VAR_37 = "%ss";
      break;
  case 0x2e:
      VAR_37 = "%cs";
      break;
  case 0x3e:
      VAR_37 = "%ds";
      break;
  case 0x64:
      VAR_37 = "%fs";
      break;
  case 0x65:
      VAR_37 = "%gs";
      break;
  case 0xf0:
      FUNC_2("lock ");
      break;




  case 0xf2:
      VAR_48 = VAR_12;
      break;
  case 0xf3:
      VAR_47 = VAR_12;
      break;
  default:
      VAR_46 = VAR_5;
      break;
     }
     if (VAR_34 >= 0x40 && VAR_34 < 0x50) {
  VAR_42 = VAR_34;
  VAR_46 = VAR_12;
     }
     if (VAR_46) {
  FUNC_8(VAR_34, VAR_32, 1, VAR_5);
     }
 } while (VAR_46);

 if (VAR_34 >= 0xd8 && VAR_34 <= 0xdf) {
     VAR_32 = FUNC_0(VAR_32, VAR_34, VAR_42, VAR_36, VAR_35, VAR_37);
     FUNC_2("\n");
     return (VAR_32);
 }

 VAR_38 = &VAR_28[VAR_34];
 while (VAR_38->i_size == VAR_4) {
     FUNC_8(VAR_34, VAR_32, 1, VAR_5);
     VAR_38 = ((const struct inst * const *)VAR_38->i_extra)[VAR_34>>4];
     if (VAR_38 == ((void*)0)) {
  VAR_38 = &VAR_26;
     }
     else {
  VAR_38 = &VAR_38[VAR_34&0xf];
     }
 }

 if (VAR_38->i_has_modrm) {
     FUNC_8(VAR_43, VAR_32, 1, VAR_5);
     VAR_32 = FUNC_4(VAR_32, VAR_36, VAR_42, VAR_43, &VAR_53);
 }

 VAR_39 = VAR_38->i_name;
 VAR_40 = VAR_38->i_size;
 VAR_41 = VAR_38->i_mode;

 if (VAR_38->i_extra == VAR_24 && FUNC_5(VAR_42, VAR_43) == 3) {
     VAR_38 = &VAR_25[FUNC_6(VAR_42, VAR_43)];
     VAR_39 = VAR_38->i_name;
     VAR_40 = VAR_38->i_size;
     VAR_41 = VAR_38->i_mode;
 }
 else if (VAR_38->i_extra == VAR_14 || VAR_38->i_extra == VAR_17 ||
     VAR_38->i_extra == VAR_21 || VAR_38->i_extra == VAR_22 ||
     VAR_38->i_extra == VAR_23 || VAR_38->i_extra == VAR_24 ||
     VAR_38->i_extra == VAR_15) {
     VAR_39 = ((const char * const *)VAR_38->i_extra)[FUNC_6(VAR_42, VAR_43)];
 }
 else if (VAR_38->i_extra == VAR_18) {
     VAR_38 = VAR_38->i_extra;
     VAR_38 = &VAR_38[FUNC_6(VAR_42, VAR_43)];
     VAR_39 = VAR_38->i_name;
     VAR_41 = VAR_38->i_mode;
 }
 else if (VAR_38->i_extra == VAR_19 || VAR_38->i_extra == VAR_20) {
     VAR_38 = VAR_38->i_extra;
     VAR_38 = &VAR_38[FUNC_6(VAR_42, VAR_43)];
     VAR_39 = VAR_38->i_name;
     VAR_41 = VAR_38->i_mode;
     VAR_40 = VAR_38->i_size;
 }


 if (VAR_38->i_extra == VAR_22 && FUNC_5(VAR_42, VAR_43) == 3) {
  switch (VAR_43) {
  case 0xc1:
   VAR_39 = "vmcall";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xc2:
   VAR_39 = "vmlaunch";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xc3:
   VAR_39 = "vmresume";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xc4:
   VAR_39 = "vmxoff";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xc8:
   VAR_39 = "monitor";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xc9:
   VAR_39 = "mwait";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xca:
   VAR_39 = "clac";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xcb:
   VAR_39 = "stac";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xd0:
   VAR_39 = "xgetbv";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xd1:
   VAR_39 = "xsetbv";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xd8:
   VAR_39 = "vmrun";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xd9:
   VAR_39 = "vmmcall";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xda:
   VAR_39 = "vmload";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xdb:
   VAR_39 = "vmsave";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xdc:
   VAR_39 = "stgi";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xdd:
   VAR_39 = "clgi";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xde:
   VAR_39 = "skinit";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xdf:
   VAR_39 = "invlpga";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xf8:
   VAR_39 = "swapgs";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  case 0xf9:
   VAR_39 = "rdtscp";
   VAR_40 = VAR_7;
   VAR_41 = 0;
   break;
  }
 }
 if (VAR_38->i_extra == VAR_15 && FUNC_5(VAR_42, VAR_43) == 3) {
  VAR_39 = VAR_16[FUNC_6(VAR_42, VAR_43)];
  VAR_40 = VAR_7;
  VAR_41 = 0;
 }


 if (VAR_47 == VAR_12) {
     if (VAR_34 == 0x90) {
  VAR_39 = "pause";
  VAR_40 = VAR_7;
  VAR_41 = 0;
  VAR_47 = VAR_5;
     } else if (VAR_38->i_extra == VAR_24 && FUNC_5(VAR_42, VAR_43) != 3 &&
  FUNC_6(VAR_42, VAR_43) == 0x6) {
  VAR_39 = "vmxon";
  VAR_47 = VAR_5;
     }
 }

 if (VAR_48) {
  if (VAR_38 == &VAR_27[0] || VAR_38 == &VAR_27[1])
   VAR_48 = VAR_5;
 }
 if (VAR_35 == VAR_13) {
     if (VAR_38->i_extra == VAR_24 && FUNC_5(VAR_42, VAR_43) != 3 &&
  FUNC_6(VAR_42, VAR_43) == 0x6) {
  VAR_39 = "vmclear";
     }
 }
 if (VAR_42 & VAR_10) {
     if (FUNC_9(VAR_39, "cwde") == 0)
  VAR_39 = "cdqe";
     else if (FUNC_9(VAR_39, "cmpxchg8b") == 0)
  VAR_39 = "cmpxchg16b";
 }

 if (VAR_47 == VAR_12)
     FUNC_2("repe ");
 if (VAR_48 == VAR_12)
     FUNC_2("repne ");

 if (VAR_40 == VAR_11) {
     if (VAR_35 == VAR_6)
  FUNC_2("%s", VAR_39);
     else
  FUNC_2("%s", (const char *)VAR_38->i_extra);
 } else if (VAR_40 == VAR_0) {
     if (VAR_36 == VAR_5)
  FUNC_2("%s", VAR_39);
     else
  FUNC_2("%s", (const char *)VAR_38->i_extra);
 }
 else {
     FUNC_2("%s", VAR_39);
     if ((VAR_34 >= 0x50 && VAR_34 <= 0x5f) || VAR_34 == 0x68 || VAR_34 == 0x6a) {
  VAR_40 = VAR_7;
  FUNC_2("q");
     }
     if (VAR_40 != VAR_7) {
  if (VAR_40 == VAR_1) {
      FUNC_2("b");
      VAR_35 = VAR_1;
  }
  else if (VAR_40 == VAR_13) {
      FUNC_2("w");
      VAR_35 = VAR_13;
  }
  else if (VAR_35 == VAR_13)
      FUNC_2("w");
  else {
      if (VAR_42 & VAR_10)
   FUNC_2("q");
      else
   FUNC_2("l");
  }
     }
 }
 FUNC_2("\t");
 for (VAR_44 = VAR_12;
      VAR_41 != 0;
      VAR_41 >>= 8, VAR_44 = VAR_5)
 {
     if (!VAR_44)
  FUNC_2(",");

     switch (VAR_41 & 0xFF) {

  case 154:
      FUNC_1(VAR_37, VAR_35, VAR_42, &VAR_53);
      break;

  case 151:
      FUNC_2("*");
      FUNC_1(VAR_37, VAR_35, VAR_42, &VAR_53);
      break;

  case 150:
      FUNC_1(VAR_37, (VAR_42 & VAR_10) ? VAR_8 : VAR_6, VAR_42, &VAR_53);
      break;

  case 153:
      FUNC_1(VAR_37, VAR_6, 0, &VAR_53);
      break;

  case 149:
      FUNC_1(VAR_37, VAR_13, VAR_42, &VAR_53);
      break;

  case 152:
      FUNC_1(VAR_37, VAR_1, VAR_42, &VAR_53);
      break;

  case 139:
      FUNC_2("%s", VAR_30[VAR_42 != 0 ? 1 : 0][(VAR_35 == VAR_6 && (VAR_42 & VAR_10)) ? VAR_8 : VAR_35][FUNC_6(VAR_42, VAR_43)]);
      break;

  case 134:
      FUNC_2("%s", VAR_30[VAR_42 != 0 ? 1 : 0][VAR_13][FUNC_6(VAR_42, VAR_43)]);
      break;

  case 136:
      FUNC_2("%s", VAR_30[VAR_42 != 0 ? 1 : 0][VAR_8][FUNC_6(VAR_42, VAR_43)]);
      break;

  case 138:
      FUNC_2("%s", VAR_30[0][VAR_8][FUNC_7(VAR_42, VAR_34)]);
      break;

  case 137:
      FUNC_2("%s", VAR_30[VAR_42 != 0 ? 1 : 0][(VAR_42 & VAR_9) ? VAR_8 : VAR_6][FUNC_7(VAR_42, VAR_34)]);
      break;

         case 135:
      FUNC_2("%s", VAR_30[VAR_42 != 0 ? 1 : 0][(VAR_35 == VAR_6 && (VAR_42 & VAR_10)) ? VAR_8 : VAR_35][FUNC_7(VAR_42, VAR_43)]);
      break;

  case 133:
      FUNC_2("%s", VAR_31[FUNC_6(VAR_42, VAR_43)]);
      break;

  case 131:
      FUNC_2("%s", VAR_31[FUNC_6(VAR_42, VAR_34)]);
      break;

  case 163:
      FUNC_2("%s", VAR_30[VAR_42 != 0 ? 1 : 0][VAR_35][0]);
      break;

  case 162:
      if (VAR_37)
   FUNC_2("%s:", VAR_37);
      FUNC_2("(%s)", VAR_36 ? "%bx" : "%ebx");
      break;

  case 161:
      FUNC_2("%%cl");
      break;

  case 157:
      FUNC_2("%%dx");
      break;

  case 132:
      if (VAR_37)
   FUNC_2("%s:", VAR_37);
      FUNC_2("(%s)", VAR_36 ? "%si" : "%rsi");
      break;

  case 159:
      FUNC_2("%%es:(%s)", VAR_36 ? "%di" : "%rdi");
      break;

  case 160:
      FUNC_2("%%cr%d", FUNC_6(VAR_42, VAR_43));
      break;

  case 158:
      FUNC_2("%%dr%d", FUNC_6(VAR_42, VAR_43));
      break;

  case 130:
      FUNC_2("%%tr%d", FUNC_6(VAR_42, VAR_43));
      break;

  case 148:
      VAR_52 = VAR_29[VAR_35];
      FUNC_8(VAR_49, VAR_32, VAR_52, VAR_5);
      FUNC_2("$%#r", VAR_49);
      break;

  case 143:
      VAR_52 = VAR_29[(VAR_35 == VAR_6 && (VAR_42 & VAR_10)) ? VAR_8 : VAR_35];
      FUNC_8(VAR_49, VAR_32, VAR_52, VAR_5);
      FUNC_2("$%+#r", VAR_49);
      break;

  case 147:
      FUNC_8(VAR_49, VAR_32, 1, VAR_5);
      FUNC_2("$%#r", VAR_49);
      break;

  case 146:
      FUNC_8(VAR_49, VAR_32, 1, VAR_5);
      if (VAR_49 != 0x0a)
   FUNC_2("$%#r", VAR_49);
      break;

  case 145:
      FUNC_8(VAR_49, VAR_32, 1, VAR_12);
      if (VAR_35 == VAR_13)
   VAR_49 &= 0xFFFF;
      FUNC_2("$%+#r", VAR_49);
      break;

  case 142:
      FUNC_8(VAR_49, VAR_32, 2, VAR_5);
      FUNC_2("$%#r", VAR_49);
      break;

  case 144:
      VAR_52 = VAR_29[VAR_42 & VAR_10 ? VAR_8 : VAR_6];
      FUNC_8(VAR_51, VAR_32, VAR_52, VAR_5);
      FUNC_2("$%#lr", VAR_51);
      break;

  case 141:
      VAR_52 = (VAR_36 ? 2 : 4);
      FUNC_8(VAR_45, VAR_32, VAR_52, VAR_5);
      if (VAR_37)
   FUNC_2("%s:%+#r",VAR_37, VAR_45);
      else
   FUNC_3((db_addr_t)VAR_45, VAR_2);
      break;

  case 156:
      FUNC_8(VAR_45, VAR_32, 1, VAR_12);
      VAR_45 += VAR_32;
      if (VAR_35 == VAR_13)
   VAR_45 &= 0xFFFF;
      FUNC_3((db_addr_t)VAR_45, VAR_3);
      break;

  case 155:
      VAR_52 = VAR_29[(VAR_35 == VAR_6 && (VAR_42 & VAR_10)) ? VAR_8 : VAR_35];
      FUNC_8(VAR_45, VAR_32, VAR_52, VAR_5);
      VAR_45 += VAR_32;
      if (VAR_35 == VAR_13)
   VAR_45 &= 0xFFFF;
      FUNC_3((db_addr_t)VAR_45, VAR_3);
      break;

  case 129:
      FUNC_2("$1");
      break;

  case 128:
      FUNC_2("$3");
      break;

  case 140:
      VAR_52 = VAR_29[VAR_35];
      FUNC_8(VAR_49, VAR_32, VAR_52, VAR_5);
      FUNC_8(VAR_50, VAR_32, 2, VAR_5);
      FUNC_2("$%#r,%#r", VAR_50, VAR_49);
      break;
     }
 }
 FUNC_2("\n");
 return (VAR_32);
}
