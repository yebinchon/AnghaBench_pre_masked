
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn {int dst; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int bdaddr_t ;


 int FUNC_0 (int *,int *) ;
 char* FUNC_1 (int *) ;
 struct hci_conn* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct hci_conn *VAR_3 = FUNC_2(VAR_0);
 bdaddr_t VAR_4;
 FUNC_0(&VAR_4, &VAR_3->dst);
 return FUNC_3(VAR_2, "%s\n", FUNC_1(&VAR_4));
}
