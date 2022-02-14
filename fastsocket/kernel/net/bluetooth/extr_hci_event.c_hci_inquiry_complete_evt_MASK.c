
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int flags; int name; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 __u8 VAR_3 = *((__u8 *) VAR_2->data);

 FUNC_0("%s status %d", VAR_1->name, VAR_3);

 FUNC_1(VAR_0, &VAR_1->flags);

 FUNC_3(VAR_1, VAR_3);

 FUNC_2(VAR_1);
}
