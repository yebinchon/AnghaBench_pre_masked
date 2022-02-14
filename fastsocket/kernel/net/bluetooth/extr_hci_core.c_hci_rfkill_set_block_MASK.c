
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;


 int FUNC_0 (char*,struct hci_dev*,int ,int) ;
 int FUNC_1 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, bool VAR_1)
{
 struct hci_dev *VAR_2 = VAR_0;

 FUNC_0("%p name %s blocked %d", VAR_2, VAR_2->name, VAR_1);

 if (!VAR_1)
  return 0;

 FUNC_1(VAR_2);

 return 0;
}
