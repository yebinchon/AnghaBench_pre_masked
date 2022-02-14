
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_sniff_subrate {int handle; int status; } ;
struct hci_dev {int name; } ;
struct hci_conn {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;

__attribute__((used)) static inline void FUNC_5(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_ev_sniff_subrate *VAR_2 = (void *) VAR_1->data;
 struct hci_conn *VAR_3;

 FUNC_0("%s status %d", VAR_0->name, VAR_2->status);

 FUNC_3(VAR_0);

 VAR_3 = FUNC_2(VAR_0, FUNC_1(VAR_2->handle));
 if (VAR_3) {
 }

 FUNC_4(VAR_0);
}
