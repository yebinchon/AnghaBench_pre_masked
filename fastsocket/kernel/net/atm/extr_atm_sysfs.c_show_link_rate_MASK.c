
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct atm_dev {int link_rate; } ;
typedef int ssize_t ;





 int FUNC_0 (char*,char*,int) ;
 struct atm_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 char *VAR_3 = VAR_2;
 struct atm_dev *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;


 switch (VAR_4->link_rate) {
  case 128:
   VAR_5 = 155520000;
   break;
  case 129:
   VAR_5 = 622080000;
   break;
  case 130:
   VAR_5 = 25600000;
   break;
  default:
   VAR_5 = VAR_4->link_rate * 8 * 53;
 }
 VAR_3 += FUNC_0(VAR_3, "%d\n", VAR_5);

 return VAR_3 - VAR_2;
}
