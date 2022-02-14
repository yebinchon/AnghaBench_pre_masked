
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

__attribute__((used)) static enum edit_key_code FUNC_0(int VAR_7, int VAR_8, char VAR_9)
{


 if (VAR_7 >= 0 || VAR_8 >= 0)
  return VAR_6;

 switch (VAR_9) {
 case 'F':
  return VAR_0;
 case 'H':
  return VAR_5;
 case 'P':
  return VAR_1;
 case 'Q':
  return VAR_2;
 case 'R':
  return VAR_3;
 case 'S':
  return VAR_4;
 default:
  return VAR_6;
 }
}
