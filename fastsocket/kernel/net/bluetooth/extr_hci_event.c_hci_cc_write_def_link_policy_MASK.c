
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int link_policy; int name; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 void* FUNC_3 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 __u8 VAR_3 = *((__u8 *) VAR_2->data);
 void *VAR_4;

 FUNC_0("%s status 0x%x", VAR_1->name, VAR_3);

 VAR_4 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 if (!VAR_3)
  VAR_1->link_policy = FUNC_1(VAR_4);

 FUNC_2(VAR_1, VAR_3);
}
