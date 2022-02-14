
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html {int metal; int metac; } ;
typedef enum mandoc_esc { ____Placeholder_mandoc_esc } mandoc_esc ;
int
FUNC_0(struct html *VAR_0, enum mandoc_esc VAR_1)
{
 switch (VAR_1) {
 case 129:
  VAR_1 = VAR_0->metal;
  break;
 case 130:
 case 132:
 case 133:
 case 131:
 case 128:
  break;
 case 134:
  VAR_1 = 128;
  break;
 default:
  return 0;
 }
 VAR_0->metal = VAR_0->metac;
 VAR_0->metac = VAR_1;
 return 1;
}
