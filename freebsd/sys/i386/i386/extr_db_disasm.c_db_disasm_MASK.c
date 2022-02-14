
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inst {char* i_name; int i_size; int i_mode; struct inst* i_extra; scalar_t__ i_has_modrm; } ;
struct i_addr {int dummy; } ;
typedef int db_addr_t ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 struct inst* VAR_9 ;
 struct inst* VAR_10 ;
 char** VAR_11 ;
 struct inst* VAR_12 ;
 struct inst* VAR_13 ;
 struct inst* VAR_14 ;
 struct inst* VAR_15 ;
 struct inst* VAR_16 ;
 struct inst* VAR_17 ;
 struct inst* VAR_18 ;
 struct inst* VAR_19 ;
 struct inst VAR_20 ;
 int FUNC_0 (int,int,int,int,char const*) ;
 struct inst** VAR_21 ;
 struct inst* VAR_22 ;
 int* VAR_23 ;
 int FUNC_1 (char const*,int,struct i_addr*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int,int,struct i_addr*) ;
 int ** VAR_24 ;
 int * VAR_25 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 size_t FUNC_7 (int) ;
 size_t FUNC_8 (int) ;
 int FUNC_9 (int,int,int,int) ;
 int VAR_26 ;



db_addr_t
FUNC_10(db_addr_t VAR_27, bool VAR_28)
{
 int VAR_29;
 int VAR_30;
 int VAR_31;
 const char * VAR_32;
 const struct inst * VAR_33;
 const char * VAR_34;
 int VAR_35;
 int VAR_36;
 int VAR_37 = 0;
 bool VAR_38;
 int VAR_39;
 int VAR_40;
 int VAR_41;
 int VAR_42;
 int VAR_43;
 int VAR_44;
 struct i_addr VAR_45;

 if (FUNC_5(VAR_26) == 16)
    VAR_28 = !VAR_28;
 FUNC_9(VAR_29, VAR_27, 1, VAR_3);
 if (VAR_28) {
     VAR_31 = VAR_7;
     VAR_30 = VAR_8;
 }
 else {
     VAR_31 = VAR_3;
     VAR_30 = VAR_4;
 }
 VAR_32 = ((void*)0);




 VAR_41 = VAR_3;
 VAR_40 = VAR_7;
 do {
     switch (VAR_29) {
  case 0x66:
      VAR_30 = (VAR_28 ? VAR_4 : VAR_8);
      break;
  case 0x67:
      VAR_31 = !VAR_28;
      break;
  case 0x26:
      VAR_32 = "%es";
      break;
  case 0x36:
      VAR_32 = "%ss";
      break;
  case 0x2e:
      VAR_32 = "%cs";
      break;
  case 0x3e:
      VAR_32 = "%ds";
      break;
  case 0x64:
      VAR_32 = "%fs";
      break;
  case 0x65:
      VAR_32 = "%gs";
      break;
  case 0xf0:
      FUNC_2("lock ");
      break;
  case 0xf2:
      FUNC_2("repne ");
      break;
  case 0xf3:
      VAR_41 = VAR_7;
      break;
  default:
      VAR_40 = VAR_3;
      break;
     }
     if (VAR_40) {
  FUNC_9(VAR_29, VAR_27, 1, VAR_3);
     }
     if (VAR_41 == VAR_7) {
  if (VAR_29 == 0x90) {
      FUNC_2("pause\n");
      return (VAR_27);
  }
  FUNC_2("repe ");
  VAR_41 = VAR_3;
     }
 } while (VAR_40);

 if (VAR_29 >= 0xd8 && VAR_29 <= 0xdf) {
     VAR_27 = FUNC_0(VAR_27, VAR_29, VAR_31, VAR_30, VAR_32);
     FUNC_2("\n");
     return (VAR_27);
 }

 if (VAR_29 == 0x0f) {
     FUNC_9(VAR_29, VAR_27, 1, VAR_3);
     VAR_33 = VAR_21[VAR_29>>4];
     if (VAR_33 == ((void*)0)) {
  VAR_33 = &VAR_20;
     }
     else {
  VAR_33 = &VAR_33[VAR_29&0xf];
     }
 }
 else
     VAR_33 = &VAR_22[VAR_29];

 if (VAR_33->i_has_modrm) {
     FUNC_9(VAR_37, VAR_27, 1, VAR_3);
     VAR_27 = FUNC_4(VAR_27, VAR_31, VAR_37, &VAR_45);
 }

 VAR_34 = VAR_33->i_name;
 VAR_35 = VAR_33->i_size;
 VAR_36 = VAR_33->i_mode;

 if (VAR_33->i_extra == VAR_9 || VAR_33->i_extra == VAR_12 ||
     VAR_33->i_extra == VAR_16 || VAR_33->i_extra == VAR_17 ||
     VAR_33->i_extra == VAR_18 || VAR_33->i_extra == VAR_19 ||
     VAR_33->i_extra == VAR_10) {
     VAR_34 = ((const char * const *)VAR_33->i_extra)[FUNC_7(VAR_37)];
 }
 else if (VAR_33->i_extra == VAR_13) {
     VAR_33 = VAR_33->i_extra;
     VAR_33 = &VAR_33[FUNC_7(VAR_37)];
     VAR_34 = VAR_33->i_name;
     VAR_36 = VAR_33->i_mode;
 }
 else if (VAR_33->i_extra == VAR_14 || VAR_33->i_extra == VAR_15) {
     VAR_33 = VAR_33->i_extra;
     VAR_33 = &VAR_33[FUNC_7(VAR_37)];
     VAR_34 = VAR_33->i_name;
     VAR_36 = VAR_33->i_mode;
     VAR_35 = VAR_33->i_size;
 }


 if (VAR_33->i_extra == VAR_17 && FUNC_6(VAR_37) == 3) {
  switch (VAR_37) {
  case 0xc8:
   VAR_34 = "monitor";
   VAR_35 = VAR_5;
   VAR_36 = 0;
   break;
  case 0xc9:
   VAR_34 = "mwait";
   VAR_35 = VAR_5;
   VAR_36 = 0;
   break;
  }
 }
 if (VAR_33->i_extra == VAR_10 && FUNC_6(VAR_37) == 3) {
  VAR_34 = VAR_11[FUNC_7(VAR_37)];
  VAR_35 = VAR_5;
  VAR_36 = 0;
 }

 if (VAR_35 == VAR_6) {
     if (VAR_30 == VAR_8)
  FUNC_2("%s", VAR_34);
     else
  FUNC_2("%s", (const char *)VAR_33->i_extra);
 }
 else {
     FUNC_2("%s", VAR_34);
     if (VAR_35 != VAR_5) {
  if (VAR_35 == VAR_0) {
      FUNC_2("b");
      VAR_30 = VAR_0;
  }
  else if (VAR_35 == VAR_8) {
      FUNC_2("w");
      VAR_30 = VAR_8;
  }
  else if (VAR_30 == VAR_8)
      FUNC_2("w");
  else
      FUNC_2("l");
     }
 }
 FUNC_2("\t");
 for (VAR_38 = 1;
      VAR_36 != 0;
      VAR_36 >>= 8, VAR_38 = 0)
 {
     if (!VAR_38)
  FUNC_2(",");

     switch (VAR_36 & 0xFF) {

  case 150:
      FUNC_1(VAR_32, VAR_30, &VAR_45);
      break;

  case 148:
      FUNC_2("*");
      FUNC_1(VAR_32, VAR_30, &VAR_45);
      break;

  case 147:
      FUNC_1(VAR_32, VAR_4, &VAR_45);
      break;

  case 146:
      FUNC_1(VAR_32, VAR_8, &VAR_45);
      break;

  case 149:
      FUNC_1(VAR_32, VAR_0, &VAR_45);
      break;

  case 137:
      FUNC_2("%s", VAR_24[VAR_30][FUNC_7(VAR_37)]);
      break;

  case 134:
      FUNC_2("%s", VAR_24[VAR_8][FUNC_7(VAR_37)]);
      break;

  case 136:
      FUNC_2("%s", VAR_24[VAR_30][FUNC_8(VAR_29)]);
      break;

  case 135:
      FUNC_2("%s", VAR_24[VAR_4][FUNC_8(VAR_29)]);
      break;

  case 133:
      FUNC_2("%s", VAR_25[FUNC_7(VAR_37)]);
      break;

  case 131:
      FUNC_2("%s", VAR_25[FUNC_7(VAR_29)]);
      break;

  case 159:
      FUNC_2("%s", VAR_24[VAR_30][0]);
      break;

  case 158:
      if (VAR_32)
   FUNC_2("%s:", VAR_32);
      FUNC_2("(%s)", VAR_31 ? "%bx" : "%ebx");
      break;

  case 157:
      FUNC_2("%%cl");
      break;

  case 153:
      FUNC_2("%%dx");
      break;

  case 132:
      if (VAR_32)
   FUNC_2("%s:", VAR_32);
      FUNC_2("(%s)", VAR_31 ? "%si" : "%esi");
      break;

  case 155:
      FUNC_2("%%es:(%s)", VAR_31 ? "%di" : "%edi");
      break;

  case 156:
      FUNC_2("%%cr%d", FUNC_7(VAR_37));
      break;

  case 154:
      FUNC_2("%%dr%d", FUNC_7(VAR_37));
      break;

  case 130:
      FUNC_2("%%tr%d", FUNC_7(VAR_37));
      break;

  case 145:
      VAR_44 = VAR_23[VAR_30];
      FUNC_9(VAR_42, VAR_27, VAR_44, VAR_3);
      FUNC_2("$%#r", VAR_42);
      break;

  case 141:
      VAR_44 = VAR_23[VAR_30];
      FUNC_9(VAR_42, VAR_27, VAR_44, VAR_3);
      FUNC_2("$%+#r", VAR_42);
      break;

  case 144:
      FUNC_9(VAR_42, VAR_27, 1, VAR_3);
      FUNC_2("$%#r", VAR_42);
      break;

  case 143:
      FUNC_9(VAR_42, VAR_27, 1, VAR_3);
      if (VAR_42 != 0x0a)
   FUNC_2("$%#r", VAR_42);
      break;

  case 142:
      FUNC_9(VAR_42, VAR_27, 1, VAR_7);
      if (VAR_30 == VAR_8)
   VAR_42 &= 0xFFFF;
      FUNC_2("$%+#r", VAR_42);
      break;

  case 140:
      FUNC_9(VAR_42, VAR_27, 2, VAR_3);
      FUNC_2("$%#r", VAR_42);
      break;

  case 139:
      VAR_44 = (VAR_31 ? 2 : 4);
      FUNC_9(VAR_39, VAR_27, VAR_44, VAR_3);
      if (VAR_32)
   FUNC_2("%s:%+#r",VAR_32, VAR_39);
      else
   FUNC_3((db_addr_t)VAR_39, VAR_1);
      break;

  case 152:
      FUNC_9(VAR_39, VAR_27, 1, VAR_7);
      VAR_39 += VAR_27;
      if (VAR_30 == VAR_8)
   VAR_39 &= 0xFFFF;
      FUNC_3((db_addr_t)VAR_39, VAR_2);
      break;

  case 151:
      VAR_44 = VAR_23[VAR_30];
      FUNC_9(VAR_39, VAR_27, VAR_44, VAR_3);
      VAR_39 += VAR_27;
      if (VAR_30 == VAR_8)
   VAR_39 &= 0xFFFF;
      FUNC_3((db_addr_t)VAR_39, VAR_2);
      break;

  case 129:
      FUNC_2("$1");
      break;

  case 128:
      FUNC_2("$3");
      break;

  case 138:
      VAR_44 = VAR_23[VAR_30];
      FUNC_9(VAR_42, VAR_27, VAR_44, VAR_3);
      FUNC_9(VAR_43, VAR_27, 2, VAR_3);
      FUNC_2("$%#r,%#r", VAR_43, VAR_42);
      break;
     }
 }
 FUNC_2("\n");
 return (VAR_27);
}
