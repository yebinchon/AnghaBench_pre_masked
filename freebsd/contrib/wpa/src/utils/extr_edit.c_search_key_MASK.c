
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum edit_key_code { ____Placeholder_edit_key_code } edit_key_code ;
 int VAR_0 ;


 int VAR_1 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static enum edit_key_code FUNC_5(enum edit_key_code VAR_2)
{
 switch (VAR_2) {
 case 132:
 case 136:
 case 130:
 case 129:
 case 131:
 case 133:
 case 139:
 case 138:
  FUNC_4();
  return VAR_2;
 case 134:
 case 128:
  FUNC_1();
  return VAR_0;
 case 137:
 case 140:
  FUNC_0();
  break;
 case 135:
  FUNC_3();
  break;
 default:
  if (VAR_2 >= 32 && VAR_2 <= 255)
   FUNC_2(VAR_2);
  break;
 }

 return VAR_1;
}
