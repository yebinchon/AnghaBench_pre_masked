
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct hci_conn {int state; int out; int type; int refcnt; struct hci_dev* hdev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (char*,struct hci_conn*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_conn*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
 struct hci_conn *VAR_3 = (void *) VAR_2;
 struct hci_dev *VAR_4 = VAR_3->hdev;
 __u8 VAR_5;

 FUNC_0("conn %p state %d", VAR_3, VAR_3->state);

 if (FUNC_1(&VAR_3->refcnt))
  return;

 FUNC_4(VAR_4);

 switch (VAR_3->state) {
 case 130:
 case 129:
  if (VAR_3->type == VAR_0 && VAR_3->out)
   FUNC_2(VAR_3);
  break;
 case 131:
 case 128:
  VAR_5 = FUNC_6(VAR_3);
  FUNC_3(VAR_3, VAR_5);
  break;
 default:
  VAR_3->state = VAR_1;
  break;
 }

 FUNC_5(VAR_4);
}
