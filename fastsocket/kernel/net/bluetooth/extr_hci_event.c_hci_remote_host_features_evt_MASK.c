
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int ssp_mode; } ;
struct inquiry_entry {TYPE_1__ data; } ;
struct hci_ev_remote_host_features {int* features; int bdaddr; } ;
struct hci_dev {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 struct inquiry_entry* FUNC_3 (struct hci_dev*,int *) ;

__attribute__((used)) static inline void FUNC_4(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_ev_remote_host_features *VAR_2 = (void *) VAR_1->data;
 struct inquiry_entry *VAR_3;

 FUNC_0("%s", VAR_0->name);

 FUNC_1(VAR_0);

 if ((VAR_3 = FUNC_3(VAR_0, &VAR_2->bdaddr)))
  VAR_3->data.ssp_mode = (VAR_2->features[0] & 0x01);

 FUNC_2(VAR_0);
}
