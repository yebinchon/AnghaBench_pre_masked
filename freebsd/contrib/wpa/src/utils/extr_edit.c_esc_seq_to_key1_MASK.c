
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
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;

__attribute__((used)) static enum edit_key_code FUNC_5(int VAR_13, int VAR_14, char VAR_15)
{


 if (VAR_13 < 0 && VAR_14 < 0)
  return FUNC_3(VAR_15);

 if (VAR_13 == 1 && VAR_14 == 2)
  return FUNC_4(VAR_15);

 if (VAR_13 == 1 && VAR_14 == 3)
  return FUNC_0(VAR_15);

 if (VAR_13 == 1 && VAR_14 == 4)
  return FUNC_1(VAR_15);

 if (VAR_13 == 1 && VAR_14 == 5)
  return FUNC_2(VAR_15);

 if (VAR_14 < 0) {
  if (VAR_15 != '~')
   return VAR_10;
  switch (VAR_13) {
  case 2:
   return VAR_9;
  case 3:
   return VAR_0;
  case 5:
   return VAR_12;
  case 6:
   return VAR_11;
  case 15:
   return VAR_4;
  case 17:
   return VAR_5;
  case 18:
   return VAR_6;
  case 19:
   return VAR_7;
  case 20:
   return VAR_8;
  case 21:
   return VAR_1;
  case 23:
   return VAR_2;
  case 24:
   return VAR_3;
  }
 }

 return VAR_10;
}
