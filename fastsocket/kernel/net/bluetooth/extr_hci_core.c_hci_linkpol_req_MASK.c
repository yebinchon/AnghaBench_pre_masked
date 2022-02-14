
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
typedef int __le16 ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct hci_dev*,int ,int,int *) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_1, unsigned long VAR_2)
{
 __le16 VAR_3 = FUNC_1(VAR_2);

 FUNC_0("%s %x", VAR_1->name, VAR_3);


 FUNC_2(VAR_1, VAR_0, 2, &VAR_3);
}
