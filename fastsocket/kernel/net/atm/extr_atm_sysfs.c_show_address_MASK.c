
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct atm_dev {int* esi; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct atm_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 char *VAR_4 = VAR_3;
 struct atm_dev *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < (VAR_0 - 1); VAR_6++)
  VAR_4 += FUNC_0(VAR_4, "%02x:", VAR_5->esi[VAR_6]);
 VAR_4 += FUNC_0(VAR_4, "%02x\n", VAR_5->esi[VAR_6]);

 return VAR_4 - VAR_3;
}
