
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(int VAR_3, struct device *VAR_4)
{
 switch (VAR_3) {
 case 0:
  VAR_1 = FUNC_2(VAR_4, "ssi1");
  if (FUNC_0(VAR_1))
   return FUNC_1(VAR_1);
  return 0;
 case 1:
  VAR_2 = FUNC_2(VAR_4, "ssi2");
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);
  return 0;
 default:
  return -VAR_0;
 }
}
