
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {char* dev_name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct hci_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct hci_dev *VAR_3 = FUNC_0(VAR_0);
 char VAR_4[249];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 248; VAR_5++)
  VAR_4[VAR_5] = VAR_3->dev_name[VAR_5];

 VAR_4[248] = '\0';
 return FUNC_1(VAR_2, "%s\n", VAR_4);
}
