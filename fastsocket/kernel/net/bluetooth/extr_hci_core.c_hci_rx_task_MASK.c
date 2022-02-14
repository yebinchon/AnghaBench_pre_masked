
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_dev {int name; int flags; int promisc; int rx_q; } ;
struct TYPE_2__ {int pkt_type; } ;


 int FUNC_0 (char*,int ) ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_4 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_5 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_6 (struct hci_dev*,struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct sk_buff* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_3)
{
 struct hci_dev *VAR_4 = (struct hci_dev *) VAR_3;
 struct sk_buff *VAR_5;

 FUNC_0("%s", VAR_4->name);

 FUNC_8(&VAR_2);

 while ((VAR_5 = FUNC_10(&VAR_4->rx_q))) {
  if (FUNC_1(&VAR_4->promisc)) {

   FUNC_6(VAR_4, VAR_5);
  }

  if (FUNC_11(VAR_1, &VAR_4->flags)) {
   FUNC_7(VAR_5);
   continue;
  }

  if (FUNC_11(VAR_0, &VAR_4->flags)) {

   switch (FUNC_2(VAR_5)->pkt_type) {
   case 130:
   case 128:
    FUNC_7(VAR_5);
    continue;
   }
  }


  switch (FUNC_2(VAR_5)->pkt_type) {
  case 129:
   FUNC_4(VAR_4, VAR_5);
   break;

  case 130:
   FUNC_0("%s ACL data packet", VAR_4->name);
   FUNC_3(VAR_4, VAR_5);
   break;

  case 128:
   FUNC_0("%s SCO data packet", VAR_4->name);
   FUNC_5(VAR_4, VAR_5);
   break;

  default:
   FUNC_7(VAR_5);
   break;
  }
 }

 FUNC_9(&VAR_2);
}
