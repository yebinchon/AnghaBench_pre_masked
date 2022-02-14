
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ dev; } ;
struct hci_dev {int (* send ) (struct sk_buff*) ;int promisc; int name; } ;
struct TYPE_2__ {int pkt_type; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1)
{
 struct hci_dev *VAR_2 = (struct hci_dev *) VAR_1->dev;

 if (!VAR_2) {
  FUNC_5(VAR_1);
  return -VAR_0;
 }

 FUNC_0("%s type %d len %d", VAR_2->name, FUNC_3(VAR_1)->pkt_type, VAR_1->len);

 if (FUNC_2(&VAR_2->promisc)) {

  FUNC_1(VAR_1);

  FUNC_4(VAR_2, VAR_1);
 }


 FUNC_6(VAR_1);

 return VAR_2->send(VAR_1);
}
