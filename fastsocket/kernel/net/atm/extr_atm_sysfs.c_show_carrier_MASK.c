
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct atm_dev {scalar_t__ signal; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct atm_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 char *VAR_4 = VAR_3;
 struct atm_dev *VAR_5 = FUNC_1(VAR_1);

 VAR_4 += FUNC_0(VAR_4, "%d\n",
         VAR_5->signal == VAR_0 ? 0 : 1);

 return VAR_4 - VAR_3;
}
