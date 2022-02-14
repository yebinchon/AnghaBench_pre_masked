
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_pin_code_req {int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ state; int disc_timeout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int ,int *) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static inline void FUNC_6(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct hci_ev_pin_code_req *VAR_5 = (void *) VAR_4->data;
 struct hci_conn *VAR_6;

 FUNC_0("%s", VAR_3->name);

 FUNC_4(VAR_3);

 VAR_6 = FUNC_1(VAR_3, VAR_0, &VAR_5->bdaddr);
 if (VAR_6 && VAR_6->state == VAR_1) {
  FUNC_2(VAR_6);
  VAR_6->disc_timeout = VAR_2;
  FUNC_3(VAR_6);
 }

 FUNC_5(VAR_3);
}
