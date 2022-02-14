
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn {int* features; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct hci_conn* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct hci_conn *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "0x%02x%02x%02x%02x%02x%02x%02x%02x\n",
    VAR_3->features[0], VAR_3->features[1],
    VAR_3->features[2], VAR_3->features[3],
    VAR_3->features[4], VAR_3->features[5],
    VAR_3->features[6], VAR_3->features[7]);
}
