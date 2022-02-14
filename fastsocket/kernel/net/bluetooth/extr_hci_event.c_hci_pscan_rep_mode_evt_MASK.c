
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int pscan_rep_mode; } ;
struct inquiry_entry {int timestamp; TYPE_1__ data; } ;
struct hci_ev_pscan_rep_mode {int pscan_rep_mode; int bdaddr; } ;
struct hci_dev {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 struct inquiry_entry* FUNC_3 (struct hci_dev*,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_4(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_ev_pscan_rep_mode *VAR_3 = (void *) VAR_2->data;
 struct inquiry_entry *VAR_4;

 FUNC_0("%s", VAR_1->name);

 FUNC_1(VAR_1);

 if ((VAR_4 = FUNC_3(VAR_1, &VAR_3->bdaddr))) {
  VAR_4->data.pscan_rep_mode = VAR_3->pscan_rep_mode;
  VAR_4->timestamp = VAR_0;
 }

 FUNC_2(VAR_1);
}
