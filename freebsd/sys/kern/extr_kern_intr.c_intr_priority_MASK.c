
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;

u_char
FUNC_1(enum intr_type VAR_6)
{
 u_char VAR_7;

 VAR_6 &= (128 | 133 | 129 |
     132 | 130 | 131 | 134);
 switch (VAR_6) {
 case 128:
  VAR_7 = VAR_5;
  break;
 case 133:
  VAR_7 = VAR_1;
  break;
 case 129:
  VAR_7 = VAR_3;
  break;
 case 132:
  VAR_7 = VAR_1;
  break;
 case 134:
  VAR_7 = VAR_0;
  break;
 case 131:
  VAR_7 = VAR_4;
  break;
 case 130:
  VAR_7 = VAR_2;
  break;
 default:

  FUNC_0("intr_priority: no interrupt type in flags");
 }

 return VAR_7;
}
