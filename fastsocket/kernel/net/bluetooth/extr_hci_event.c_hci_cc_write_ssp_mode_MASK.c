
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {scalar_t__ ssp_mode; int name; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 void* FUNC_1 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 __u8 VAR_3 = *((__u8 *) VAR_2->data);
 void *VAR_4;

 FUNC_0("%s status 0x%x", VAR_1->name, VAR_3);

 if (VAR_3)
  return;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 VAR_1->ssp_mode = *((__u8 *) VAR_4);
}
