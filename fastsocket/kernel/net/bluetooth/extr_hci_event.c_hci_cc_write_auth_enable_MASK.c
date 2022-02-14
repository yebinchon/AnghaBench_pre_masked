
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int flags; int name; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_dev*,scalar_t__) ;
 void* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 __u8 VAR_5 = *((__u8 *) VAR_4->data);
 void *VAR_6;

 FUNC_0("%s status 0x%x", VAR_3->name, VAR_5);

 VAR_6 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_6)
  return;

 if (!VAR_5) {
  __u8 VAR_7 = *((__u8 *) VAR_6);

  if (VAR_7 == VAR_0)
   FUNC_4(VAR_1, &VAR_3->flags);
  else
   FUNC_1(VAR_1, &VAR_3->flags);
 }

 FUNC_2(VAR_3, VAR_5);
}
