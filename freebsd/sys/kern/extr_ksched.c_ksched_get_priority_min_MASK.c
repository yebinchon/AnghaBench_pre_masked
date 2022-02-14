
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksched {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




int
FUNC_0(struct ksched *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5;

 VAR_5 = 0;
 switch (VAR_3) {
 case 130:
 case 128:
  *VAR_4 = VAR_1;
  break;
 case 129:
  *VAR_4 = 0;
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }
 return (VAR_5);
}
