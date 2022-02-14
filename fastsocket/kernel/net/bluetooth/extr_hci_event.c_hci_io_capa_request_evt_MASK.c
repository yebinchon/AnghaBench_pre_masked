
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_io_capa_request {int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int ,int *) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;

__attribute__((used)) static inline void FUNC_5(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_ev_io_capa_request *VAR_3 = (void *) VAR_2->data;
 struct hci_conn *VAR_4;

 FUNC_0("%s", VAR_1->name);

 FUNC_3(VAR_1);

 VAR_4 = FUNC_1(VAR_1, VAR_0, &VAR_3->bdaddr);
 if (VAR_4)
  FUNC_2(VAR_4);

 FUNC_4(VAR_1);
}
