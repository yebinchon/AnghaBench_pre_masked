
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_conn {int dummy; } ;
struct hci_conn {scalar_t__ type; int dst; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct hci_conn*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct l2cap_conn* FUNC_3 (struct hci_conn*,int ) ;
 int FUNC_4 (struct hci_conn*,int ) ;
 int FUNC_5 (struct l2cap_conn*) ;

__attribute__((used)) static int FUNC_6(struct hci_conn *VAR_1, u8 VAR_2)
{
 struct l2cap_conn *VAR_3;

 FUNC_0("hcon %p bdaddr %s status %d", VAR_1, FUNC_1(&VAR_1->dst), VAR_2);

 if (VAR_1->type != VAR_0)
  return 0;

 if (!VAR_2) {
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  if (VAR_3)
   FUNC_5(VAR_3);
 } else
  FUNC_4(VAR_1, FUNC_2(VAR_2));

 return 0;
}
