
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_voice_setting {scalar_t__ status; int voice_setting; } ;
struct hci_dev {scalar_t__ voice_setting; int tx_task; int (* notify ) (struct hci_dev*,int ) ;int name; } ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_rp_read_voice_setting *VAR_3 = (void *) VAR_2->data;
 __u16 VAR_4;

 FUNC_0("%s status 0x%x", VAR_1->name, VAR_3->status);

 if (VAR_3->status)
  return;

 VAR_4 = FUNC_1(VAR_3->voice_setting);

 if (VAR_1->voice_setting == VAR_4)
  return;

 VAR_1->voice_setting = VAR_4;

 FUNC_0("%s voice setting 0x%04x", VAR_1->name, VAR_4);

 if (VAR_1->notify) {
  FUNC_3(&VAR_1->tx_task);
  VAR_1->notify(VAR_1, VAR_0);
  FUNC_4(&VAR_1->tx_task);
 }
}
