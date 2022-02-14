
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int flags; int name; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_dev*,int) ;
 void* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_5, struct sk_buff *VAR_6)
{
 __u8 VAR_7 = *((__u8 *) VAR_6->data);
 void *VAR_8;

 FUNC_0("%s status 0x%x", VAR_5->name, VAR_7);

 VAR_8 = FUNC_3(VAR_5, VAR_1);
 if (!VAR_8)
  return;

 if (!VAR_7) {
  __u8 VAR_9 = *((__u8 *) VAR_8);

  FUNC_1(VAR_2, &VAR_5->flags);
  FUNC_1(VAR_0, &VAR_5->flags);

  if (VAR_9 & VAR_3)
   FUNC_4(VAR_0, &VAR_5->flags);

  if (VAR_9 & VAR_4)
   FUNC_4(VAR_2, &VAR_5->flags);
 }

 FUNC_2(VAR_5, VAR_7);
}
