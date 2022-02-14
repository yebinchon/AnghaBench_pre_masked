
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int name; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 __u8 VAR_2 = *((__u8 *) VAR_1->data);

 FUNC_0("%s status 0x%x", VAR_0->name, VAR_2);

 FUNC_1(VAR_0, VAR_2);
}
