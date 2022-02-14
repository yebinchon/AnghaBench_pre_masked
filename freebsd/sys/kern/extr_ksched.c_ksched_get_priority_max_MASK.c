
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksched {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




int
FUNC_0(struct ksched *VAR_4, int VAR_5, int *VAR_6)
{
 int VAR_7;

 VAR_7 = 0;
 switch (VAR_5) {
 case 130:
 case 128:
  *VAR_6 = VAR_1;
  break;
 case 129:
  *VAR_6 = VAR_2 - VAR_3;
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }
 return (VAR_7);
}
