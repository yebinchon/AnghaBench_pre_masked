
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_link_key_notify {int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {int disc_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int ,int *) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static inline void FUNC_6(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_ev_link_key_notify *VAR_4 = (void *) VAR_3->data;
 struct hci_conn *VAR_5;

 FUNC_0("%s", VAR_2->name);

 FUNC_4(VAR_2);

 VAR_5 = FUNC_1(VAR_2, VAR_0, &VAR_4->bdaddr);
 if (VAR_5) {
  FUNC_2(VAR_5);
  VAR_5->disc_timeout = VAR_1;
  FUNC_3(VAR_5);
 }

 FUNC_5(VAR_2);
}
