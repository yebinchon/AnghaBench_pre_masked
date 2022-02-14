
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum edit_key_code { ____Placeholder_edit_key_code } edit_key_code ;


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
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,unsigned char*,int) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static enum edit_key_code FUNC_4(int VAR_23)
{
 int VAR_24;
 unsigned char VAR_25[1];
 int VAR_26;
 static int VAR_27 = -1;
 static char VAR_28[7];

 VAR_26 = FUNC_2(VAR_23, VAR_25, 1);
 if (VAR_26 < 0)
  FUNC_1("read");
 if (VAR_26 <= 0)
  return VAR_20;

 VAR_24 = VAR_25[0];

 if (VAR_27 >= 0) {
  if (VAR_24 == 27 ) {
   VAR_27 = 0;
   return VAR_21;
  }

  if (VAR_27 == 6) {
   FUNC_3(VAR_28, VAR_24, 0);
   VAR_27 = -1;
  } else {
   VAR_28[VAR_27++] = VAR_24;
   VAR_28[VAR_27] = '\0';
  }
 }

 if (VAR_27 == 1) {
  if (VAR_28[0] != '[' && VAR_28[0] != 'O') {
   FUNC_3(VAR_28, VAR_24, 1);
   VAR_27 = -1;
   return VAR_21;
  } else
   return VAR_21;
 }

 if (VAR_27 > 1) {
  if ((VAR_24 >= '0' && VAR_24 <= '9') || VAR_24 == ';')
   return VAR_21;

  if (VAR_24 == '~' || (VAR_24 >= 'A' && VAR_24 <= 'Z')) {
   VAR_27 = -1;
   return FUNC_0(VAR_28);
  }

  FUNC_3(VAR_28, VAR_24, 2);
  VAR_27 = -1;
  return VAR_21;
 }

 switch (VAR_24) {
 case 1:
  return VAR_1;
 case 2:
  return VAR_2;
 case 4:
  return VAR_3;
 case 5:
  return VAR_4;
 case 6:
  return VAR_5;
 case 7:
  return VAR_6;
 case 8:
  return VAR_7;
 case 9:
  return VAR_22;
 case 10:
  return VAR_8;
 case 13:
  return VAR_19;
 case 11:
  return VAR_9;
 case 12:
  return VAR_10;
 case 14:
  return VAR_11;
 case 15:
  return VAR_12;
 case 16:
  return VAR_13;
 case 18:
  return VAR_14;
 case 20:
  return VAR_15;
 case 21:
  return VAR_16;
 case 22:
  return VAR_17;
 case 23:
  return VAR_18;
 case 27:
  VAR_27 = 0;
  return VAR_21;
 case 127:
  return VAR_0;
 default:
  return VAR_24;
 }
}
