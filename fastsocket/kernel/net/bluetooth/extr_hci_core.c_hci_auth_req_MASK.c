
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
typedef unsigned long __u8 ;


 int FUNC_0 (char*,int ,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*,int ,int,unsigned long*) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_1, unsigned long VAR_2)
{
 __u8 VAR_3 = VAR_2;

 FUNC_0("%s %x", VAR_1->name, VAR_3);


 FUNC_1(VAR_1, VAR_0, 1, &VAR_3);
}
