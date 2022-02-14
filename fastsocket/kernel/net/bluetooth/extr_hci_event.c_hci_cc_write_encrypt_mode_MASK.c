
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int flags; int name; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_dev*,scalar_t__) ;
 void* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 __u8 VAR_4 = *((__u8 *) VAR_3->data);
 void *VAR_5;

 FUNC_0("%s status 0x%x", VAR_2->name, VAR_4);

 VAR_5 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_5)
  return;

 if (!VAR_4) {
  __u8 VAR_6 = *((__u8 *) VAR_5);

  if (VAR_6)
   FUNC_4(VAR_0, &VAR_2->flags);
  else
   FUNC_1(VAR_0, &VAR_2->flags);
 }

 FUNC_2(VAR_2, VAR_4);
}
